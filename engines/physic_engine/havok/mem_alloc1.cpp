
// MAIN FUNCTION
int HK_CALL main(int argc, const char** argv)
{
  hkMallocAllocator baseMalloc;
  hkMemoryRouter* memoryRouter = hkMemoryInitUtil::initDefault(&baseMalloc, hkMemorySystem::FrameInfo(1024 * 1024));
  hkBaseSystem::init( memoryRouter, errorReport );
}

