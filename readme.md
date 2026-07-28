# Pointers Lab

A small C project created to understand pointers, pointer arithmetic, and how arrays are represented in memory.

The goal of this lab was to replace array indexing with pointer manipulation wherever practical and gain a deeper understanding of how pointers work internally.

---

## Topics Covered

- Pointer arithmetic
- Arrays and pointer decay
- Memory addresses
- Pointer traversal
- In-place array manipulation
- Two-pointer algorithms
- Modular programming using header files

---

## Implemented Functions

- Print array elements
- Print array addresses
- Pointer traversal
- Reverse an array
- Rotate an array
- Partition an array into even and odd numbers

---

## Project Structure

```
pointers_lab/
├── main.c
├── pointers_lab.c
├── pointers_lab.h
└── README.md
```

---

## Build

Compile using GCC:

```bash
gcc -Wall -Wextra -Wpedantic main.c pointers_lab.c -o pointers_lab
```

Run:

### Linux / macOS

```bash
./pointers_lab
```

### Windows

```bash
pointers_lab.exe
```

---

## Purpose

This project was written as a dedicated exercise to understand pointers from first principles before moving on to dynamic memory allocation, data structures, and more advanced C programming.

Rather than focusing on implementing many algorithms, the emphasis was on understanding:

- how pointers reference memory,
- how arrays behave as pointers,
- how pointer arithmetic works,
- and how common array operations can be implemented using pointers alone.

---

## Author

**Pratyush Pandey**