#include <stdio.h>
#include <assert.h>

int max_of3_amb2if(int a, int b, int c);

int main(void) {
        /*
        assert(max_of3_amb2if(2,10,6) == 10);
        assert(max_of3_amb2if(55,29,5) == 55);
        assert(max_of3_amb2if(-2,10,30) == 30);
        assert(max_of3_amb2if(-5,-10,-90) == -5);
        assert(max_of3_amb2if(103,15,999) == 999);
        printf("Tots el casos de prova han passat!\n");
        */

        int a, b, c;
        printf("Introdueix 3 numeros enters (separats per espais): ");
        if (scanf("%d %d %d", &a ,&b ,&c) == 3) {
                printf("El numero més gran és %d.\n", max_of3_amb2if(a, b, c));
        } else {
                printf("Els numeros que has introduit no son válids.\n");
        }

        return 0;
}
