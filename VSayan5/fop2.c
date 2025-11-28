#include <stdio.h>

int main(void) {

    int count, as, spc=0;

    for(count=1; count<=10; count++){
        for(as=1; as<=10; as++){
            printf(spc >= as ? "`":"*");
        }
        spc++;
        printf("\n");
    }

}