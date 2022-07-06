#include <stdio.h>
#include <uchar.h>

#if !MY_LIB_UCHAR_H
#error "mylib/uchar.h has not been included!!"
#endif

extern void CPPTest(void);

int main(void)
{
#if MY_LIB_UCHAR_IMPL
    puts("Used self-implemented <uchar.h>!!");
#endif
    
    char16_t ch = u'你';
    printf("The UTF16 code is: 0x%04X\n", ch);
    
    CPPTest();
}

