
vector<int> find(int arr[], int n , int x )
{
    // code here
    int result1=-1,result2=-1;
    int h=n-1,l=0;
    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]==x){
            result1=mid;
            h=mid-1;
        }else if(arr[mid]>x){
            h=mid-1;
        }else{
            l=mid+1;
        }
    }
    l=0;
    h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]==x){
            result2=mid;
            l=mid+1;
        }else if(arr[mid]>x){
            h=mid-1;
        }else{
            l=mid+1;
        }
    }
    vector<int> v;
    v.push_back(result1);
    v.push_back(result2);
    
    return v;
}
