#include <stdio.h>

void fun(int a)
{
    printf("Value of a is %d\n", a);
}

void add(int a, int b)
{
    printf("Addition is %d\n", a + b);
}

void substract(int a, int b)
{
    printf("Substraction is %d\n", a - b);
}

void multiply(int a, int b)
{
    printf("Multiplication is %d\n", a * b);
}

int main()
{
    // fun_ptr is a pointer to funtion fun
    // funtion pointer point to the code, not data
    void (*fun_ptr)(int) = &fun;

    (*fun_ptr)(10);

    void (*fun_ptr1)(int) = fun;

    (*fun_ptr1)(10);

    void (*func_ptr_arr[])(int, int) = {add, substract, multiply};

    unsigned int ch, a = 15, b = 10;

    printf("Enter choice: 0 for add, 1 for substract, 2 for multiply\n");
    scanf("%d", &ch);

    if (ch > 2)
    {
        return 0;
    }

    (*func_ptr_arr[ch])(a, b);

    return 0;
}