int firstRepeated(int arr[], int n) {
        // code here
        int max = 0;
    for (int x = 0; x < n; x++) {
        if (arr[x] > max) {
            max = arr[x];
        }
    }
    int temp[max + 1];
 
    for (int i = 0; i < max + 1; i++)
        temp[i] = 0;
 
    for (int x = 0; x < n; x++) {
        int num = arr[x];
        temp[num]++;
    }
 
    for (int x = 0; x < n; x++) {
        int num = arr[x];
        if (temp[num] > 1) {
            return x;
        }
    }
 
    return -1;
    }
