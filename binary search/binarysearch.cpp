#include<iostream>
using namespace std;
int binarysearch(int a[], int left,int right, int find){
    while(left <= right){
        int mid = (left+right)/2;
        if (a[mid] == find)
            return mid;
        else 
            if(find > a[mid]){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
    }
    return -1;
}

int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int p = binarysearch(a, 0, 14, 9);
    cout << p;
    return 0;
}