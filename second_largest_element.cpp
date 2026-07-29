#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int largestelement(vector<int> & arr){
    int n = arr.size();
    int largest = INT_MIN;
    int secondlargest = INT_MIN;

    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i]>secondlargest && arr[i]!= largest){
            secondlargest = arr[i];
        }
    }
    return secondlargest;
}

int main (){
    vector<int> arr = {2,4,3,7,6,5,1};
    cout<< largestelement(arr);
    return 0;

}