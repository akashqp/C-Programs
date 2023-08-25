# include <stdio.h>

void merge(int arr[], int beg, int mid, int end){

    int n1 = mid - beg + 1;
    int n2 = end - mid;
    int i, j, k;

    int L[n1];
    int R[n2];

    for(int i=0; i<=n1; i++)
        L[i] = arr[beg+i];
    
    for(int i=0; i<=n1; i++)
        printf("%d\t",L[i]);
    printf("\n");

    for(int j=0; j<n2; j++)
        R[j] = arr[mid+1+j];

    for(int j=0; j<n2; j++)
        printf("%d\t",R[j]);
    printf("\n");

    i=0, j=0, k=0;
    while(i<n1 && j<n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int beg, int end){
    if (beg<end){
        int mid = beg + (end - beg) / 2;
        // printf("%d\n",mid);
        mergeSort(arr, beg, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, beg, mid, end);
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main() {
    // int arr[] = {5, 4, 6, 2, 3, 1, 9};
    int arr[] = {5, 6, 7, 8, 2, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, size-1);
    printArray(arr, size);
}