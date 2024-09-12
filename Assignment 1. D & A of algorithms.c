/*  ODONGKARA OSCAR B24774 S23B23/085
Algorithm To the Find Maximum Element in a n Array
 
 PSEUDOCODE:
    Input: A -> array of integers, 
           n -> size of the array

    Output: max -> maximum element in the array

    Step 1: Initialize max = A[0]

    Step 2: For i = 1 to n-1 do
                If arr[i] > max then
                    max = arr[i]   
                End If
            End For
    Step 3: Return max
End Algorithm */




// code in C programming language (Using a function findMax)
#include <stdio.h>

int findMax(int A[], int n) {
    int max = A[0];  // assumin first element is the maximum
    for (int i = 1; i < n; i++) {
        if (A[i] > max) {
            max = A[i];  // Update max if the current element is greater
        }
    }
    return max;
}
// 
int main() {
    int A[] = {2, 7, 1, 13, 21, 10, 9};
    int n = sizeof(A) / sizeof(A[0]);
    
    int max = findMax(A, n);
    
    printf("The maximum element in the array is: %d\n", max);
    
    return 0;
}
