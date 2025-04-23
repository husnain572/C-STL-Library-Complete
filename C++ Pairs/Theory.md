
# Notes: C++ Pairs

### ➜ Concepts covered:
- `pair<type1, type2>`
- Nested pairs
- Pairs in vectors

---

## Theoretical Explanation

In C++, a `pair` is a simple container defined in the STL to store two related data items (values) together. It is useful when we want to keep two values tightly coupled.

### Key Features
- Defined as `pair<T1, T2>` where `T1` and `T2` can be any types.
- Members are accessed using `.first` and `.second`.
- Supports nesting: `pair<int, pair<char, int>>`.
- Works seamlessly with containers like vectors.

### Recommendation
Use `pair` when you want to logically associate two values.
Commonly used in maps, sets, priority queues, and to return multiple values from functions.

### Summary
- `pair` allows grouping of two values.
- Can be nested and stored in STL containers.
- Ideal for handling paired data in competitive programming and STL algorithms.

---
