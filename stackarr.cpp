#include<iostream>
using namespace std;

class Stakarr{
	 public:
	
	
	void push(int j,int arr[]){
		
			for(int i=8;i>=0;i--)
			{
			arr[i]=arr[i-1];
			}
			arr[0]=j;
			cout<<endl;
			
		}
		
	
	void pull(int arr[]){
		
		for(int i=1;i<8;i++){
			arr[i-1]=arr[i];
			
		}
	cout<<endl;	
	}
	
	
	bool isEmpty(int arr[]){
		if (arr[0] == 0){
			return true;
		}
		else {
			return false;
		}
	}
	
	
	void countitems(){
		
	}
	void display(int arr[]){
		
		for	(int i=0;i<8;i++){
		cout<<arr[i]<<"->";
	}
	cout<<"NULL"<<endl;
	
	}
};









int main(){
	int i;
	int arr[8];
	for(i=0;i<8;i++){
	arr[i]=0;	
	}
	Stakarr s1;
	s1.push(2,arr);
	s1.push(5,arr);
	s1.push(7,arr);
	s1.push(9,arr);
	s1.display(arr);
	s1.push(3,arr);
	s1.display(arr);
	s1.push(4,arr);
	s1.display(arr);
	s1.push(10,arr);
	s1.pull(arr);
	s1.display(arr);
	
	cout << s1.isEmpty(arr);
	
	
	
	
	
	
	
	
	return 0;
}
