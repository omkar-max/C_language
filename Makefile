# Library Examples Makefile
# Demonstrates static vs dynamic linking concepts

CC = gcc

# Cross compiler setup
CROSS_COMPILE ?= aarch64-linux-gnu-
CC_ARM := $(CROSS_COMPILE)gcc

CFLAGS = -Wall -Wextra -fPIC
CFLAGS_ARM := $(CFLAGS)
LDFLAGS = -ldl
LDFLAGS_ARM := $(LDFLAGS)

# Static library
STATIC_LIB = libtest.a
STATIC_OBJS = lib1.o lib2.o
STATIC_LIB_ARM = libtest_arm.a
STATIC_OBJS_ARM = lib1_arm.o lib2_arm.o

# Shared library (from same sources as static library)
SHARED_LIBTEST = libtest.so
SHARED_LIBTEST_OBJS = lib1_pic.o lib2_pic.o
SHARED_LIBTEST_ARM = libtest_arm.so
SHARED_LIBTEST_OBJS_ARM = lib1_pic_arm.o lib2_pic_arm.o

# Additional shared library
SHARED_LIB = libinit.so
SHARED_OBJS = libinit.o
SHARED_LIB_ARM = libinit_arm.so
SHARED_OBJS_ARM = libinit_arm.o

# Executables - demonstrating static vs dynamic linking concepts
TARGETS = main_static main_dynamic runtime
TARGETS_ARM = main_static_arm main_dynamic_arm runtime_arm

# Default target (builds for host)
all: $(STATIC_LIB) $(SHARED_LIBTEST) $(SHARED_LIB) $(TARGETS)

# ARM compilation
arm: $(STATIC_LIB_ARM) $(SHARED_LIBTEST_ARM) $(SHARED_LIB_ARM) $(TARGETS_ARM)

# Static library
$(STATIC_LIB): $(STATIC_OBJS)
	ar rcs $@ $^

# ARM Static library
$(STATIC_LIB_ARM): $(STATIC_OBJS_ARM)
	$(CROSS_COMPILE)ar rcs $@ $^

# Shared library (libtest.so from same sources)
$(SHARED_LIBTEST): $(SHARED_LIBTEST_OBJS)
	$(CC) -shared -o $@ $^

# ARM Shared library
$(SHARED_LIBTEST_ARM): $(SHARED_LIBTEST_OBJS_ARM)
	$(CC_ARM) -shared -o $@ $^

# Additional shared library (libinit.so)
$(SHARED_LIB): $(SHARED_OBJS)
	$(CC) -shared -o $@ $^

# ARM Additional shared library
$(SHARED_LIB_ARM): $(SHARED_OBJS_ARM)
	$(CC_ARM) -shared -o $@ $^

# Object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# ARM Object files
%_arm.o: %.c
	$(CC_ARM) $(CFLAGS_ARM) -c $< -o $@

# Position-independent object files for shared library
%_pic.o: %.c
	$(CC) $(CFLAGS) -fPIC -c $< -o $@

# ARM Position-independent object files
%_pic_arm.o: %.c
	$(CC_ARM) $(CFLAGS_ARM) -fPIC -c $< -o $@

# Executables
# Static linking version - truly static (no dynamic dependencies)
main_static: main.o $(STATIC_LIB)
	$(CC) -static -o $@ $< $(STATIC_LIB)

# ARM Static linking version
main_static_arm: main_arm.o $(STATIC_LIB_ARM)
	$(CC_ARM) -static -o $@ $< $(STATIC_LIB_ARM)

# Dynamic linking version - use -ltest with shared library present
main_dynamic: main.o $(SHARED_LIBTEST)
	$(CC) -o $@ $< -L. -ltest

# ARM Dynamic linking version
main_dynamic_arm: main_arm.o $(SHARED_LIBTEST_ARM)
	$(CC_ARM) -o $@ $< -L. -ltest_arm

# Runtime loading example
runtime: runtime.o
	$(CC) -o $@ $< $(LDFLAGS)

# ARM Runtime loading example
runtime_arm: runtime_arm.o
	$(CC_ARM) -o $@ $< $(LDFLAGS_ARM)

# Analysis targets
analyze: $(TARGETS)
	@echo "=== Binary Analysis ==="
	@for target in $(TARGETS); do \
		echo "--- $$target ---"; \
		file $$target; \
		echo "Dependencies:"; \
		ldd $$target 2>/dev/null || echo "Statically linked"; \
		echo; \
	done

# Test targets - demonstrating library concepts
test: $(TARGETS)
	@echo "=== Testing Library Examples ==="
	@echo "Static linking demo:"
	@echo "test" | ./main_static
	@echo "\nDynamic linking demo:"
	@echo "test" | LD_LIBRARY_PATH=. ./main_dynamic
	@echo "\nRuntime loading demo:"
	@echo -e "\n\n" | LD_LIBRARY_PATH=. ./runtime

clean:
	rm -f *.o $(STATIC_LIB) $(SHARED_LIBTEST) $(SHARED_LIB) $(TARGETS)
	rm -f $(STATIC_LIB_ARM) $(SHARED_LIBTEST_ARM) $(SHARED_LIB_ARM) $(TARGETS_ARM)

.PHONY: all arm clean analyze test
