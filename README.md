# CPP Module 08 – Standard Template Library (STL), Containers & Algorithms

## Table of Contents

1. [Project Overview](#project-overview)
2. [Core Concepts Introduced](#core-concepts-introduced)
   - [STL Containers](#stl-containers)
   - [Iterators](#iterators)
   - [STL Algorithms](#stl-algorithms)
   - [Functors](#functors)
3. [Exercise Breakdown](#exercise-breakdown)
   - [Ex00: Easy Find](#ex00-easy-find)
   - [Ex01: Span](#ex01-span)
   - [Ex02: MutantStack](#ex02-mutantstack)
4. [Compiling and Running](#compiling-and-running)
5. [Conclusion & What’s Next](#conclusion--whats-next)

---

## Project Overview

CPP08 introduces the **Standard Template Library (STL)**, a fundamental part of modern C++ development. It gives you powerful, generic containers and algorithms to write fast and clean code without reinventing the wheel.

We explore:

- STL containers: `vector`, `list`, `deque`, `stack`
- Iterators and their role in container traversal
- Generic algorithms like `find`, `sort`, `for_each`
- Custom class extension using inheritance

This module emphasizes **reusability**, **performance**, and **elegance** in C++ code.

---

## Core Concepts Introduced

### STL Containers

STL provides ready-made containers that manage memory and offer high-level functionality:

- `std::vector` – dynamic array
- `std::list` – doubly linked list
- `std::deque` – double-ended queue
- `std::stack` – LIFO container (adapter built over other containers)

### Iterators

Iterators act like generalized pointers. They allow you to traverse containers:

```cpp
std::vector<int> v = {1, 2, 3};
for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
    std::cout << *it << std::endl;
}
```

STL algorithms work with iterators, not directly with containers.

### STL Algorithms

Found in `<algorithm>`, these allow powerful operations on containers:

- `std::find(begin, end, value)`
- `std::sort(begin, end)`
- `std::for_each(begin, end, func)`

These operate on **ranges** defined by iterators, enabling generic and composable logic.

### Functors

A **functor** is any object that can be called like a function:

```cpp
struct Printer {
    void operator()(int n) const { std::cout << n << std::endl; }
};
```

Functors are useful for customizing behavior inside algorithms.

---

## Exercise Breakdown

### Ex00: Easy Find

**Goal:** Implement a function template `easyfind()` to search for an integer in any container.

**What we learn:**

- Use of `std::find`
- Template functions that work across multiple STL types
- Clean error handling when element is not found

### Ex01: Span

**Goal:** Create a class that stores numbers and calculates the shortest/longest span between them.

**What we learn:**

- STL containers (`std::vector`) for internal storage
- `std::sort` and `std::min_element`/`std::max_element`
- Exception handling and efficient search logic

### Ex02: MutantStack

**Goal:** Create a `MutantStack` that extends `std::stack` but adds iterator support.

**What we learn:**

- How STL containers like `stack` are built as adapters
- Inheriting from `std::stack` and exposing internal container iterators
- Creating an iterable stack (not supported by default)

---

## Compiling and Running

1. Navigate to the desired exercise:

```sh
cd ex02
```

2. Compile:

```sh
make
```

3. Run:

```sh
./mutant
```

4. Clean:

```sh
make clean
make fclean
make re
```

---

## Conclusion & What’s Next

In CPP08, we explored the **power and expressiveness of the STL**:

- Used **containers** for dynamic memory-safe structures
- Leveraged **iterators** to write generic traversal logic
- Applied **algorithms** to reduce boilerplate code

These tools form the backbone of production-level C++ development.

In **CPP09**, we’ll go deeper with **higher-order programming**, **function pointers**, and more real-world generic utilities.

