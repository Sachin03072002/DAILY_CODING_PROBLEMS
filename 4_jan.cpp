/*
        sqrt(x)
        -> a non negative integer is given we ahve to return its sqrt by rounding off to its nearest integer
        //IMPLEMENTATION
            - ceck the number is 1 , then return 1
            - else run a for loop itersting over half of the number n and check for its nearest divisible and return that number



*/

int mySqrt(int x) {
        if(x==1)
        return 1;
         int ans=0;
        for(int i=1;i<=x/2;i++)
        {
            if(x/i<i)
            break;
            ans=i;
        }
        return ans;
    }