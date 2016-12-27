int Solution::findMin(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n =A.size();
    /* O(n) Solution
    int idx=0;
    for(int i=1;i<n;i++){
        if(A[i-1] > A[i]){
          idx=i;
           break;
        }
    }
    return A[idx];*/

    /*O(logn) solution*/
    int low=0;
    int high=n-1;
    while(low <= high){
        if(A[low]<=A[high])
          return A[low];
        int mid = (low+high)/2;
        int next = (mid+1)%n;
        int prev = (mid+n-1)%n;
        if(A[mid] <=A[next] && A[mid] <= A[prev])
         return A[mid];
        else if(A[mid] <= A[high])
          high = mid-1;
        else if(A[mid] >= A[low])
         low = mid+1;
    }
}
