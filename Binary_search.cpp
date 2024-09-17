#include<iostream>
#include <vector>
using namespace std;

int binary(vector<int> arr,int elem, int start, int end){
	int mid = start+(end-start)/2;
	int count=0;
	cout<<"start: "<<start<<" end: "<<end<<"\n";
	if(arr[mid] == elem){
		cout<<elem<<" is at index "<<mid;
	}
	else if(elem > arr[mid]){
		start = mid;
		if(start+1==end && arr[start]!=elem && arr[end]!=elem){
			cout<<elem<<" not found";
		}else{
			cout<<"hey greater ";
			binary(arr,elem,start,end);
		}
	}
	else if(elem < arr[mid]){
		end = mid;
		if(start+1==end && arr[start]!=elem && arr[end]!=elem){
			cout<<elem<<" not found";
		}else{
			cout<<"hey lesser ";
			binary(arr,elem,start,end);
		}
	}
	return count;
}
int main(){
	vector<int> arr = {-233,-455,-19,-11,-8,31,41,51,61,71,81,91,123,231};

	// int elem,num;
	// for (int i = 0; i < 10000; i++)
	// {
	// 	arr.push_back(i);
	// }
	// cout<<"enter number to search: ";
	// cin>>elem;

	cout<<arr.size();

	// first argument is for array then element to find then starting index and then size of the array
	binary(arr,222,0,arr.size());
	
	return 0;
}
