#include <iostream>
#include <vector>
using namespace std;

int peak(vector <int> a)  //index return karega peak ki
{
    //copy 1_binarySearch.cpp
    int s=0;
    int e=a.size()-1;
    int m=(s+e)/2;
    while(s<=e){
        if(a[m]>a[m-1]&&a[m]>a[m+1])  //this changed from target to a condition 
        {
            return m;
        }
        else if(a[m-1]<a[m])  //ascend kar raha hai  //piche wale pakka peak nhi hoge
        {
            s=m+1;
        }
        else if(a[m]>a[m+1])   //descend kar raha hai //aage wale pakka peak nhi hoge        
        {
            e=m;          //instead of e=m-1 because some edge cases get wrong hence e=m
        }
        m=(s+e)/2;
    }
     return -1;
}
int main(){
    vector <int> a={3,9,8,6,4};  //should get index of 9 that is 1

    cout<<peak(a);
    return 0;
}
