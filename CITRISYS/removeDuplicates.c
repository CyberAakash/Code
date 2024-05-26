// Check and remove duplicate in Array 
//  Given array ={1,2,3,4,1,2,3,5,1,2}
//  output={1,2,3,4,5}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main() {

    int arr[] = {1,2,3,4,1,2,3,5,1,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    int stack[len+1] ;

    for(int i=0; i<len; i++) {
        for(int j=0; j<len; j++) {
            if(arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int k = 0;
    for(int i=0; i<len; i++) {
        if(arr[i] != arr[i+1]) {
            stack[k++] = arr[i];
        }
    }

    for(int i=0; i<k; i++) {
        printf("%d ", stack[i]);
    }


    // printf("Array SIZE : %d", len);

    return 0;
}