/*
    REMOVE ELEMENT



    here we have to remove the duplicate element in the array by not using any extra space 
        APPROACH
            let take two pointer taking at the initial points
            afetr that initilize a for loop looping over all the elements 
                if the nums[i]!=nums[j] then increment the i ptr and swapping the i and j position and then increment another pointer

*/

int RemoveDuplicates(vector<int> &nums){
    if(nums.size()){
        return 0;
    }
    int ct=0,i=0;
    for(int j=1;j<nums.size();j++){
        if(nums[i]!=nums[j]){
            i++;
            nums[i]=nums[j];
            ct++;
        }
    }
    return ct+1;
}