#include <iostream>
#include <vector>
using namespace std;
int removeduplicate (vector<int> & arr){
    int n = arr.size();
    int i = 0;

    for (int j=1; j<n; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}
int main(){
    vector <int> arr = {1,1,2,2,3,3,3,4,5,5,6,6};
    int k = removeduplicate(arr);
    cout<<"unique elements are ";
    for(int i=0; i<k; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}