long long int floorSqrt(long long int x) 
    {
        // Your code goes here 
        if(x==0 || x==1)
        return x;
        long long int l=0, h=x-1;
        long long int res;
        while(l<=h){
            long long int m=(l+h)/2;
            long long s=m*m;
            if(s>x){
                h=m-1;
            }else if(s<x){
                l=m+1;
                res=m;
            }else
            return m;
        }
        return res;
    }
