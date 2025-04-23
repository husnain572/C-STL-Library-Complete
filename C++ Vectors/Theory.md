# Notes: C++ Vectors

### ➤ Concepts covered:
- `push_back`, `pop_back`, `emplace_back`
- `insert`, `erase`, `clear`
- Iterators (`begin`, `end`, `rbegin`, `rend`)
- Vector properties (`size`, `capacity`, `at`, `front`, `back`)

---

## Theoretical Explanation

In C++, vectors are part of the **Standard Template Library (STL)**. They are **dynamic arrays** that can automatically resize when elements are added or removed.

### Key Functions
- **`push_back()`** – Adds an element to the end of the vector.
- **`emplace_back()`** – More efficient version of `push_back`, constructs element in-place.
- **`pop_back()`** – Removes the last element.
- **`insert(pos, val)`** – Inserts value at specified position.
- **`erase(pos)` or `erase(start, end)`** – Removes elements from a specific position or range.
- **`clear()`** – Removes all elements from the vector.
- **`size()`** – Returns the number of elements in the vector.
- **`capacity()`** – Returns the amount of storage space currently allocated.
- **`at(index)`** – Accesses element at index with bounds checking.
- **`front()`** – Accesses the first element.
- **`back()`** – Accesses the last element.

### Iterators
- **`begin()`** – Points to the first element.
- **`end()`** – Points just past the last element.
- **`rbegin()`** – Points to the last element (used for reverse iteration).
- **`rend()`** – Points just before the first element in reverse.

### Recommendation
Use vectors instead of arrays when you need:
- Dynamic resizing
- Easy insertion/deletion
- Safer and more modern C++ code

### Summary
- Vectors provide dynamic arrays with flexible size.
- They offer safe element access and powerful methods for modification.
- Iterators make traversal convenient and efficient.
- Use vectors over arrays in modern C++ when dynamic sizing is needed.

---
