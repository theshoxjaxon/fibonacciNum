#include <stdio.h>
int main()
{
    int Fibaonacci[15], i;
    Fibaonacci[0] = 0;
    Fibaonacci[1] = 1;
    for(i = 2; i < 15; ++i){
        Fibaonacci[i] = Fibaonacci[i - 2] + Fibaonacci[i - 1];
    }
    for(i = 0; i < 15; ++i){
        printf("%i\n", Fibaonacci[i]);
    }
    return 0;
}
