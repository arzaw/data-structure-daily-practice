 int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        int c=0;
        sort(a,a+n);
        sort(b,b+m);
        
        int i=0,j=0;
        while(i<n && j<m){
            if(i>0 && a[i]==a[i-1]){
                i++;
                continue;
            }
            if(a[i]<b[j])
            i++;
            if(a[i]>b[j])
            j++;
            if(a[i]==b[j]){
                c++;
                i++;
                j++;
            }
        }
        return c;
    }
