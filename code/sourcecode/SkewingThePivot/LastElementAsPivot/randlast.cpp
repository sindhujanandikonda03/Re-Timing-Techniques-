
#include<stdio.h>
#include<stdlib.h>

#define SIZE 50

long A[SIZE];

long partition(long front, long rear){
    long element = A[rear];
    long i = front - 1;
    for(long j = front; j<rear; ++j){
        if(A[j] <=  element){
            ++i;
            long temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    long temp = A[i+1];
    A[i+1] = A[rear];
    A[rear] = temp;
    return i+1;
}

void quicksort(long front, long rear){
    if(front < rear){
        long part = partition(front, rear);
        quicksort(front, part-1);
        quicksort(part+1, rear);
    }
}

int main(){
    register unsigned long i = 0;



    printf("before sorting");
    for(; i<SIZE; ++i){
        A[i] = rand() % SIZE;

        printf("%ld ", A[i]);
    }
 printf("\n");
 printf("after sorting");

    quicksort(0, SIZE-1);



    for(int i=0; i<SIZE; ++i){
        printf("%ld ", A[i]);
    }

}
