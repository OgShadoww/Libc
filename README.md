# Libc

A small, from-scratch C standard library implementation focused on fundamentals: low-level routines, minimal dependencies, and a build that stays close to the metal.

> **Status:** Work in progress. Expect missing APIs, sharp edges, and occasional ABI/behavior changes.

## What this is

**Libc** is a learning- and systems-oriented implementation of pieces of the C standard library, written primarily in **C**, with supporting **Assembly** and **Makefile** build logic.

Depending on your goals, this project can be useful for:

- Understanding how common libc routines work internally (string/memory, character handling, etc.)
- Bootstrapping a small userland for an OS-dev or bare-metal environment
- Experimenting with ABI details, calling conventions, and optimized routines
- Having a minimal libc-like layer where you can control exactly what gets included

## What this is not

- A drop-in replacement for glibc/musl for general-purpose Linux distribution use
- A fully conforming, complete ISO C libc (yet)
- A security-hardened, production-ready libc

## Repository layout (typical)

Exact paths may differ depending on how the project is currently organized, but you’ll usually see some combination of:

- `src/` — C sources implementing library functions
- `include/` — public headers
- `tests/` — unit or integration tests (if present)
- `Makefile` — build rules

If this repo doesn’t currently match the above, consider it a suggested target structure.

## Supported environments

This project is intended for low-level environments, which may include:

- freestanding builds (`-ffreestanding`)
- hosted builds for experimentation
- cross-compilation toolchains

## Building

This repository uses **Make**.

Common commands (if implemented in the Makefile):

```sh
make
make clean
```
