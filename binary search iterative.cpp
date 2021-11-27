int binarysearch(int arr[], int n, int k){
        // code here
        int high=n-1, low=0;
        
        while(low<=high){
            int mid=(low+high)/2;
            
            if(arr[mid]==k)
            return mid;
            else if(arr[mid]>k)
            high=mid-1;
            else low=mid+1;
        }
        return -1;
    }
