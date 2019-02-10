#include<iostream>
using namespace std;


void swap(int*i,int*j){
	int t=*i;
	*i=*j;
	*j=t;
}
int partition(int arr[], int high, int low){
	int pivot = arr[high];
	int i = low - 1;
	for (int j=0; j<5; j++){

		if(arr[j] <= pivot){
			
			i++;
			swap(&arr[i],&arr[j]);
			}
		}
		swap(&arr[i+1],&arr[high]);
		return(i+1);
	}




void quicksrt(int arr[],int high,int low){


		if(high > low){

			//let it create a partition
			int p = partition(arr, high, low);

			//elements sorted after partition
			quicksrt(arr,p-1,low);
			quicksrt(arr,high,p+1);
			}


}
	void printing(int arr[]){
	for(int i=0;i<6;i++){
			cout<<arr[i]<<endl;
}
}

int main(){

		int arr[6]={3,5,4,2,6,8};

		quicksrt(arr,5,0);
		printing(arr);
		return 0;
}
