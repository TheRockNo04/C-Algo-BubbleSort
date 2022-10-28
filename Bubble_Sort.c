#include<stdio.h>
#include<time.h>
#define len_list 10

int main(){
srand(time(0));

int array[len_list] , i , j , k , temp;

for( i=0 ; i<len_list ; i++){
    array[i] = rand() % 10 + 1;
    printf("%d | ",array[i]);
}

printf("\n");

for(i=0 ; i<len_list-1 ; i++){
    for(j=0 ; j<len_list-1 ; j++){
        if(array[j] > array[j+1]){
            temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
        }

    }
}

for( i=0 ; i<len_list ; i++){printf("%d | ",array[i]);}
return 0;
}
