//Binary Search is only used for sorted data
//Pointer to low and high indicates search space
//mid = (low+high)/2
//if mid != target & target>low -> low = mid+1, high = high
//Time Complexity = O(log2(n))
//Use mid = low + (high-low)/2 , for INT_MAX case

#include <bits/stdc++.h>

using namespace std;

// Iterative Approach
int iter_binary_search(vector<int>v,int n, int target) {
    int low = 0;
    int high = n-1;

    int mid = (low+high)/2;
    cout<<"mid="<<mid<<endl;

    while(low<=high) {
        mid = (low+high)/2;
        if(v[mid]==target) {
            cout<<"Target Index: "<<mid<<endl;
            return 1;
        }
            
        else if(v[mid]>target) {
            high = mid-1;
            cout<<"low,high="<<low<<","<<high<<endl;
        }
        else if(v[mid]<target) {
            low = mid+1;
            cout<<"low,high="<<low<<","<<high<<endl;
        }
    }

    return -1;
}

//Recursive Approach

int recur_binary_search(vector<int>v,int low,int high, int target) {
    cout<<"low,high= "<<low<<","<<high<<endl;
    int mid = (low+high)/2;
    cout<<"mid="<<mid<<endl;

    if(v[mid]==target) {
        cout<<"Target Index:"<<mid<<endl;
        return 1;
    }
    else if(v[mid]<target) return recur_binary_search(v,mid+1,high,target);
    else if(v[mid]>target) return recur_binary_search(v,low,mid-1,target);
    

}

int main()
{
    vector<int>v = {1,2,3,6,24,98,143,234,557,643,878,900};
    // iter_binary_search(v,v.size(),878);
    recur_binary_search(v,0,v.size()-1,878);

    return 0;
}