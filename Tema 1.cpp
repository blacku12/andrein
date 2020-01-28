/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int ghici()
{
    int numar;
    int numar_g;
    cout<<"Introdu un numar:";
    cin>>numar;
    while (true)
    {
        std::cout<<"Ghiceste numarul!";
        cin>>numar_g;
    if (numar_g<numar)
    {
        cout<<"Numarul incercat este prea mic!";    
    }
    else if (numar_g>numar)
    {
        cout<<"Numarul incercat este prea mare!";
    }
    else
    {
        cout<<"Ai ghicit!!!";
        break;
    }
    }

}
    return 0;
}
