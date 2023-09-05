int s=0;
    int e;
    e=nums.size()-1;
    int m;
    m=s+(e-s)/2;
    while(s<e){  //massive change s<=e to s<e
        if(nums[m]<nums[0]&&nums[m]<nums[m-1])  //this changed from condn to another condn 
        {                           //used m-1 instead of m+1 because edge case protector
            return m;               //is at left side
        }
        else if(nums[m-1]<nums[m])  //ascend kar raha hai  
        {
            e=m;           //e=m instead of m-1 as you know some edge case may get wrong
        }
        else if(nums[m]>nums[m+1])   //descend kar raha hai        
        {
            s=m+1;          
        }
        m=s+(e-s)/2;
    }
     return -1;
