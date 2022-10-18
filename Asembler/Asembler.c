#include<stdio.h>
#include <time.h>
#include <locale.h>


    int main()
    {

        setlocale(LC_ALL, "RUS");
        for (int i = 0; i < 10000; i++) 
        {
            ymn(-5, -2);
        }
        
        //sum(2, 5);
        //razn(5, 2);
        //ymn(-5, -2);
        //del(10, -5);
        //del_oct(20, 7);
       //crav(1, 5);
        //crav_3(4, 2, 4);
        //swap(5, 1);
        //sumc(2, 5);
        //razmc(5, 2);
        //delc(10, -5);
        //delos(20, 7);
        //sravc(1, 5);
        //crav_C(4,1,4);
        //swap_c(5, 1);
        printf("\n%d", clock());
    }

    int swap_c(int a, int b) 
    {
        int a1 = a;
        int b1 = b;
        b = a1;
        a = b1;
      /*  printf("%d %d", a, b);*/
    }

    int sravc(int a, int b)
    {
           if (a>b)
           {
               printf("1");
           }
           else if (a < b) 
           {
               printf("2");
           }
           else 
           {
               printf("0");
           }
    
    }

    int crav_C(int a, int b, int c) 
    {
        if (a > b && a>c)
        {
            printf("1");
        }
        else if (a < b && b>c)
        {
            printf("2");
        }
        else if (c > b && c > a)
        {
            printf("3");
        }
        else if (a == b && a > c)
        {
            printf("1 и 2 равны");
        }
        else if (c == b && a < c)
        {
            printf("2 и 3 равны");
        }
        else if (c == a && a > b)
        {
            printf("1 и 3 равны");
        }
        else
        {
            printf("0");
        }
    }

    int delos(int a, int b) 
    {
        return a % b;
    }

    int delc(int a, int b) 
    {
        return a / b;
    }

    int ymnc(int a, int b) 
    {
        return a * b;            
    }

    int sumc(int a, int b)
    {
        return a + b;
    }

    int razmc(int a, int b)
    {
        return a - b;    
    }

    int sum(int a, int b)
    {
        int otv;
        __asm
        {
            mov eax, a
            mov ebx, b
            add eax, ebx
            mov otv, eax
        }
        /*printf("Сумма: %d\n", otv);*/
    }

    int razn(int a, int b)
    {
        int otv;
        __asm
        {
            mov eax, a
            mov ebx, b
            sub eax, ebx
            mov otv, eax
        }
      /*  printf("Разность: %d\n", otv);*/
    }

    int ymn(int a, int b)
    {
        int otv;
        __asm
        {
            mov eax, a
            mov ebx, b
            imul ebx
            mov otv, eax
        }
      /*  printf("Умножение: %d\n", otv);*/
    }

    int del(int a, int b)
    {
        int otv;
        __asm
        {
            mov eax, a
            mov ebx, b
            mov edx, 0
            idiv ebx
            mov otv, eax
        }
        /*printf("Деление: %d\n", otv);*/
    }

    int del_oct(int a, int b)
    {
        int otv;
        __asm
        {
            mov eax, a
            mov ecx, b
            mov edx, 0
            div ecx
            mov otv, edx //остаток от деления

        }
       /* printf("Остаток от деления: %d\n", otv);*/
    }

    int crav(int a, int b)
    {
        _asm
        {
            mov eax, a
            mov ebx, b
            cmp eax, ebx

            je equal
            jg greater
            jmp less

            equal :
            mov a, 0
                jmp exit

                greater :
            mov a, 1
                jmp exit

                less :
            mov a, 2
                jmp exit

                exit :
        }
       /* printf("Сравнение 2 чисел: %d\n", a);*/
    }

    int crav_3(int a, int b, int c)
    {
        _asm
        {
            mov eax, a
            mov ebx, b
            mov ecx, c
            cmp eax, ebx
            je equal
            jg greater
            jmp less


            equal :
            cmp eax, ecx
                je equal2
                jg greater2
                jmp less2

                greater :
            cmp eax, ecx
                je equal2
                jg greater2
                jmp less2

                less :
            cmp ebx, ecx
                je equal2
                jg greater3
                jmp less2

                equal2 :

            mov a, 0
                jmp exit

                greater2 :
            mov a, 1
                jmp exit

                less2 :
            mov a, 3
                jmp exit

                greater3 :
            mov a, 2
                jmp exit

                exit :
        }
       /* printf("Сравнение 3 чисел : %d\n", a);*/
    }

    
    int swap(int a, int b)
    {
        int c;
        __asm
        {
            mov eax, a
            mov ebx, b

            mov ecx, eax
            mov eax, ebx
            mov ebx, ecx

            mov a, eax
            mov b, ebx

        }
       /* printf("Замена : %d %d\n", a, b);*/

    }
