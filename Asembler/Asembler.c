#include<stdio.h>
#include <time.h>
int main(int argc, char* argv[]) {
    system("chcp 1251>nul");


    int a = 5;
    int b = 15;
 /*   int c = plus(a,b);   
    printf("%d + %d = %d\n", a, b, c);


    int d = minus(a, b);
    printf("%d - %d = %d\n", a, b, d);

    int e = division(a, b);
    printf("%d / %d = %d\n", a, b, e);


    int f = multiplication(a, b);
    printf("%d * %d = %d\n", a, b, f);

    int g = divisionost(a, b);
    printf("%d / %d = %d\n", a, b, g);*/
    

   /* int h = plus1(a, b);
    printf("%d + %d = %d\n", a, b, h);*/

    /*int i = minus1(a, b);
    printf("%d + %d = %d\n", a, b, i);*/


   /* int j = Del(a, b);
    printf("%d / %d = %d\n", a, b, j);*/


   /* int k = ymn(a, b);
    printf("%d * %d = %d\n", a, b, k);*/


  /*  int l = del(a, b);
    printf("%d / %d = %d\n", a, b, l);*/

    printf("%d", clock());

    


    return 0;

}
    


int plus(int a, int b) 
{
    int c;
    __asm 
    {
        mov    eax, a
        mov    ebx, b
        add    eax, ebx
        mov    c, eax
    }
    return c;
}
int minus(int a, int b)
{
    int d;
    __asm
    {
        mov    eax, a
        mov    ebx, b
        sub    eax, ebx
        mov    d, eax
    }
    return d;
}
int division(int a, int b)
{
    int e;

    __asm {
        mov eax, a
        mov ebx, b
        xor edx, edx;
        idiv ebx;
        mov e, eax;
    }
    return e;
}


int multiplication(int a, int b)
{
    int f;

    __asm {
        mov eax, a
        mov ebx, b
        xor edx, edx;
        imul ebx;
        mov f, eax;
    }
    return f;
}


int divisionost(int a, int b)
{
    int g;

    __asm {
        mov eax, a
        mov ebx, b
        xor edx, edx;
        idiv ebx;
        mov g, edx;
    }
    return g;
}


int plus1(int a, int b) 
{
      return a+b;
}

int minus1(int a, int b)
{
    return a - b;
}

int Del(int a, int b)
{
    return a / b;
}

int ymn(int a, int b)
{
    return a * b;
}

int del(int a, int b)
{
    return a % b;
}

int srav(int a, int b)
{
    if (a > b) 
    {
        int c = 1;
        return c;
    }
    else if (a < b)
    {
        int d = 2;
        return d;
    }
    else 
    {
        int f = 0;
        return f;
    }

}