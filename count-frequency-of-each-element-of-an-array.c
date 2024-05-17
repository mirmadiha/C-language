/* Write a program in C to count the frequency of each element of an array.*/
#include <stdio.h>

int main() {
    int n;

   
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0; 
    }

    
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue; 
        }
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; 
            }
        }
        
        printf("%d occurs %d times\n", arr[i], count);
    }

    return 0;
}