# Core Data Structures in C++

![Build](https://github.com/pranav-0712/Core_Data_Structures_CPP/actions/workflows/build.yml/badge.svg)
![Language](https://img.shields.io/badge/language-C%2B%2B17-blue)

My path through C++ and Data Structures & Algorithms, from language basics
and pattern problems to the STL and core data structures. Every program
is a small, self-contained example with a header comment showing sample
input and output.

LeetCode solutions are in a separate repo:
[LeetCode-Solutions-CPP](https://github.com/pranav-0712/LeetCode-Solutions-CPP).

## Contents

### 01 · C++ Basics

| Program | Concept |
|---------|---------|
| [basic_concepts.cpp](01_Basics/basic_concepts.cpp) | Functions, variables, input/output, `if`, `for` and `while` |
| [if_else_sign_check.cpp](01_Basics/if_else_sign_check.cpp) | `if / else if / else` |
| [boolean_expressions.cpp](01_Basics/boolean_expressions.cpp) | Relational operators, `bool`, `boolalpha` |
| [bitwise_operators.cpp](01_Basics/bitwise_operators.cpp) | `&`, `\|`, `~`, `^` |
| [pre_vs_post_increment.cpp](01_Basics/pre_vs_post_increment.cpp) | `a++` vs `++a` |
| [pre_increment_in_expression.cpp](01_Basics/pre_increment_in_expression.cpp) | Pre-increment inside an expression |
| [short_circuit_evaluation.cpp](01_Basics/short_circuit_evaluation.cpp) | `&&` short-circuiting with side effects |
| [while_loop_even_numbers.cpp](01_Basics/while_loop_even_numbers.cpp) | `while` loop |
| [fibonacci_series.cpp](01_Basics/fibonacci_series.cpp) | First *n* Fibonacci terms |
| [prime_check.cpp](01_Basics/prime_check.cpp) | Primality test in O(√n) |

### 02 · Pattern Problems

Nested loops, one pattern per file (sample output for `n = 4`).

| # | Pattern | Output |
|---|---------|--------|
| 01 | [Square of stars](02_Patterns/01_square_star.cpp) | `****` × 4 rows |
| 02 | [Square of row numbers](02_Patterns/02_square_row_number.cpp) | `1111 / 2222 / 3333 / 4444` |
| 03 | [Square of column numbers](02_Patterns/03_square_column_number.cpp) | `1 2 3 4` × 4 rows |
| 04 | [Square counting down](02_Patterns/04_square_reverse_number.cpp) | `4321` × 4 rows |
| 05 | [Right triangle of stars](02_Patterns/05_right_triangle_star.cpp) | `* / ** / *** / ****` |
| 06 | [Square of consecutive numbers](02_Patterns/06_square_counting.cpp) | `1 2 3 4 / 5 6 7 8 / …` |
| 07 | [Number triangle](02_Patterns/07_right_triangle_number.cpp) | `1 / 12 / 123 / 1234` |
| 08 | [Row-number triangle](02_Patterns/08_right_triangle_row_number.cpp) | `1 / 22 / 333 / 4444` |
| 09 | [Inverted number triangle](02_Patterns/09_inverted_triangle_number.cpp) | `4444 / 333 / 22 / 1` |

### 03 · STL

| Program | Concept |
|---------|---------|
| [containers/vector_basics.cpp](03_STL/containers/vector_basics.cpp) | `vector` construction, `push_back`/`pop_back`, `at()`, iterators, size vs capacity |

## Roadmap

- [x] C++ basics
- [x] Pattern problems
- [ ] STL: `vector` ✅, `list`, `deque`, `stack`, `queue`, `set`, `map`, `unordered_map`, algorithms
- [ ] Arrays & strings
- [ ] Linked list (singly, doubly, circular)
- [ ] Stack & queue (array and linked-list implementations)
- [ ] Recursion & backtracking
- [ ] Searching & sorting
- [ ] Trees: binary tree, BST, traversals
- [ ] Heaps & priority queue
- [ ] Hashing
- [ ] Graphs: BFS, DFS, shortest paths

## Run any program

```bash
g++ -std=c++17 -Wall 02_Patterns/05_right_triangle_star.cpp -o program
./program
```

Every file is compiled with `-Wall -Wextra -Werror` by GitHub Actions on each push.

## Repository layout

```
01_Basics/        language fundamentals
02_Patterns/      nested-loop pattern problems
03_STL/           Standard Template Library
  containers/
```
