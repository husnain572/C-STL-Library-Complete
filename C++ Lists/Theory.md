# Notes: C++ Lists

### ➜ Concepts covered:
- `push_back`, `pop_back`, range-based loop

---

## Theoretical Explanation

In C++, `list` is a container in the Standard Template Library (STL) that implements a **doubly linked list**.

### Key Features:
- **Dynamically sized**: grows and shrinks as needed.
- **Non-contiguous memory**: unlike vectors, elements are not stored sequentially in memory.
- **Efficient insertion/deletion**: especially in the middle of the list.

### Key Functions
- **`push_back(val)`** – Adds element to the end.
- **`pop_back()`** – Removes the last element.
- **`begin()` / `end()`** – Iterators for list traversal.
- **Range-based `for` loop** – For simple iteration.

### Recommendation
Use `list` when you frequently add or remove elements from the **middle** of a collection, or need a **doubly-linked** structure.
Use `vector` if you need **random access** or **contiguous memory**.

### Summary
- `list` is a doubly linked list offering efficient insertion/deletion.
- No random access like `vector`, but ideal for frequent modifications in structure.
- Prefer `list` when performance in insert/remove operations is critical.

---
