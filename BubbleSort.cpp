/*
 * BubbleSort.cpp
 *
 *  Created on: May 22, 2016
 *      Author: RSohi
 */
#include "stdio.h"
#include "BubbleSort.h"

int* CBubbleSort::sort(int* mArray, int mArraySize)
{
	printf("In Bubble Sort\n") ;
	for(int i = 0 ; i < mArraySize;i++)
	{
		for(int j = 0; j < (mArraySize - i )  ; j++)
		{
			if (mArray[j]>mArray[j+1])
			{
				int temp = 0;
				temp = mArray[j] ;
				mArray[j] =  mArray[j+1];
				mArray[j+1]= temp ;

			}
		}
	}
	return mArray;
}




