#include "Search.h"
int main()
{
    int arr[10000];
    int isi = 1;
    for(int i = 0; i < 10000 ; i++){
        arr[i] = isi;
        isi = isi+4;
        if (isi >1000){
            isi = isi + 22;
        }
    };

    //linearSearch(arr,3201,10000);
    //interpolationSearch(arr,3201,10000);
    return 0;
}
