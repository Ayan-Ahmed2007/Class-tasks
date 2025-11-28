#include <stdio.h>


int main(void) {
    int num=5, index=0, count=1, pindex;
    printf("Enter any odd number : ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("Please enter any odd number...");
        return 0;
    }

    int ms[num*num];

    for(int c=0; c<num*num; c++){
        ms[c] = 0;
    }

    index= num / 2;
    ms[index] = count;
    pindex = index;

    while(count != num*num){
        //Go Up
        if(index - num < 0){
            index = index + (num*num) - num;
        }else{
            index = index - num;
        }

        //Go Right
        if((index+1) % num == 0){
            index = index - (num - 1);
        }else{
            index++;
        }

        if(ms[index] != 0){
            index = pindex;
            index += num;
        }

        ms[index] = ++count;
        pindex = index;
    }


    for(int c=0; c<num*num; c++){
        printf("%2d ",ms[c]);
        if((c+1) % num == 0){
            printf("\n");
        }
    }

    



}