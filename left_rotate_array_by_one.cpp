#include <iostream>
#include <vector>
using namespace std;
int leftrotate_by_one (vector<int> & arr){
    int n = arr.size();
    int temp = arr[0];
    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}
    
int main (){
    vector <int> arr = {1,2,3,4,5,6,7};
    // cout<<leftrotate_by_one(arr);
    leftrotate_by_one(arr);

    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}
 