string LCP(string str1, string str2){
    int n1=str1.length();
    int n2=str2.length();
    string res="";
    for(int i=0,j=0;i<=n1-1 && j<=n2-1; i++,j++)
    {
        if(str1[i]!=str2[j])
          break;
    res.push_back(str1[i]);
    }
    return res;
}


string Solution::longestCommonPrefix(vector<string> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    string prefix = A[0];
    for(int i=1;i<n;i++)
       prefix = LCP(prefix,A[i]);

    return prefix;
}
