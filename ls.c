#include <stdio.h>
int recSearch(int arr[], int l, int r, int x) 
{ 
     if (r < l) 
        return -1; 
     if (arr[l] == x) 
        return l; 
     if (arr[r] == x) 
        return r; 
     return recSearch(arr, l+1, r-1, x); 
}

int main(void) {
    
        int z,arr[100];
	printf("Enter the number of elements\n");
        scanf("%d",&z);
	printf("Enter the elements in the array\n");
        for(int i=0;i<z;i++)
        {
            scanf("%d",&arr[i]);
            
        }
          int n = sizeof(arr)/sizeof(arr[0]); 
        int x;
	printf("Enter the element to search\d");
        scanf("%d",&x);
        
        int index = recSearch(arr, 0, n-1, x); 
        if (index != -1) 
           printf("Element %d is present at index %d", x, index); 
        else
            printf("Element %d is not present", x); 
    
    
    return 0; 
   
}
