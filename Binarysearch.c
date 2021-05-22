#include<stdio.h>
int linersearach(int arr[],int size,int element)// linear search
{
    for(int i=0; i>size; i++){
        if(arr[i]==element){
            return i;
        }
        return -1;
    }
     
}
// binary search
int Binarysearach(int arr[],int size,int element){
    int low,mid,high;
    low=0;
    high = size-1;
    while(low<=high){
        // search staretd
    
    mid= (low+high)/2;
    if(arr[mid]==element)
    {
        return mid;
    
    }
    if(arr[mid]>element){
        high==mid;
    }
    if(arr[mid]<element){
        low=mid-1;
    }
    // search end
    }
    return -1;
}

int main(){
    /* binary search for unsorted array 

    int arr[]= {34,2,32,3,4,6,3,23,43,56,6,5};
    int size= sizeof(arr)/sizeof(int);
    int element= 34;
    int result=linersearach(arr,size,element);
    printf("The element %d was found at index %d",element,result);*/

    // binary search
     int arr[]= {34,42,52,653,764,876,879,893,993,996,999,1000};
    int size= sizeof(arr)/sizeof(int);

    int element= 999;
    int result=Binarysearach(arr,size,element);
    printf("The element %d was found at index %d",element,result);

    return 0;

}
