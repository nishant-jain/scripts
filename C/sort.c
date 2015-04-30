//Contains insertion, bubble and selection sort routines. Also contains a swap routine to swap two numbers without using a third number.
#include<stdio.h>
#include<limits.h>
#define SIZE 10

void output(int *arr, int size){
	int i;
	printf("Array is: \n");
	for(i=0; i<size; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");			
}

void swap(int *a, int *b){
	if(*a==*b) return;
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}

void insertion_sort(int *arr, int size){
	int i,j;
	for(i=1; i<size;i++){
		j=i;
		while(j>0 && arr[j]<arr[j-1]){
			swap(&arr[j],&arr[j-1]);
			j--;
		}
	}
}

void selection_sort(int *arr, int size){
	int i,j,min_index;
	int min;
	
	for(i=0;i<size;i++){
		min=arr[i];
		min_index=i;
		for(j=i;j<size;j++){
			if(arr[j]<min){
				min_index=j;
				min=arr[j];
			}
		}
		
		//printf("i: %d arr[i]: %d min: %d min_index: %d arr[min_index] %d\n",i,arr[i],min,min_index,arr[min_index]);
		swap(&arr[min_index],&arr[i]);
		//output(arr,size);
	}	
}

void bubble_sort(int *arr, int size){
	int i,j;
	for(i=0; i<size; i++){
		for(j=0; j<size-i-1; j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}

int main(){
	
	int input[SIZE];
	int i;
	for(i=0; i < SIZE; i++){
		scanf("%d",&input[i]);
	} 
	//output(input,SIZE);
	//bubble_sort(input,SIZE);
	//insertion_sort(input,SIZE);
	selection_sort(input,SIZE);
	output(input,SIZE);
}

