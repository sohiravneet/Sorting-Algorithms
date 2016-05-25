#include<stdio.h>
#include "SelectionSort.h"

int* CSelectionSort::sort(int* mArray, int mArraySize)
{
	printf("In Selection Sort\n") ;
	for(int i = 0; i < mArraySize - 1 ; i++)
	{
		int temp = mArray [i] ;
		int temp_index = 0  ;
		for(int j =i ; j < mArraySize ;j++)
		{

			//find the lowest number
			if(temp>mArray[j])
			{
				temp = mArray[j] ;
				temp_index = j ;

			}

		}

		// exchange the numbers
		if(temp_index != 0 )
		{
			mArray[temp_index] =  mArray[i] ;
			mArray[i] =  temp ;
		}

	}
	return mArray;
}
