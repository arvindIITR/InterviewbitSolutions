int Solution::reverse(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int sign = 1;
    if(A<0){
      sign = -1;
    }
    A=abs(A);

    int sum=0;
    while(A){
        int rem =A%10;
        int maxVal = (INT_MAX-rem)/10;
        if(sum>maxVal){
            return 0;
        }
        sum =sum*10+rem;
        A=A/10;
    }
     return (sum * sign);

}
