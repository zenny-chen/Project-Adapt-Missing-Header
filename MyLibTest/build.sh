clang  -std=gnu17  -Imylib  -c  -o main.o  main.c
clang++  -std=gnu++17  -Imylib  -c  -o cpptest.o  cpptest.cpp
clang  -o test  main.o cpptest.o
rm  main.o cpptest.o
