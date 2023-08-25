#include <stdio.h>

int max(int arr[], int n){
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}

int countSort(int arr[], int max_ele, int n){
    int count[max_ele+1];
    int sort [n];
    for(int i=0; i<n; i++){
        count[i] = 0;
    }
    for(int i=0; i<=max_ele; i++){
        int c = 0;
        for(int j=0; j<n; j++){
            if(arr[j] == i)
                c++;
        }
        count[i] = c;
    }
    for(int i=1; i<=max_ele; i++){
        count[i] = count[i] + count[i-1];
    }
    for(int i=n-1;i>=0;i--){
        sort[--count[arr[i]]] = arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d",sort[i]);
    }
}

int main() {
    int arr[] = {1, 9, 4, 3, 1, 2, 6, 3};
    int n = sizeof(arr)/4;
    int max_ele = max(arr, n);
    countSort(arr, max_ele, n);

}