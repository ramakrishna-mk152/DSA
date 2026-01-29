#include<bits/stdc++.h>
using namespace std;
void printVector(const vector<int>& v) {
    for (int x : v) cout << x << " ";
    cout << "\n";
}
vector<int> intersection1(vector<int>& nums1,vector<int>& nums2){
    int l1=0,l2=0;
    int r1=nums1.size()-1,r2=nums2.size()-1;
    int prev=INT_MIN;
    vector<int> res;
    while(l1<=r1 && l2<=r2){
        if(nums1[l1]<nums2[l2]){
            l1++;
        }
        else if(nums1[l1]>nums2[l2]){
            l2++;
        }   
        else if(nums1[l1]==nums2[l2]){
            if(nums2[l2]!=prev){
                res.push_back(nums2[l2]);
                prev=nums2[l2++];
                l1++;
            }
            else{
                l2++;
                l1++;
            }
        }

    }
    return res;
}
int main() {

    vector<int> a1 = {1, 2, 2, 3, 5};
    vector<int> b1 = {2, 3, 4, 4, 6};
    cout << "Test 1: ";
    printVector(intersection1(a1, b1));

    vector<int> a2 = {};
    vector<int> b2 = {1, 1, 2, 3};
    cout << "Test 2: ";
    printVector(intersection1(a2, b2));


    vector<int> a3 = {};
    vector<int> b3 = {};
    cout << "Test 3: ";
    printVector(intersection1(a3, b3));


    vector<int> a4 = {5, 5, 5};
    vector<int> b4 = {5, 5};
    cout << "Test 4: ";
    printVector(intersection1(a4, b4));

    vector<int> a5 = {-5, -3, -3, 0, 1};
    vector<int> b5 = {-4, -3, 2};
    cout << "Test 5: ";
    printVector(intersection1(a5, b5));



    vector<int> a6 = {1, 2, 3};
    vector<int> b6 = {4, 5, 6};
    cout << "Test 6: ";
    printVector(intersection1(a6, b6));

}

