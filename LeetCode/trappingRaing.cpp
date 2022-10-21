#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        //투포인터
        //왼~오를 끝으로 나올 수 있는 형태 생각, 담기기 위해서 val1, val2 사이에 작은 값이
        //들어가야 하고 끝 기준 작은쪽을 기준으로 채워진다. 
       int rest=0;
       int len = height.size();
       int left=0;
       int right=len-1;
        
       int Max1=0;
       int Max2=0;

       while(left<=right){
           if(height[left]<height[right]){
               if(height[left]>=Max1){
                   Max1=height[left];
               }
               else{
                   rest+=Max1-height[left];
               }
               left++;
           }
           else{
               if(height[right]>=Max2){
                   Max2=height[right];
               }
               else{
                   rest+=Max2-height[right];
               }
               right--;
           }
       }
       return rest;
    }
};

int main(){
    Solution a = Solution();
    vector<int> q1 = {0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> q2 = {4,2,0,3,2,5};
    cout<<"------result-------\n";
    cout<<a.trap(q1)<<"\n";
    cout<<a.trap(q2)<<"\n";
}