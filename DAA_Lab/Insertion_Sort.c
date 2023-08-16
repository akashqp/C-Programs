#include <stdio.h>

int main(){
    int arr[] = {99, 6, 23, 1, 10, 23, 5};
    int n = 7;
    int i, key, j;
    for(i=1; i<n; i++){
        key = arr[i];
        j = i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = key;
    }
    for(i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}