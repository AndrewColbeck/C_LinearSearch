// This Program will use the Linear Search algorithm
// to process an array and locate a key value
// By Andrew Colbeck 2017
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// LINEAR SEARCH
// (compare elements 0-n with the key):
int linearSearch(int array[], int key, int size){
	for (int i = 0; i < size; i++){
		printf("Checking array index [%i] - ", i);
		if (array[i] == key)
			return i;
		printf("no match.\n");
	}
	return -1;
}

// MAIN PROGRAM
int main(){
	srand(time(NULL));
	int a[10], key, index = 0;
	// Produce an array of random integers
	printf("The array is: \n");
	for (int i = 0; i < 10; i++){
		a[i] = rand()%101;
		printf("%i ", a[i]);
	}
	
	// Prompt user for key to search with, inform op if match found:
	printf("\n(Using Linear Search) enter key to search for: ");
	scanf("%i", &key);
	index = linearSearch(a, key, 10);
	if (index != -1)
		printf("Key was found at index %i.\n", index);
	else
		printf("Key was not found.\n");

}


