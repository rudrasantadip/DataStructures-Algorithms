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

void insertElement(int arr[], int *size, int position, int newElement) {
  
    if (position < 0 || position > *size) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = newElement;
    (*size)++; // Increase size
}


int main()
{
    readFile("../readings/arrays02.txt");

    printf("\n");
    // inserting in an array...
    int arr[] = {1,2,3,4,5};
    int size=5;
    printArray(arr,5);
    printf("\n");
    insertElement(arr,&size,2,26);
    printArray(arr,size);
    printf("\n");

}