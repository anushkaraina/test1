//write a progam to find the  max element from the list
#include<iostream>
using namespace std;
int main(){
    int size,max=0;
    cout << "Enter size of array: " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter elements in the array:" << endl;
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    for(int i=0;i<size;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    cout << "The maximum element in the list is: " << max; 
}
