# Uncommon C Pointer Arithmetic Bug

This repository demonstrates a subtle bug related to pointer arithmetic in C. The bug is not immediately obvious and may occur in more complex code where pointer manipulation is extensively used.  The provided code shows a simple example of this error, which can lead to unexpected behavior or program crashes.

The bug is explained in detail in the `bug.c` file and the corrected solution can be found in `bugSolution.c`. This example highlights the importance of understanding pointer arithmetic and its potential pitfalls when working with C.

## Bug Description
The main challenge lies in the careful manipulation of pointers to ensure they point to valid memory locations and do not cause memory corruption or segmentation faults.