int Solution::maxSubArray(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n = A.size();
    int max_so_far = A[0], max_ending_here = 0;
    if(n==1)
        return A[0];
    for(int i = 0; i < n; i++)
    {

        max_ending_here  += A[i];
        if(max_ending_here < A[i])
            max_ending_here = A[i];
        if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}
