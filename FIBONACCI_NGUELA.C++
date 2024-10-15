#include <iostream>

int main (int arg, char** argv) {
    int n; // nombre de termes 
    int a = 0; 
    int b = 1;
    int c = 0; // initialisation des premiers termes
    
    std::cout << "Entrez le nombre de termes de la suite de Fibonacci : ";
        std::cin >> n;

        if (n == 0) return 0;
        if (n == 1) return 1;

    for (i = 0; i < n; i++) {
            c = a + b;
            a = b;
            b = c;
        }

    return 0;
}