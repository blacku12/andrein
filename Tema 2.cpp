/*
1) 
Scrieti o functie care se foloseste de for sa parcurga numerele de la 0 la 100.
Daca numarul este par, va fi adunat intr-o alta variabila, si se va trece la urmatorul numar.
Daca numarul este mai mic decat 10, va fi afisat pe ecran.
Daca numarul este intre 10 si 20, vom trece la urmatorul numar.
*/

#include <iostream>

using namespace std;

int main()
{
    int i, total;
    for (i=0; i<101; i++) {
        if (i<10) {std::cout << i << std::endl;}
        else if (i<=20) {continue;}
        if (i%2 ==0) {total += i;}
        
    }
    std::cout << std::endl << "Suma numerelor pare este: "<< total;

    return 0;
}



/*
2)
Scrieti o functie care afiseaza pe ecran numerele de la 1 la 100, fiecare pe un rand.
Daca numarul este multiplu de 3, afisati "Fizz" in loc de acel numar.
Daca numarul este multiplu de 5, afisati "Buzz" in loc de acel numar.
Daca numarul este multiplu si de 3 si de 5, afisati "FizzBuzz" in loc de acel numar.
*/


#include <iostream>

using namespace std;

int main()
{
    int i;
    for (i=0; i<101; i++) {
        if (i%3 == 0 && i%5 == 0) {std::cout << "FizzBuzz" << std::endl;}
        else if (i%3 == 0) {std::cout << "Fizz" "\n";}
        else if (i%5 == 0) {std::cout << "Buzz" "\n";}
        else {std::cout << i << std::endl;}
        
    }

    return 0;
}