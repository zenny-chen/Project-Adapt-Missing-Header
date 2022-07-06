#ifndef MY_LIB_UCHAR_H
#define MY_LIB_UCHAR_H      1

// 通过搜索当前环境指定的下一个搜索路径来先判定
// 当前是否含有系统自带的<uchar.h>
#if __has_include_next(<uchar.h>)
// 如果存在，则包含该系统自带的<uchar.h>
#include_next <uchar.h>

#else

#ifndef MY_LIB_UCHAR_IMPL
#define MY_LIB_UCHAR_IMPL   1
#endif

typedef unsigned short  char16_t;
typedef unsigned        char32_t;

#endif  // #if __has_include(<uchar.h>)

#endif  // #ifndef MY_LIB_UCHAR_H
