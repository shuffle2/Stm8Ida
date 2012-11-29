#include "stm8.hpp"

instruc_t Instructions[] = {

{ "",           0                               },        // Unknown Operation

{ "adc",        CF_CHG1|CF_USE1|CF_USE2         },        // Add with Carry
{ "add",        CF_CHG1|CF_USE1|CF_USE2         },        // Addition
{ "addw",       CF_CHG1|CF_USE1|CF_USE2         },        // Addition Word
{ "and",        CF_CHG1|CF_USE1|CF_USE2         },        // Logical And
{ "bccm",       CF_CHG1|CF_USE1|CF_USE2         },        // Copy carry in memory bit
{ "bcp",        CF_USE1|CF_USE2                 },        // Bit compare
{ "bcpl",       CF_USE1|CF_USE2                 },        // Bit complement
{ "break",      0                               },        // Software breakpoint
{ "bres",       CF_CHG1|CF_USE1                 },        // Bit Reset
{ "bset",       CF_CHG1|CF_USE1                 },        // Bit Set
{ "btjf",       CF_USE1|CF_USE2|CF_USE3         },        // Jump if bit is false
{ "btjt",       CF_USE1|CF_USE2|CF_USE3         },        // Jump if bit is true
{ "call",       CF_USE1|CF_CALL                 },        // Call subroutine
{ "callf",      CF_USE1|CF_CALL                 },        // Call subroutine far
{ "callr",      CF_USE1|CF_CALL                 },        // Call subroutine relative
{ "ccf",        0                               },        // Complement Carry Flag
{ "clr",        CF_CHG1                         },        // Clear
{ "clrw",       CF_CHG1                         },        // Clear destination index register
{ "cp",         CF_USE1|CF_USE2                 },        // Arithmetic Compare
{ "cpw",        CF_USE1|CF_USE2                 },        // Arithmetic Compare Word
{ "cpl",        CF_USE1|CF_CHG1                 },        // One Complement
{ "cplw",       CF_USE1|CF_CHG1                 },        // One Complement Word
{ "dec",        CF_USE1|CF_CHG1                 },        // Decrement
{ "decw",       CF_USE1|CF_CHG1                 },        // Decrement Word
{ "div",        CF_CHG1|CF_USE1|CF_USE2         },        // Division
{ "divw",       CF_CHG1|CF_USE1|CF_USE2         },        // Division Word
{ "exg",        CF_CHG1|CF_USE1|CF_CHG2|CF_USE2 },        // Data byte exchange
{ "exgw",       CF_CHG1|CF_USE1|CF_CHG2|CF_USE2 },        // Data word exchange
{ "halt",       0                               },        // Halt
{ "inc",        CF_USE1|CF_CHG1                 },        // Increment
{ "incw",       CF_USE1|CF_CHG1                 },        // Increment Word
{ "int",        CF_USE1|CF_CALL|CF_STOP         },        // Interrupt
{ "iret",       CF_STOP                         },        // Interrupt routine return
{ "jp",         CF_USE1|CF_STOP                 },        // Absolute Jump
{ "jpf",        CF_USE1|CF_STOP                 },        // Absolute Jump far
{ "jra",        CF_USE1|CF_STOP                 },        // Jump relative always
//{ "jrt",        CF_USE1|CF_STOP                 },        // Jump relative
{ "jrf",        CF_USE1                         },        // Never jump
{ "jrih",       CF_USE1                         },        // Jump if Port INT pin = 1
{ "jril",       CF_USE1                         },        // Jump if Port INT pin = 0
{ "jrh",        CF_USE1                         },        // Jump if H = 1
{ "jrnh",       CF_USE1                         },        // Jump if H = 0
{ "jrm",        CF_USE1                         },        // Jump if I = 1
{ "jrnm",       CF_USE1                         },        // Jump if I = 0
{ "jrmi",       CF_USE1                         },        // Jump if N = 1 (minus)
{ "jrpl",       CF_USE1                         },        // Jump if N = 0 (plus)
{ "jreq",       CF_USE1                         },        // Jump if Z = 1 (equal)
{ "jrne",       CF_USE1                         },        // Jump if Z = 0 (not equal)
{ "jrc",        CF_USE1                         },        // Jump if C = 1
{ "jrnc",       CF_USE1                         },        // Jump if C = 0
{ "jrnv",       CF_USE1                         },        // Jump if V = 0
{ "jrsge",      CF_USE1                         },
{ "jrsgt",      CF_USE1                         },
{ "jrsle",      CF_USE1                         },
{ "jrslt",      CF_USE1                         },
{ "jrult",      CF_USE1                         },        // Jump if C = 1
{ "jruge",      CF_USE1                         },        // Jump if C = 0
{ "jrugt",      CF_USE1                         },        // Jump if (C + Z = 0)
{ "jrule",      CF_USE1                         },        // Jump if (C + Z = 1)
{ "jrv",        CF_USE1                         },        // Jump if V = 1
{ "ld",         CF_CHG1|CF_USE2                 },        // Load
{ "ldf",        CF_CHG1|CF_USE2                 },        // Load far
{ "ldw",        CF_CHG1|CF_USE2                 },        // Load word
{ "mov",        CF_CHG1|CF_USE2                 },        // Move
{ "mul",        CF_CHG1|CF_USE1|CF_USE2         },        // Multiply
{ "neg",        CF_USE1|CF_CHG1                 },        // Negate
{ "negw",       CF_USE1|CF_CHG1                 },        // Negate word
{ "nop",        0                               },        // No Operation
{ "or",         CF_CHG1|CF_USE1|CF_USE2         },        // OR Operation
{ "pop",        CF_CHG1                         },        // Pop from the Stack
{ "popw",       CF_CHG1                         },        // Pop word from the Stack
{ "push",       CF_USE1                         },        // Push onto the Stack
{ "pushw",      CF_USE1                         },        // Push word onto the Stack
{ "rcf",        0                               },        // Reset carry flag
{ "ret",        CF_STOP                         },        // Subroutine Return
{ "retf",       CF_STOP                         },        // Subroutine Return far
{ "rim",        0                               },        // Enable Interrupts
{ "rlc",        CF_USE1|CF_CHG1                 },        // Rotate left true
{ "rlcw",       CF_USE1|CF_CHG1                 },        // Rotate left true word
{ "rlwa",       CF_USE1|CF_CHG1                 },        // Rotate left through accumulator
{ "rrc",        CF_USE1|CF_CHG1                 },        // Rotate right true
{ "rrcw",       CF_USE1|CF_CHG1                 },        // Rotate right true word
{ "rrwa",       CF_USE1|CF_CHG1                 },        // Rotate right through accumulator
{ "rvf",        0                               },        // Reset overflow flag
{ "sbc",        CF_CHG1|CF_USE1|CF_USE2         },        // Subtract with Carry
{ "scf",        0                               },        // Set carry flag
{ "sim",        0                               },        // Disable Interrupts
{ "sla",        CF_USE1|CF_CHG1                 },        // Shift left Arithmetic
{ "slaw",       CF_USE1|CF_CHG1                 },        // Shift left Arithmetic word
{ "sll",        CF_USE1|CF_CHG1                 },        // Shift left Logic
{ "sllw",       CF_USE1|CF_CHG1                 },        // Shift left Logic word
{ "sra",        CF_USE1|CF_CHG1                 },        // Shift right Arithmetic
{ "sraw",       CF_USE1|CF_CHG1                 },        // Shift right Arithmetic word
{ "srl",        CF_USE1|CF_CHG1                 },        // Shift right Logic
{ "srlw",       CF_USE1|CF_CHG1                 },        // Shift right Logic word
{ "sub",        CF_CHG1|CF_USE1|CF_USE2         },        // Substraction
{ "subw",       CF_CHG1|CF_USE1|CF_USE2         },        // Substraction word
{ "swap",       CF_USE1|CF_CHG1                 },        // SWAP nibbles
{ "swapw",      CF_USE1|CF_CHG1                 },        // SWAP bytes
{ "tnz",        CF_USE1                         },        // Test for Neg & Zero
{ "tnzw",       CF_USE1                         },        // Test for Neg & Zero word
{ "trap",       0                               },        // S/W trap
{ "unknown",    0                               },        // UNKNOWN 0x71 instruction
{ "wfe",        0                               },        // Wait for Event
{ "wfi",        0                               },        // Wait for Interrupt
{ "xor",        CF_CHG1|CF_USE1|CF_USE2         },        // Exclusive OR

};

#ifdef __BORLANDC__
#if qnumber(Instructions) != ST8_last
#error "number of entries in ins.cpp doesn't match number of entries in ins.hpp"
#endif
#endif