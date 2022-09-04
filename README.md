<img align='right' src='https://user-images.githubusercontent.com/5713670/87202985-820dcb80-c2b6-11ea-9f56-7ec461c497c3.gif' width='100'>

![made-with-Markdown](https://img.shields.io/badge/Made%20with-Markdown-1f425f.svg)
![GitHub last commit](https://img.shields.io/github/last-commit/schambig/holbertonschool-binary_trees)
[![C|C](https://img.shields.io/badge/Repo-354%20commits-orange.svg)](https://sourcerer.io/schambig)

# Holberton Low-level Programming

[Description](#description)</a> • [File Structure](#file-structure)

![C Programming](https://i.imgur.com/Ng28HSa.jpg)

---

## Description

C is an imperative, procedural programming language. It was initially developed by Dennis Ritchie between 1969 and 1973. It was mainly developed as a system programming language to write operating system. The main features of C language include low-level access to memory, simple set of keywords, and clean style, these features make C language suitable for system programming like operating system or compiler development.

But why learn C?, here are **some** of the important advantages of learning C programming:

* **C is a Middle-Level Language**, C gives as a good opportunity to interact with hardware, It reduces the gap between the low-level and high-level languages. It can be used for writing operating systems as well as doing application level programming.
* **Helps to understand the fundamentals of Computer Theories**, Most of the theories related to computers like Computer Networks, Compiler Designing, Computer Architecture, Operating Systems are based on C programming language and requires a good knowledge of C.
* **C is very fast in terms of execution time**, Programs written and compiled in C execute much faster than compared to any other programming language.
* **It will be easier to learn other programming languages**, Because so many different programming languages are based on or related to C, your knowledge of C will simplify the process of learning other languages. These languages typically share similar syntax, operators, control statements, data types and more.
* **The structure simplifies testing and debugging**, The C programming language is a strongly typed language, meaning data structures and variables must be declared in advance. As such, the compiler is able to enforce proper usage of these declared types and catch a variety of bugs at compile-time.

This repository contains projects developed using C language.

## File structure

This table contains all the projects of this repository, click on the name to be redirected to a project.

Please follow the next file order:

| Filename | Description/Task |
| --- | --- |
| [hello_world](hello_world) | Write a function that creates a binary tree node |
| <pre>[1-binary_tree_insert_left.c](1-binary_tree_insert_left.c)</pre> | Write a function that inserts a node as the left-child of another node |
| <pre>[2-binary_tree_insert_right.c](2-binary_tree_insert_right.c)</pre> | Write a function that inserts a node as the right-child of another node |
| <pre>[3-binary_tree_delete.c](3-binary_tree_delete.c)</pre> | Write a function that deletes an entire binary tree |
| <pre>[4-binary_tree_is_leaf.c](4-binary_tree_is_leaf.c)</pre> | Write a function that checks if a node is a leaf |
| <pre>[5-binary_tree_is_root.c](5-binary_tree_is_root.c)</pre> | Write a function that checks if a given node is a root |
| <pre>[6-binary_tree_preorder.c](6-binary_tree_preorder.c)</pre> | Write a function that goes through a binary tree using pre-order traversal |
| <pre>[7-binary_tree_inorder.c](7-binary_tree_inorder.c)</pre> | Write a function that goes through a binary tree using in-order traversal |
| <pre>[8-binary_tree_postorder.c](8-binary_tree_postorder.c)</pre> | Write a function that goes through a binary tree using post-order traversal |
| <pre>[9-binary_tree_height.c](9-binary_tree_height.c)</pre> | Write a function that measures the height of a binary tree |
| <pre>[10-binary_tree_depth.c](10-binary_tree_depth.c)</pre> | Write a function that measures the depth of a node in a binary tree |
| <pre>[11-binary_tree_size.c](11-binary_tree_size.c)</pre> | Write a function that measures the size of a binary tree |
| <pre>[12-binary_tree_leaves.c](12-binary_tree_leaves.c)</pre> | Write a function that counts the leaves in a binary tree |
| <pre>[13-binary_tree_nodes.c](13-binary_tree_nodes.c)</pre> | Write a function that counts the nodes with at least 1 child in a binary tree |
| <pre>[14-binary_tree_balance.c](14-binary_tree_balance.c)</pre> | Write a function that measures the balance factor of a binary tree |
| <pre>[15-binary_tree_is_full.c](15-binary_tree_is_full.c)</pre> | Write a function that checks if a binary tree is full |
| <pre>[16-binary_tree_is_perfect.c](16-binary_tree_is_perfect.c)</pre> | Write a function that checks if a binary tree is perfect |
| <pre>[17-binary_tree_sibling.c](17-binary_tree_sibling.c)</pre> | Write a function that finds the sibling of a node |
| <pre>[18-binary_tree_uncle.c](18-binary_tree_uncle.c)</pre> | Write a function that finds the uncle of a node |
| <pre>[binary_trees.h](binary_trees.h)</pre> | Contain the structure and prototypes of the project |
| <pre>[binary_tree_print.c](binary_tree_print.c)</pre> | Print a binary tree, this function is used only for visualization purposes |
| <pre>[main_files](main_files)</pre> | Contain all the main files that will be used at compilation to test the functions above |
| <pre>[output_files](output_files)</pre> | Contain all the executable files generated after compilation |


## Usage

To try this project in your machine, first clone the repository to your machine :

```
$ git clone https://github.com/schambig/holbertonschool-binary_trees.git
```

Then, go to the project directory:

```
$ cd holbertonschool-binary_trees
```

Finally, compile the source code you want, using its correspondent main file and the *.c files asked:

```
$ gcc -Wall -Wextra -Werror -pedantic /PATH/main_files/[MAIN_FILE.c] [FILENAME.c] -o [EXECUTABLE_NAME]
```

| Flag | Description |
| --- | --- |
| -Wall | Enable all the warnings in gcc |
| -Wextra | Enable extra warnings that are not enabled by -Wall |
| -Werror | Convert warnings into error |
| -pedantic | Issue all warnings demanded by strict ISO C |
<!-- | -std=gnu89 | Determine the language standard, in this case `gnu89` | -->


<p align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&height=60&section=footer"/>
</p>
