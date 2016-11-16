vector<int> Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long long sum =0;
    long long sqSum=0;
    long long temp;
    for(int i=0;i<A.size();i++)
    {
        temp = A[i];
        sum += temp;
        sum -= (i+1);
        sqSum += (temp*temp);
        sqSum -= (long long)(i+1)*(long long)(i+1);
    }
    sqSum /= sum;
    int x = (int)((sum+sqSum)/2);
    int y = sqSum-x;
    vector<int> res;
    res.push_back(x);
    res.push_back(y);
    return res;
}
