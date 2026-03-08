#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int st, int end){
    int pivot = arr[end];
    int i = st - 1;
    for(int j = st; j < end; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[end]);
    return i;
}

void quickSort(vector<int> &arr, int st, int end){
    if(st<end){
        int pivIdx = partition(arr, st, end);
        quickSort(arr,st, pivIdx-1);
        quickSort(arr, pivIdx+1, end);
    }
}

int main(){
    vector<int> arr ={3,4,1,5,6,2};

    quickSort(arr, 0, arr.size()-1);

    for(auto val: arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}