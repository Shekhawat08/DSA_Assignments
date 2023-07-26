#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Generate a random character from 0-9 or A-F

int main(){
    srand(time(NULL));
    
    int randomNumber = rand()%16;
    char randChar;
    if(randomNumber<10){
        randChar='0'+randomNumber;
    }
    else{
        randChar='A'+randomNumber-10;
    }

    printf("The random number is %c\n",randChar);
    return 0;
}