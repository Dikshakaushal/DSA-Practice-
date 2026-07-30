#include<iostream>
#include<vector>
using namespace std;
int largestelement(vector<int> & arr){
    int largest = arr[0];

    for(int i=1; i<arr.size(); i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}
int main (){
    vector <int> arr = {2,3,4,7,8,5,44,4,22};
    cout<< largestelement(arr);
    return 0;

}