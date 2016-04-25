
# Overview 

Some Recipes regarding the Havok Physic Engine 

## mem_alloc1.cpp 

Before being able to use the Havok Solver, a Memory Frame needs to be allocated and this file shows the basic Memory Allocation Procedure

### Notes 

#### Params 

- The amount of memory to be allocated is user defined and in the code is stored in the `HK_SOLVERMEM_SIZE` macro definition 

#### Allocators 

- The `hkMallocAllocator` is the Standard Allocator which basically wraps calls to `malloc()` and `free()` 
- The `hkMallocAllocator` inherits from the generic `hkMemoryAllocator` which is the base class for allocators and has a set of Virtual Methods giving shape to the generic Allocator Object 

