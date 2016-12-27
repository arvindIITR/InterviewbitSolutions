int Solution::findCount(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n= A.size();
    int low=0;
    int high=n-1;
    int start =-1, end=-1;

    //Find first index
    while(low<high){
        int mid = (low+high)/2;
        if(A[mid] < B)
         low =mid+1;
        else
         high =mid;
    }

    if(A[low] != B)
     return 0;
    start=low;

    //Find last index
    high = n - 1;
    while (low < high)
    {
        int mid = (low+ high) /2 + 1;
        if (A[mid] > B) high = mid - 1;
        else low = mid;
    }
    end = high;

    return (end-start + 1);
}
