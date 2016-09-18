int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n =A.size();
    if(n==0)
     return 0;
    else if(A[0]>B)
     return 0;
    else{
    int l=0;
    int r= n-1;
    while(l<=r){
        int mid =(l+r)/2;
        if(A[mid] == B)
           return mid;
        else if(A[mid]<B && A[mid+1]>B)
           return mid+1;
        if(A[mid]<B)
         l=mid+1;
         else
          r=mid-1;
    }
 }
return n;
}
