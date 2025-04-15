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
leafpad sum_1ton.c
```
2.Write the c program to add n numbers and then save crtl+s 
3.Run the given commend
```bash
gcc sum1ton.c
./a.out
```
![WhatsApp Image 2025-03-24 at 23 13 36 (1)](https://github.com/user-attachments/assets/d7018c2e-c65c-4be1-b009-92a6de2c0389)
![WhatsApp Image 2025-03-24 at 23 13 36 (1)](https://github.com/user-attachments/assets/62b77ba7-7fef-4b3c-b3d0-e7a9dbe05872)

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



## *TASK 2:
Compiled a c code and risc-v objdump optimization is done 

## *TASK 3:
learnt how to decode different instructions present in riscv-objdump which has 15 instructions


