#include <iostream>
#include <vector>
using namespace std;
int isarrsorted(vector<int> & arr){
    int n = arr.size();

    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}
int main (){
    vector <int> arr = {2,3,4,5,6,44};
    if(isarrsorted(arr)){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }

}