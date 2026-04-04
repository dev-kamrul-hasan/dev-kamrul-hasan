# 📘 C Programming Fundamentals: The Master Guide

This repository is a structured collection of C programming essentials. It tracks my progress from the very first "Hello World" to complex logic and memory management. Each file is a standalone lesson in core C syntax.

---

## 📂 Project Structure

| File | Core Topic | Detailed Description |
| :--- | :--- | :--- |
| `hello_world.c` | **Introduction** | The starting point of every programmer. Demonstrates basic structure and string output. |
| `variable.c` | **Memory & Types** | Exploration of `int`, `float`, `double`, `char`, and `bool`. Uses `sizeof()` to show memory allocation. |
| `input_output.c` | **User Interaction** | Demonstrates how to capture user input with `scanf` and display formatted results with `printf`. |
| `operators.c` | **Math & Assignment** | Covers arithmetic (+, -, *, /), increments (++), and compound operators (+=, *=). |
| `logic.c` | **Boolean Algebra** | Shows relational comparisons (`==`, `!=`) and logical operators (`&&`, `||`). |
| `control_flow.c` | **Decision Logic** | Uses `if...else if...else` ladders to categorize numbers and control program branching. |
| `loops.c` | **Iteration** | Compares all 3 loop types: **For**, **While**, and **Do-While** in a single functional context. |
| `calculator_switch.c`| **Switch Case** | A functional math tool using `switch` statements to handle different operator cases. |

---

## 🧠 Technical Deep Dive

### 1. The "Loop Trilogy"
In the `loops.c` file, we explore the three ways to repeat code:
* 
* **For Loop:** Best when you know exactly how many times to run.
* **While Loop:** Best when you are waiting for a specific condition (Entry-Controlled).
* **Do-While Loop:** The "guaranteed" loop. It runs at least once before checking the condition (Exit-Controlled).

### 2. Memory & Architecture
In `variable.c`, we learn that C is "close to the hardware." Because an `int` might be 2 bytes on an old system but 4 bytes on a modern Linux machine, we use the `sizeof()` operator to write code that works everywhere.

### 3. The Input Buffer Trick
In `input_output.c`, notice the leading space in `scanf(" %c", &name)`. This is a vital trick to clear the "Enter" key (newline) left in the system buffer from previous inputs, preventing the program from skipping your character prompts.

### 4. Switch vs. If-Else
While both control flow, `calculator_switch.c` shows why **Switch** is superior for menus. It is cleaner, faster, and easier to read than a massive `if-else` chain when checking specific constants like `+` or `-`.

---

## 🖥️ Development Environment
* **Operating System:** Linux
* **Compiler:** GCC (GNU Compiler Collection)

---
*Created for educational purposes. Feel free to clone and experiment!*
