#include <stdio.h>
int main(){
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n];
    int i, d, j, k;
    printf("Enter elements in array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element position to delete: ");
    scanf("%d", &d);
    for(j = d-1; j < n-1; j++){
        arr[j] = arr[j+1];
    }
    printf("Elements of array after delete are: ");
    for(k = 0; k < n-1; k++){
        printf("%d ", arr[k]);
    }
}