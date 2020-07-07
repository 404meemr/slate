![alt text](slate.png "slate")

[![Build Status](https://travis-ci.org/404meemr/slate.svg?branch=master)](https://travis-ci.org/404meemr/slate)

### Features
- 64 bit Higher Half Long Mode
- Memory Management
- COM1 Serial
- VESA
- ACPI
- APICs
- HPET
- LAPIC Timer
- Scheduler (Round Robin)
- PCI

### Planned Features
These are in order of implementation.
- Disk
    - VFS
    - AHCI
    - EXT2/4
- SMP
- Syscalls
- Userspace
- Binary and ELF loading
- mlibc
- CFS
- Intel HD Audio

### Building and Running

Prerequisites:
- nasm
- parted
- losetup
- mkfs
- make
- clang
- qemu

```
make [FS="ext2|echfs"] [-j<n>]
```
