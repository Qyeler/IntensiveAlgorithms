#pragma once

#include <vector>

// https://leetcode.com/problems/sort-an-array/
class Solution {
public:
  std::vector<int> sortArray(std::vector<int> &nums) {
      std::vector<int> result=nums;
     for(int i=0;i<result.size();i++){
            int index=i;
            int minn=result[i];
            for(int j=i;j<result.size();j++){
                if(result[j]<minn){
                    minn=result[j];
                    index=j;
                }
            }
            std::swap(result[index],result[i]);
        }
        return(result);
  }
};
