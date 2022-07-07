#include <cstdio>
#include <atomic>

#ifndef MY_LIB_ATMOIC
#error "MY_LIB_ATMOIC is not included!!"
#endif

extern "C" void CPPTest(void)
{
#if MY_LIB_ATMOIC_IMPL
    puts("self-implemented <atomic> is used!");
#endif
    
    std::atomic_int a(10);
    printf("The value is: %d\n", std::atomic_load(&a));
}

