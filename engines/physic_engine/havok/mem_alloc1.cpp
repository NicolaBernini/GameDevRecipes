/**
  * @file mem_alloc1.cpp 
  * @brief Code Snippet explaining how to allocate memory for the Havok Solver 
  */

/**
  * @brief The Size in Bytes of the Memory Frame allocated for the Havok Solver 
  */
#define HK_SOLVERMEM_SIZE 1024 * 1024

/**
  * @brief The Main Function 
  */
int HK_CALL main(int argc, const char** argv)
{
  /**
    * @brief The Default Malloc Allocator 
    * @note Allocators play an important role in performance optimization 
    */
  hkMallocAllocator baseMalloc;
  
  /**
    * @brief The hkMemoryRouter is the object representing the Memory Frame for the solver 
    * @note The initDefault() 1st argument is the Allocator hence the interface towards the underlying allocation mechanism. In this case the standard malloc() allocator is used 
    */
  hkMemoryRouter* memoryRouter = hkMemoryInitUtil::initDefault(&baseMalloc, hkMemorySystem::FrameInfo(HK_SOLVERMEM_SIZE));
  
  //** @brief It performs the actual system initialization 
  //** @note The init() 2nd argument is a function pointer of prototype void (const char* msg, void* userParam) where msg is the internal error msg to be printed 
  hkBaseSystem::init( memoryRouter, errorReport );
}

