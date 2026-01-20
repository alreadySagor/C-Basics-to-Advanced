#include <stdio.h>

int main() {
    double x = 5.6;
    double* ptr = &x;

    printf("Value of x : %.2lf\n", x);
    printf("Value of x : %.2lf\n", *ptr);

    printf("Address of x : %p\n", &x);
    printf("Address of x : %p\n", ptr);

    *ptr = 6.8;
    printf("Value of x after dereference (x) : %.2lf\n", x);

    printf("Size of x : %d\n", sizeof(x));
    printf("Size of x : %d\n", sizeof(*ptr));

    // int, double jei type er variable er address e jaihok na keno ba pointer variable rakhuk na keno, pointer variable er (ptr er) memory size 4 e ashbe.
    printf("Size of ptr : %d\n", sizeof(ptr));

    //----------------------------------------------------
    printf("-----------------------------------\n");
    double val = 10.5;
    double* p = &val;

    double* p2 = p;
    *p = 111.1111;

    printf("Value of val : %lf\n", val);
    printf("Value of val : %lf\n", *p);
    printf("Value of val : %lf\n", *p2);

    // ekhane jeta hoyeche, double*p = &val --> val value er address ke rakhche,
    //                      double* p2 = p ---> p er value rakhche. (p er value mane x er address)
    // tahole bolte pari, *p aar *p2 x kei point korche. 
    return 0;
}