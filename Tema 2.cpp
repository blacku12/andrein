/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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

