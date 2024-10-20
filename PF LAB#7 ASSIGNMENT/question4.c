  #include <stdio.h>
int main() {
    int arr[] = {2, 3, 1, 2, 3}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int found = 0;  
    
    for (int i = 0; i < n; i++) {
        int count= arr[i] % n;
      
        arr[count] += n;
    }
  
    printf("Numbers occurring more than once: ");
    for (int i = 0; i < n; i++) {
      
        if (arr[i] / n > 1) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("No duplicates found.");
    }

    return 0;
}