# 💻Data Structures and Algorithms (DSA)
This project contains C programs implementing fundamental **Data Structures and Algorithms** concepts. Each file demonstrates a specific algorithm or data structure operation, with clear code and sample usage.

---

## 📘 About the Project
Data Structures and Algorithms form the backbone of computer science and software development. This project:
- Covers basic to intermediate DSA concepts with practical examples.
- Implements each concept as a standalone C program, making it easy to understand, run, and modify.
- Is useful for learning, revising, or preparing for technical interviews and academic exams.

---

## 📂 What's Included?
- ✅ Stack and Queue (Linear & Circular)
- ✅ Expression Conversion
- ✅ Recursion-based Problems
- ✅ Linked Lists (Singly, Doubly, Circular)
- ✅ Tree and Tree Traversals
- ✅ Sorting Algorithms
- ✅ Searching Algorithms
- ✅ Utility Programs (like node counting, reversing integers, etc.)

---

## 📁 File Structure

Each file is named according to the concept it implements. For example, `stack.c` contains the implementation of a stack data structure. The files are organized into the following categories:

```
├── binarysearch.c
├── binarysearch.exe
├── bubblesorting.c
├── bubblesorting.exe
├── circular_queue.c
├── circular_queue.exe
├── conversion.c
├── conversion.exe
├── factorial.c
├── factorial.exe
├── fibonacci.c
├── fibonacci.exe
├── in_pre_post_node.c
├── in_pre_post_node.exe
├── insert_delete_beg_double_Linked.c
├── insert_delete_beg_double_Linked.exe
├── insert_delete_beg_Linked.c
├── insert_delete_beg_Linked.exe
├── insert_delete_circular_linked_list.c
├── insert_delete_circular_linked_list.exe
├── insert_delete_end_double_Linked.c
├── insert_delete_end_double_Linked.exe
├── insert_delete_end_Linked.c
├── insert_delete_end_Linked.exe
├── insert_delete_specific_Linked.c
├── insert_delete_specific_Linked.exe
├── insert_delete_specific_double_Linked.c
├── insert_delete_specific_double_Linked.exe
├── insertionsorting.c
├── insertionsorting.exe
├── integer.c
├── integer.exe
├── linear_queue.c
├── linear_queue.exe
├── linearsearch.c
├── linearsearch.exe
├── node_count_linke_list.c
├── node_count_linke_list.exe
├── primeCheck.c
├── primeCheck.exe
├── push_pop.c
├── push_pop.exe
├── queue.c
├── queue.exe
├── readme.md
├── tower.c
└── tower.exe
```
---

## 📚 Table of Contents

- 🧱 [Stacks and Queues](#stacks-and-queues)
  - [Stack (LIFO - Last In, First Out](#-stack-lifo--last-in-first-out)
  - [Queue (FIFO - First In, First Out)](#-queues-fifo--first-in-first-out)
- 🧮 [Expression Conversion](#expression-conversion)
- 🔁 [Recursion Examples](#recursion-examples)
  - [Factorial](#factorial)
  - [Fibonacci Series](#fibonacci-series)
  - [Reverse Integer](#reverse-integer)
  - [Prime Check](#prime-check)
  - [Tower of Hanoi](#tower-of-hanoi)
- 🔗 [Linked Lists](#linked-lists)
  - [Singly Linked List](#singly-linked-list)
  - [Doubly Linked List](#doubly-linked-list)
  - [Circular Linked List](#circular-linked-list)
  - [Count Nodes in Linked List](#count-nodes-in-linked-list)
- 🌳 [Tree and Traversals](#tree-and-traversals)
- 📊 [Sorting Algorithms](#sorting-algorithms)
  - [Bubble Sort](#bubble-sort)
  - [Insertion Sort](#insertion-sort)
- 🔍 [Searching Algorithms](#searching-algorithms)
  - [Linear Search](#linear-search)
  - [Binary Search](#binary-search)
- 🧪 [How to Compile and Run](#how-to-compile-and-run)
- 🧠 [Key Concepts](#key-concepts)
- 📌 [Notes](#notes)
- 👤 [Author](#author)

---

## 🧱 Stacks and Queues

### 📦 Stack (LIFO – Last In, First Out)

- **Description:** Implements stack operations (push, pop, peek, display) using an array.
- **File:** [push_pop.c](push_pop.c)

### 📬 Queues (FIFO – First In, First Out)

- **Description:** Implements queue operations (enqueue, dequeue, display) for both linear and circular queues.
- **Linear Queue:** [queue.c](queue.c), [linear_queue.c](linear_queue.c)
- **Circular Queue:** [circular_queue.c](circular_queue.c)

---

## 🧮 Expression Conversion

### ➡️ Infix to Postfix Conversion

- **Description:** Converts an infix expression(e.g., A+B) to postfix notation(e.g., AB+) using a stack.
- **File:** [conversion.c](conversion.c)

---

## 🔁 Recursion Examples
Recursion is a method of solving problems where the solution depends on solutions to smaller instances of the same problem.

### ✔️ Factorial

- **Description:** Calculates the factorial of a number using recursion.
- **File:** [factorial.c](factorial.c)

### ➕ Fibonacci Series

- **Description:** Prints the Fibonacci series up to `n` terms using recursion.
- **File:** [fibonacci.c](fibonacci.c)

### 🔃 Reverse Integer

- **Description:** Reverses an integer using recursion.
- **File:** [integer.c](integer.c)

### 🔎 Prime Check

- **Description:** Checks if a number is prime using recursion.
- **File:** [primeCheck.c](primeCheck.c)

### 🗼 Tower of Hanoi

- **Description:** Solves the Tower of Hanoi problem using recursion.
- **File:** [tower.c](tower.c)

---

## 🔗 Linked Lists
A linked list is a linear data structure where elements (nodes) point to the next node.

### 📎 Singly Linked List

- **Insert/Delete at Beginning→** [insert_delete_beg_Linked.c](insert_delete_beg_Linked.c)
- **Insert/Delete at End→** [insert_delete_end_Linked.c](insert_delete_end_Linked.c)
- **Insert/Delete at Specific Position→** [insert_delete_specific_Linked.c](insert_delete_specific_Linked.c)

### 🔄 Doubly Linked List

- **Insert/Delete at Beginning→** [insert_delete_beg_double_Linked.c](insert_delete_beg_double_Linked.c)
- **Insert/Delete at End→** [insert_delete_end_double_Linked.c](insert_delete_end_double_Linked.c)
- **Insert/Delete at Specific Position→** [insert_delete_specific_double_Linked.c](insert_delete_specific_double_Linked.c)

### 🌀 Circular Linked List

- **Insert/Delete at Position→** [insert_delete_circular_linked_list.c](insert_delete_circular_linked_list.c)

### 🔢 Count Nodes in Linked List

- **Description:** Counts the number of nodes in a singly linked list.
- **File:** [node_count_linke_list.c](node_count_linke_list.c)

---

## 🌳 Tree and Traversals
A tree is a hierarchical structure. Traversal means visiting each node in a specific order.

- **File:** [in_pre_post_node.c](in_pre_post_node.c)
- **Description:** Implements a Binary Search Tree (BST) with insertion and tree traversal methods (inorder, preorder, postorder).

---

## 📊 Sorting Algorithms
Sorting algorithms arrange elements in a specific order (ascending/descending). These are essential for efficient searching and data analysis.

### 🔹 Bubble Sort
- **Description:** Implements the bubble sort algorithm to sort an array of integers in ascending order. Repeatedly swaps adjacent elements if they are in the wrong order.
- **File:** [bubblesorting.c](bubblesorting.c)

### 🔹 Insertion Sort
- **Description:** Implements the insertion sort algorithm to sort an array of integers. Builds the final sorted array one item at a time.
- **File:** [insertionsorting.c](insertionsorting.c)

---

## 🔍 Searching Algorithms
Searching algorithms help locate an element in a dataset.
### 🔸 Linear Search
- **Description:** Searches for a specific element in an array using the linear (sequential) search method. Checks each element until the target is found.
- **File:** [linearsearch.c](linearsearch.c)

### 🔸 Binary Search
- **Description:** Searches for a specific element in a sorted array using the binary search algorithm. Efficiently searches a sorted array by repeatedly dividing the search interval.
- **File:** [binarysearch.c](binarysearch.c)

---
