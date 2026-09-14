`emplace_front()`/`emplace_back()` construct in-place, `push_front()`/`push_back()` copy/move an already-constructed object.

But honestly, for `std::list` **it matters even less** than vectors. The bottleneck with lists is **node allocation** (every element is a separate heap allocation) — that overhead dominates and dwarfs any difference between emplace vs push.