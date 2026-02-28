#----------------------------
TARGET = c-main
ARCH   = 64

ifeq ($(ARCH), 32)
CFLAGS += -m32
endif

# Detect default PIE and add -no-pie if needed
CFLAGS += $(shell gcc -v 2>&1 | grep enable-default-pie > /dev/null && echo -no-pie)
CFLAGS += -g -std=c99

# Add linker flags
LDFLAGS += -z noexecstack
LDFLAGS += -nostartfiles    # <-- IMPORTANT: skip crt1.o

# Default target
all: $(TARGET)

# Compile ASM files
%.o: %.asm
	nasm -g -f elf$(ARCH) -Fdwarf $< -o $@

# Clean
clean:
	rm -rf $(TARGET) *.o

# Link program
$(TARGET): asm-module.o c-main.o
	$(CC) $(CFLAGS) $(LDFLAGS) asm-module.o c-main.o -o $(TARGET)

# Compile C source
c-main.o: c-main.c
	$(CC) $(CFLAGS) -c c-main.c -o c-main.o