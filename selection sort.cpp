#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < size; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(arr[min_idx], arr[i]);
    }
}

int main() {
	
	int size;
	cout<<"perform the selection sorting" <<endl;
	cout<<"enter the size of array ";
	cin>>size;
	
    int arr[size] ;
    cout<<"enter the elements for array "<<endl;
    
    for(int i=0;i<size; i++){
    	cin>>arr[i];
    	
	}
	cout<<"swap the least element to the first ones"<<endl;
    selectionSort(arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}

