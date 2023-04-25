#include <iostream>
#include <algorithm>
using namespace std;
//void bubbleSort(int arr[], int size){
//    for(int i = 0; i < size; i++){
//        bool valid = false;
//        for(int j = 0; j < size - 1 - i; j++){
//            if(arr[j] > arr[j + 1]){
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//                valid =  true;
//            }
//        }
//        if(!valid){
//            break;
//        }
//    }
//}
//void selectionSort(int arr[], int size){
//    int minim = 0;
//    for(int i = 0; i < size - 1; i++){
//        minim = i;
//        for(int j = i + 1; j < size; j++){
//            if(arr[j] < arr[minim]){
//                minim = j;
//            }
//        }
//        if(minim != i){
//            int temp = arr[i];
//            arr[i] = arr[minim];
//            arr[minim] = temp;
//        }
//    }
//}
void insertionSort(int arr[], int size){
    int index = 0, j = 0;
    for(int i = 1; i < size; i++){
        index = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > index){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = index;
    }
}
int main(int argc, const char * argv[]) {
    int arr[7] = {5,3,2,1,6,4,7};
    
//    bubbleSort(arr, 7);
//    selectionSort(arr,7);
    insertionSort(arr, 7);
    for(int i = 0; i < 7; i++){
        cout<<arr[i] <<" ";
    }
    
    return 0;
}
