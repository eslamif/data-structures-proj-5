
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>


int main (int argc, const char * argv[])
{
    struct DynArr *myArray;
    myArray = createDynArr(6);

    //TEST addHeap
    addHeap(myArray, 5);
    addHeap(myArray, 2);
    addHeap(myArray, 7);
    addHeap(myArray, 1);
    addHeap(myArray, 9);
    addHeap(myArray, 6);

    //TEST smallIndexHeap
    printf("smallerIndexHeap = %d\n" , _smallerIndexHeap(myArray, 0, 2));

    //TEST getMinHeap
    printf("getMinHeap = %d, should be 5\n", getMinHeap(myArray));


	return 0;
}
