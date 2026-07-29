// // maximum sum subarray of size k 

// # include <bits/stdc++.h>
// using namespace std;
// int maxsumsubarray(vector<int> & arr,int k){
//     int n = arr.size();
//     if(n<k) return 0;
//     int maxsum = INT_MIN;
//     int windowsum = 0;

//     // first window cal
//     for(int i=0; i<k; i++){
//         windowsum += arr[i];
//     };
//     maxsum = windowsum;

//     //slide the window
//     for(int i=k ; i<n ;i++){
//         windowsum += arr[i]-arr[i-k];
//         maxsum = max(maxsum,windowsum);
//     }
//     return maxsum;
// }
// int main (){
//     vector<int> arr= {3,4,1,9,5,9};
//     int k = 2;
//     cout<<maxsumsubarray(arr,k);
//     return 0;
// }

// maximum sum subarray of size k 

// # include <bits/stdc++.h>
// using namespace std;
// int firstnegativenumber(vector<int> & arr,int k){
//     int n = arr.size();
//     int firstnegativenumber = 0;
//     int firstnegative = 0;
    
//     // first window cal
//     for(int i=0; i<k; i++){
//         if(arr[i]<0){
//             firstnegative = arr[i];
//             i++;
//         }
//     }
//     //slide the window
//     for(int i=k;i<n;i++){
//         firstnegative += arr[i]-arr[i-k];
//     }
// } 
// int main (){
//     vector<int> arr= {12,-1,-7,8,-15,30,16,28};
//     int k = 3;
//     cout<<firstnegativenumber(arr,k);
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int largestelement(vector<int> & arr){
//     int largest = arr[0];

//     for(int i=1; i<arr.size(); i++){
//         if(arr[i]>largest){
//             largest = arr[i];
//         }
//     }
//     return largest;
// }
// int main (){
//     vector <int> arr = {2,3,4,7,8,5,4,22};
//     cout<< largestelement(arr);
//     return 0;

// }
// #include <bits/stdc++.h>
// using namespace std;
// int secsmallest(vector <int> & arr){
//     int largest = INT_MIN;
//     int secsmallest = INT_MAX;

//     for(int i=1; i<arr.size(); i++){
//         if(arr[i]<largest && arr[i]!=largest){
//             arr[i]=secsmallest;
//         }
//     }
//     return secsmallest;
// }
// int main(){
//     vector <int> arr = {1,2,3,4,5};
//     cout<<secsmallest(arr);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int secsmallest(vector <int> & arr){
//     int largest = INT_MIN;
//     int secondlargest = INT_MIN;
//     for(int i=1; i<arr.size(); i++){
//         if(arr[i]>largest){
//             secondlargest = largest;
//             largest = arr[i];
//         }
//         else if (arr[i]>secondlargest && arr[i]!=largest){
//             secondlargest = arr[i];
//         }
//     }
//     return secondlargest;
// }
// int main(){
//     vector <int> arr = {1,2,3,4,5,6};
//     cout<<secsmallest(arr);
//     return 0;
// }
                                // is array is sorted or not 
#include<iostream>
#include<vector>
using namespace std;
int arrsorted(vector<int> & arr){
    bool sort = true;
    for(int i=1; i<arr.size(); i++){
        if(arr[i]>arr[i-1]){
            sort = false;
            break;
        }
        
    }
    return sort;
}
int main (){
    vector<int> arr = {2,3,4,5,6,1};
    cout<<arrsorted(arr)<<endl;
    return 0;
}