#include <stdio.h>

int main(){
    int arr[] = {5, 2, 9, 6, 4};
    int n = 5;
    int i, j, min;
    for(i=0; i<n; i++){
        min=i;
        for(j=i+1; j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    for(i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}