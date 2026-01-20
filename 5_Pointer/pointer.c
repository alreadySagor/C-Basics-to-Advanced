#include <stdio.h>

int main() {
    int x = 10;
    // x er memory address dekhte chai, tai address dekhar jonno format specifier hisebe %p aar jehetu x er address dekhte chai tai x er address ke nirdesh korte & diye x ke diyechi.
    printf("%p\n", &x);

    // pointer variable.
    // jehetu x ekti integer type er data tai er address dekhte chaile pointer er data type o int type er nite hobe. (int type memory te 4 byte jayga dokhol kore, ar memory address ta sobsomoy prothom byte er ta pawa jay
    //                                   jehetu 4 type er jayga tai oi int type er value memory er kon ghore thakbe seta jani na
    //                                   tai jei datar address ber korbo tar data type diye dile oi data type er prothom ghorer address er sahajje baki ghor gula sohojei detect kora jay.)
    // tarpor ekta star sign (*) diye pointer variable er naam dite hobe.
    int *p = &x; // pointer variable shudhu memory'r address rakhte pare ba address rakhar jonno. (&x diye x er memory address ke nirdesh kore)
    printf("%p\n", p); // x er address ke show korbe. (ekhon ei pointer variable er aage * dite hobe na.) 

    // ekhon, x er value dekhte chaile x er maddhome to amra dekhtei pari, kintu jehetu p er kache x er address ache amra chaile p er sahajje x er value dekhte pari.
    // eitake bole "dereference" orthat reference kore je eta kar pointer tar value ta dau.
    // ekhane p hocche x er pointer, tahole p ke dereference kora mane p er maddhome value niye asha

   // x ekta integer type er data, tai er format specifier hobe %d. 
    printf("%d\n", p); // address er integer value ashbe.
    printf("%d\n", *p); // pointer address er value ta ashbe.


    // amra chaile x = 10 theke x = 100 kore dite pari just x = 100 likhe.
    // kintu ami chai x = 100 likhe x er maan poriborton na kore, x er memory address ta je pointer variable p er moddhe rekhechi sei p er sahajje poriborton korte.

    // dereference kore change korbo
    *p = 100; // Behind the scene x er maan 100 hoye gelo.

    printf("%d\n", x);
    return 0;
}

// pointer declare kora
// --> int *p = &x;

// pointer address er value print kora
// --> printf("%d\n", *p)