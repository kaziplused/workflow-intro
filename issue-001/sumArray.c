#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,sum; 
    printf("Enter the array size/number of elements\n");
    scanf("%d",&n);
    int arr[n];
    //read values into an array
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    //find the total sum of the array elements and store the sum into variable sum
    for(int arr_i = 0; arr_i < n; arr_i++)
    {
        sum=sum+arr[arr_i];

    }
   //print the total
   printf("\nsum=%d",sum);
    return 0;
}
