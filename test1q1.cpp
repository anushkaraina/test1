#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter size of array: " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter elements in the array:" << endl;
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "Displaying the elements of the array:" << endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << endl;
    }
}