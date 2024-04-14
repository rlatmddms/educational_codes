#include <stdio.h>

int main() {
    int arr[10] = {1,6,2,4,8,2,45,77,12,3};

    printf("before: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    putchar(10);
    
    for(int i = 0; i < 10; i++) {
        int minidx = i;
        for(int j = i+1; j < 10; j++) {
            if(arr[minidx] > arr[j]) {
                minidx = j;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[minidx];
        arr[minidx] = tmp;
    }
    
    printf("after : ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

/*

before: 1 6 2 4 8 2 45 77 12 3 
after : 1 2 2 3 4 6 8 12 45 77

*/
