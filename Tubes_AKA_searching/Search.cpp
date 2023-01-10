#include "Search.h"
void linearSearch(int arr[], int value, int size){
    int i =0;
    bool found = false;
    while(i < size && !found){
        cout << "cek "<<arr[i] << endl;
        if (arr[i] == value){
            found = true;
        }
        i++;
    }
    if(found){
        cout << "sucess" << endl;
    }else{
        cout << "failed" << endl;
    }
};
void interpolationSearch(int arr[], int value, int size){
    int low = 0;
    int high = size-1;
    int mid;
    bool cekbawah= true;
    while (arr[low] <= value && arr[high] >= value){
        mid = low + (((value - arr[low]) * (high - low)) / (arr[high] - arr[low]));
        cout << "cek " << mid<< endl;
        if (arr[mid] < value){
            low = mid + 1;
        }
        else if (arr[mid] > value){
            low = mid - 1;
        }
        else{
            cout << "sucess" << endl;
            cekbawah = false;
            break;
        }
    }

    if (cekbawah){
        if (arr[low] == value){
            cout << "sucess" << endl;
        }
        else{
            cout << "failed" << endl;
        }
    }
};
