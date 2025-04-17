## VSDSquadron Mini RISC-V Internship  

This is based on RISC-V architecture and we use all open source available, where I’m gaining hands-on experience with **RISC-V architecture, chip design, and industry-standard VLSI workflows**. Instructed by Kunal Ghosh sir.


# About Me  

- **Name:** B Keerthi  
- **College:** Ballari Institute of Technology and Management  
- **Email:** bkeerthi975@gmail.com  
- **GitHub:** https://github.com/BKeerthi975  
- **LinkedIn:** https://www.linkedin.com/in/b-keerthi-245449332/

<details>
<summary><strong>Task 1:</strong> Task is to install RISC-V toolchain from provided vdi and perform lab using C program and RISC-V lab</summary>

### 1. Install RISC-V toolchain using vdi file provided
![file-list](https://github.com/user-attachments/assets/fa9673e4-13b9-4bcd-9cbc-4933813ff5da)

### 2. C Program based lab
we have to follow these steps given below to perform this lab
1. Open the terminal and then open leafpad which is editor to save a c program file with name sum1ton
```bash
leafpad sum1ton.c
```
2.Write the c program to add n numbers and then save (crtl+s) 
3.Run the given commend
```bash
gcc sum1ton.c
./a.out
```
![WhatsApp Image 2025-03-24 at 23 13 36 (1)](https://github.com/user-attachments/assets/d7018c2e-c65c-4be1-b009-92a6de2c0389)
![image](https://github.com/user-attachments/assets/40dd2e03-0984-498a-80ec-a0d92f2d749d)

### 3. RISC-V Lab
Follow these commends
1.open terminal and run commend
```bash
cat sum1ton.c
riscv64-unknown-elf-gcc -O1 -mabi=lp64 -march=rv64i -o sum1ton.o sum1ton.c
ls ltr sum1ton.o
```
![image](https://github.com/user-attachments/assets/c0fc1d31-9ac2-4ccc-a2fb-94486114a7da)

2.run the given commend to see assembly language code of our c program

```bash
riscv64-unknown-elf-objdump -d sum1ton.o
```
![image](https://github.com/user-attachments/assets/cdaf76a8-f9c4-4a11-b6ff-ee30c73282b5)

### 🔍 Explanation of Command-Line 

- **`-mabi=lp64`**:  
  This option sets the Application Binary Interface (ABI) to `lp64`. In this mode, all integers, long integers, and pointers are treated as 64-bit values. It’s the standard ABI used when targeting a 64-bit RISC-V architecture.

- **`-march=rv64i`**:  
  With this flag, the compiler is told to use the `rv64i` instruction set, which is the base 64-bit integer instruction set for RISC-V. It clearly specifies that the code is meant for a 64-bit processor.

- **`riscv-objdump`**:  
  This is a disassembler tool specifically for RISC-V binaries. It helps break down compiled code into assembly instructions, which is very useful for understanding how your code behaves at the hardware level and for debugging.

- **`-Ofast`**:  
  This optimization flag enables aggressive compiler optimizations to boost performance. It goes beyond standard optimization levels by enabling flags that may disregard strict compliance with language standards. It’s ideal for performance-critical applications, but should be used with care since it might cause unexpected behavior in some cases.

- **`-O1`**:  
  This is a basic optimization level. It balances better performance with shorter compilation times. Compared to `-Ofast`, it’s more conservative, aiming to reduce execution time and code size without introducing risks of aggressive transformations.

</details>

<details>
<summary><strong>Task 2:</strong> Task is to perform SPIKE Simulation and Compile C program code and generate RISC-V objdump for both -O1 and -Ofast</summary>
1.WHAT IS SPIKE IN RISC-V?
        
SPIKE is a simulator for the RISC-V Instruction Set Architecture (ISA). It allows developers to test and analyze RISC-V programs without needing real hardware. SPIKE is written in C++ and is open-source. It simulates a RISC-V processor along with its cache system, making it useful for running software like applications or even the Linux kernel. It's commonly used as a starting point for testing and running programs on RISC-V platforms.

2.Install SPIKE

Using below commends we can install Spike 
```bash
sudo apt update
sudo apt install spike 
```

3.Written a c program for product of 2 numbers using the below commend and save it 
```bash
leafpad productab.c &
```
![image](https://github.com/user-attachments/assets/8249f7a7-2bca-4930-a1f0-d97f8a6601e3)

4.Images showing RISC-V objdunp for -O1 and -Ofast 

For -O1 
![image](https://github.com/user-attachments/assets/46579fba-b194-4021-8a1a-19beb9504db7)

For -Ofast
![image](https://github.com/user-attachments/assets/09e9f7cd-d0d4-4afa-b543-e6295d3561a0)

5.Images having 15 instruction for -O1 and 12 for -Ofast

For -O1 getting below shown 
![image](https://github.com/user-attachments/assets/c3354d96-3cbb-4ca4-b755-8a956a5b2e0a)

For -Ofast getting below shown
![image](https://github.com/user-attachments/assets/e4b80a86-579b-497d-9509-18c291310f50)


</details>


<details>
<summary><strong>Task 3:</strong> Task is to decode RISC-V 15 instructions and extract 32-bit code for each</summary>
1.What is RISC-V?

RISC-V is an open-source instruction set architecture (ISA) that empowers developers to design and build processors tailored to specific applications—without the burden of licensing fees. It stands out from proprietary ISAs by offering a flexible and free alternative, making it a popular choice for academic research, startups, and large-scale industrial designs alike.

Rooted in the principles of Reduced Instruction Set Computing (RISC), RISC-V represents the fifth generation of this streamlined computing architecture. Its simplicity and modular design make it both powerful and efficient, ideal for modern computing needs—from embedded systems to supercomputers.


2. Instruction Format in RISC-V

In any processor architecture, the instruction format defines how a machine-level instruction is structured. In RISC-V, instructions are represented in binary (a sequence of 0s and 1s) and each part of the instruction carries specific information—such as what operation to perform, which registers to use, and how data should be processed or moved.

These formats play a critical role in how the processor decodes and executes each command. Understanding how instructions are laid out helps in designing compilers, writing assembly programs, and even building custom hardware that supports the RISC-V standard.

There are 6 instruction formats in RISC-V:

R-format
I-format
S-format
B-format
U-format
J-format
RISCV Instruction Types

Let’s discuss each of the instruction formats in detail with examples.

1. R-type Instruction

In RV32, each instruction is of size 32 bits. In R-type instruction, R stands for register which means that operations are carried on the Registers and not on memory location. This instruction type is used to execute various arithmetic and logical operations. The entire 32 bits instruction is divided into 6 fields as shown below.

R-type

The first field in the instruction format is known as opcode, also referred as operation code. The opcode is of length 7 bits and is used to determine the type of instruction format.
The next subfield is known as rd field which is referred as Destination Register. The rd field is of length 5 bits and is used to store the final result of operation.
The next subfield is func3 also referred as function 3. Here the ‘3’ represents the size of this field. This field tells the detail about the operation, i.e., the type of arithmetic and logical that is performed.
The next two subfields are the source registers, rs1 and rs2 each of length 5 bits. These are mainly used to store and manipulate the data during the execution of instructions.
The last subfield is func7 also referred as function 7. Here ‘7’ represents the size of the field. The function of func7 field is same as that of func3 field.

2. I-type Instruction
In RV32, each instruction is of size 32 bits. In I-type instruction, I stand for immediate which means that operations use Registers and Immediate value for their execution and are not related with memory location. This instruction type is used in immediate and load operations. The entire 32 bits instruction is divided into 5 fields as shown below.

I-type

The first field in the instruction format is known as opcode, also referred as operation code. The opcode is of length 7 bits and is used to determine the type of instruction format.
The next subfield is known as rd field which is referred as Destination Register. The rd field is of length 5 bits and is used to store the final result of operation.
The next subfield is func3 also referred as function 3. Here the ‘3’ represents the size of this field. This field tells the detail about the operation, i.e., the type of arithmetic and logical that is performed.
The next subfield is the source registers, rs1 of length 5 bits. It is mainly used to store and manipulate the data during the execution of instructions.
The only difference between R-type and I-type is rs2 and func7 field of R-type has been replaced by 12-bits signed immediate, imm[11:0].

3. S-type Instruction
In RV32, each instruction is of size 32 bits. In S-type instruction, S stand for store which means it is store type instruction that helps to store the value of register into the memory. Mainly, this instruction type is used for store operations. The entire 32 bits instruction is divided into 6 fields as shown below.

s-type

The first field in the instruction format is known as opcode, also referred as operation code. The opcode is of length 7 bits and is used to determine the type of instruction format.
S-type instructions encode a 12-bit signed immediate, with the top seven bits imm[11:5] in bits [31:25] of the instruction and the lower five bits imm[4:0] in bits [11:7] of the instruction.
S-type instruction doesn’t have rd fields which states that these instructions are not used to write value to a register, but to write/store a value to a memory.
The value to be stored is defined in rs1 field and address to which we have to store this value is calculated using rs1 and immediate field. The width of the operation and types of instruction is defined by func3, it can be a word, half-word or byte.

4. B-type Instruction
In RV32, each instruction is of size 32 bits. In B-type instruction, B stand for branching which means it is mainly used for branching based on certain conditions. The entire 32 bits instruction is divided into 8 fields as shown below.

B-type

The first field in the instruction format is known as opcode, also referred as operation code. The opcode is of length 7 bits and is used to determine the type of instruction format.
B-type instructions encode a 12-bit signed immediate, with the most significant bit imm[12] in bit [31] of the instruction, six bits imm[10:5] in bits [25:30] of the instruction, four bits imm[4:1] in bits [11:8] and one bit imm[11] on bit[7].
There are two source registers rs1 and rs2 on which various operations are performed based on certain conditions, and those conditions are defined by func3 field.
After performing operations on the source register based on the conditions, it is evaluated that if the condition is true, Program Counter value gets updated by PC = Present PC Value + Immediate Value, and if the condition is false then PC will be given as PC = Present PC value + 4 bytes, which states that PC will move to next instruction set.
RV32 instructions are word-aligned, which means that address is always defined in the multiple of 4 bytes.

5. U-type Instruction
In RV32, each instruction is of size 32 bits. In U-type instruction, U stand for Upper Immediate instructions which means it is simply used to transfer the immediate data into the destination register. The entire 32 bits instruction is divided into 3 fields as shown below.

u-type

The first field in the instruction format is known as opcode, also referred as operation code. The opcode is of length 7 bits and is used to determine the type of instruction format.
The U-type instruction only consists of two instructions, i.e., LUI and AUIPC.
For Example, lets take the instruction lui rd, imm and understand this instruction. lui x15, 0x13579 : This instruction will be executed and the immediate value 0x13579 will be written in the MSB of the rd x15, and it will look like x15 = 0x13579000.

6. J-type Instruction
In RV32, each instruction is of size 32 bits. In U-type instruction, J stand for jump, which means that this instruction format is used to implement jump type instruction. The entire 32 bits instruction is divided into 6 fields as shown below.

j-type

The first field in the instruction format is known as opcode, also referred as operation code. The opcode is of length 7 bits and is used to determine the type of instruction format.
The J-type instruction only consists of single instruction, JAL.
J-type instruction encode 20 bits signed immediate which is divided into four fields.
The J-type instructions are often used to perform jump to the desired memory location. The address of the desired memory location is defined in the instruction. These instructions are also used to implement loops.

### Instruction 1: add x5, x6, x7  
- Format: R-Type  
- Opcode: 0110011  
- 32-bit Encoding: 0000000 00111 00110 000 00101 0110011  

### Instruction 2: sub x8, x9, x10  
- Format: R-Type  
- Opcode: 0110011  
- 32-bit Encoding: 0100000 01010 01001 000 01000 0110011  

### Instruction 3: and x11, x12, x13  
- Format: R-Type  
- Opcode: 0110011  
- 32-bit Encoding: 0000000 01101 01100 111 01011 0110011  

### Instruction 4: or x14, x15, x16  
- Format: R-Type  
- Opcode: 0110011  
- 32-bit Encoding: 0000000 10000 01111 110 01110 0110011  

### Instruction 5: xor x17, x18, x19  
- Format: R-Type  
- Opcode: 0110011  
- 32-bit Encoding: 0000000 10011 10010 100 10001 0110011  

### Instruction 6: sll x20, x21, x22  
- Format: R-Type  
- Opcode: 0110011  
- 32-bit Encoding: 0000000 10110 10101 001 10100 0110011  

### Instruction 7: srl x23, x24, x25  
- Format: R-Type  
- Opcode: 0110011  
- 32-bit Encoding: 0000000 11001 11000 101 10111 0110011  

### Instruction 8: lw x6, 12(x7)  
- Format: I-Type  
- Opcode: 0000011  
- 32-bit Encoding: 00001100 00111 010 00110 0000011  

### Instruction 9: sw x6, 12(x7)  
- Format: S-Type  
- Opcode: 0100011  
- 32-bit Encoding: 0000110 00110 00111 010 01100 0100011  

### Instruction 10: beq x5, x6, label  
- Format: B-Type  
- Opcode: 1100011  
- 32-bit Encoding: 000000 00110 00101 000 00000 1100011  

### Instruction 11: bne x7, x8, label  
- Format: B-Type  
- Opcode: 1100011  
- 32-bit Encoding: 000000 01000 00111 001 00000 1100011  

### Instruction 12: jal x1, label  
- Format: J-Type  
- Opcode: 1101111  
- 32-bit Encoding: 000000000000 00000 000 00001 1101111  

### Instruction 13: jalr x2, x3, 16  
- Format: I-Type  
- Opcode: 1100111  
- 32-bit Encoding: 00010000 00011 000 00010 1100111  

### Instruction 14: lui x4, 0x10000  
- Format: U-Type  
- Opcode: 0110111  
- 32-bit Encoding: 00010000000000000000 00100 0110111  

### Instruction 15: auipc x5, 0x20000  
- Format: U-Type  
- Opcode: 0010111  
- 32-bit Encoding: 00100000000000000000 00101 0010111

</details>


