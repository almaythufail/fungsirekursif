#include <stdio.h>

    int deret (int a, int b) {
        if (b==0)
        return a;
        else
        return (a + deret(a+10,b-1));
    }
    
    int main() {
      printf ("%i", deret (10,4));
    }
