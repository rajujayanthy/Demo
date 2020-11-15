// Demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{ 
       
    char str[20] = "";
    int i = 0;
    unsigned int numvowels = 0, numcons = 0;;
    gets_s(str, 20);
    

    for ( i = 0; str[i] != '\0'; i++) {
        switch (str[i]) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            numvowels++;
            break;
        default:
            numcons++;
                break;
        }
    }

    printf("\nnumber of vowels is %d, number of consonants is %d", numvowels, numcons);
    
    _getch();
    
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to vie{w errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
