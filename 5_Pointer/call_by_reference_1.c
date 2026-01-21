#include <stdio.h>

void fun (int* ptr) { // jehetu ekhabe parameter hisebe address pathano hobe tai address ke rakhar jonno pointer declare korte holo.  
    *ptr = 50; // dereference kore x er value 50 kore dilam. (*ptr --> ptr jar address ke point kore (x ke) tar value set kore dilam)
}
int main() {
    int x = 10;
    fun(&x); // parameter hisebe x er address pathiye dilam.
    printf("Value of x : %d\n", x);
}