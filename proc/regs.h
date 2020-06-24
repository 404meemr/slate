#ifndef __PROC__REGS_H__
#define __PROC__REGS_H__

struct registers_t {
    uint64_t r15, r14, r13, r12, r11, r10, r9, r8, rsi, rdi, rbp, rdx, rcx, rbx,
        rax;
    uint64_t int_no, err_code;
    uint64_t rip, cs, rflags, rsp, ss;
};

#endif
