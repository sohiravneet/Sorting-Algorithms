#include<stdio.h>
#include<iostream>
#include<map>
#include "SelectionSort.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "HeapSort.h"

using namespace std;

int main(){
	
	
	//Get Size of Array 
	int ArraySize = 0 ;
	
	cout << " Please Enter the size of the Array" << endl ; 
	cin >> ArraySize   ;   
	cout  <<  "Size of the array you entered is: " << ArraySize << endl ; 
	
	int Arr[ArraySize-1] = {}; 
	
	for(int i = 0 ; i < ArraySize ; i++)
	{
		cout << "Please Enter " <<  ArraySize - i  << " Number"<<endl;  
		cin >> Arr[i] ; 
	}
	
	cout << "Array you entered is "<< endl ;
	for(int i = 0 ; i < ArraySize ; i++)
	{
		cout << Arr[i]  <<  endl  ; 
	}
	

	string AlgorithmSelected;

	cout<<"Select Sorting Algorithm to used"<< endl;
	cout << endl;
	cout<<"Enter 1 for Selection Sort"<< endl;
	cout<<"Enter 2 for Bubble Sort"<< endl;
	cout<<"Enter 3 for Insertion Sort"<< endl;
	cout<<"Enter 4 for Selection Sort"<< endl;
	cout<<"Enter 5 for Selection Sort"<< endl;
	cout<<"Enter 6 for Heap Sort"<<endl;
	
	cin >>AlgorithmSelected;


	map<std::string,int> AlgoUsed ;
	AlgoUsed["Selection Sort"]=1;
	AlgoUsed["Bubble Sort"]=2;
	AlgoUsed["Insertion Sort"]=3;
	AlgoUsed["Merge Sort"]=4;
	AlgoUsed["Quick Sort"]=5;
	AlgoUsed["Heap Sort"]=6;
	
	//CSortingAlgorithm *pSortingAlgorithm ;
	//pCSortingAlgorithm(mSetArray);
	
	//switch(AlgoUsed[AlgorithmSelected])
	switch(6)
	{
		case 1:
			cout<< "You have selected Selection Sort"<<endl;
			CSelectionSort selectionsort;
			selectionsort.sort(Arr,ArraySize);
			break;
		
		case 2:
			cout<< "You have selected Bubble Sort"<<endl;
			CBubbleSort bubblesort;
			bubblesort.sort(Arr,ArraySize);
			break;
			
		case 3:
			cout<< "You have selected Insertion Sort"<<endl;
			CInsertionSort insertionsort;
			insertionsort.sort(Arr,ArraySize);
			break;
		
		case 4:
			cout<< "You have selected Merge Sort"<<endl;
			CMergeSort mergesort;
			mergesort.sort(Arr,ArraySize);
			break;
		
		case 5:
			cout<< "You have selected Quick Sort"<<endl;
			CQuickSort quicksort;
			quicksort.sort(Arr,ArraySize);
			break;

		case 6:
			cout<< "You have selected Heap Sort"<<endl;
			CHeapSort heapsort;
			heapsort.sort(Arr,ArraySize);
			break;

		default:
			break;
	}
	
	
	// Print the Sorted List
	for(int k=0; k < ArraySize ;k++)
	{
		cout << Arr[k]  <<  endl  ;
	}


	return 0;
}


