[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![made-with-Markdown](https://img.shields.io/badge/Made%20with-Markdown-1f425f.svg)](http://commonmark.org)

# Search Algorithms

[Description](#description)</a> • [Resources](#resources) • [File Structure](#file-structure) • [Usage](#usage)

## Description

Searching Algorithms are designed to check for an element or retrieve an element from any data structure where it is stored. Based on the type of search operation, these algorithms are generally classified into two categories:

* Sequential Search: In this, the list or array is traversed sequentially and every element is checked. For example: Linear Search.

* Interval Search: These algorithms are specifically designed for searching in sorted data-structures. These type of searching algorithms are much more efficient than Linear Search as they repeatedly target the center of the search structure and divide the search space in half. For Example: Binary Search.

After this project I was able to explain these questions:

* What is a search algorithm
* What is a linear search
* What is a binary search
* What is the best search algorithm to use depending on your needs

## Resources

Valuable resources to help you understand this project:

* [Search algorithm](https://en.wikipedia.org/wiki/Search_algorithm)
* [Space complexity](https://www.geeksforgeeks.org/g-fact-86/)
* [Linear search algorithm](https://en.wikipedia.org/wiki/Linear_search)
* [Binary search algorithm](https://en.wikipedia.org/wiki/Binary_search_algorithm)

## File structure
This table contains a brief description of the working files of the project, click on the names to get the source code.

| File/Directory | Description/Task |
| --- | --- |
| <pre>[0-linear.c](0-linear.c)</pre> | Function that searches for a value in an array of integers using the Linear search algorithm |
| <pre>[1-binary.c](1-binary.c)</pre> | Function that searches for a value in a sorted array of integers using the Binary search algorithm |
| <pre>[2-O](2-O)</pre> | What is the time complexity (worst case) of a linear search in an array of size n? |
| <pre>[3-O](3-O)</pre> | What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n? |
| <pre>[4-O](4-O)</pre> | What is the time complexity (worst case) of a binary search in an array of size n? |
| <pre>[5-O](5-O)</pre> | What is the space complexity (worst case) of a binary search in an array of size n? |
| <pre>[6-O](6-O)</pre> | What is the space complexity of this function / algorithm? <pre>int **allocate_map(int n, int m)<br>{<br>  int **map;<br><br>  map = malloc(sizeof(int *) * n);<br>  for (size_t i = 0; i < n; i++)<br>  {<br>    map[i] = malloc(sizeof(int) * m);<br>  }<br>  return (map);<br>}</pre> |
| <pre>[0-linear.c](0-linear.c)</pre> | Function that searches for a value in an array of integers using the Linear search algorithm |

## Usage


