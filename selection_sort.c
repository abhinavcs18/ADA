#include <stdio.h>
#include<math.h>
#include <time.h>
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
void selectionSort(int array[], int size)
{
  for (int step = 0; step < size - 1; step++)
  {
    int min_idx = step;
    for (int i = step + 1; i < size; i++)
    {
      if (array[i] < array[min_idx])
        min_idx = i;
    }
    swap(&array[min_idx], &array[step]);
  }
}
void printArray(int array[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
int main()
{

int p;
printf("Enter the size of the array\n");
scanf("%d",&p);
int data[p];
printf("Enter the elements :\n");
for(int i=0;i<p;i++)
{
scanf("%d",&data[i]);
}
  //int data[] = {20, 12, 10, 15, 2};
  int size = (sizeof(data) / sizeof(data[0]));
  clock_t t; 
    t = clock();
  selectionSort(data, size);

  

printf("Sorted array in Acsending Order:\n");
  printArray(data, size);

t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
  
    printf("it took %f seconds to sort \n", time_taken); 
}
