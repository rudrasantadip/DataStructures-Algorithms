/*
An Array is a homogenous data structure which stores data in contigious memory locations.
An array is static in nature, which means once allocated the size of an array cannot be changed during runtime
The elements stored in the array are accessed using index (plural:- indices)
Arrays follow 0 based indexing, the starting index is 0 
for an array of length "l" the ending index is (l-1)
*/

#include <stdio.h>
#define LENGTH 10

//this function reads the introduction inside the "readings folder"
void readFile(char *filePath)
{
    FILE *file = fopen(filePath,"r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return ;
    }

    char line[256]; // Buffer to store a line
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line); // Print each line
    }
    fclose(file);
}

void takeArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        printf("\nindex [%d]: ",i);
        scanf("%d",&arr[i]);
    }
}

void printArray(int arr[], int size)
{
    printf("[");
    for(int i=0;i<size;i++)
    {
        printf("%d , ",arr[i]);
    }
    printf("]");
}


int main(){

    //print the introduction text here
    readFile("../readings/arrays01.txt");



    int arr[LENGTH]; // DECLARATION OF AN ARRAY

    printf("\nArray is not initialized this is a garbage value: %d\n",arr[0]); // since the array is not initialzied it stores garbage value

    /*
    Initializing an array is easy, we can assign values by accessing the index
    */
   arr[0]=51;
   printf("\nInitialized value is : %d\n",arr[0]);

   printf("\nTaking user input...\n");

    /*
    from here we can understand that inorder to initialize an entire array
    we need to loop through it and assign values at each index
    */

    takeArray(arr,5);
    printf("\n");
    printArray(arr,5);
    return 0;
}