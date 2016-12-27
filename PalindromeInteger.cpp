bool Solution::isPalindrome(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int sum=0;
    int rem;
    int temp =A;
    int sign=1;
    if(A<0)
      return 0;
    while(A){
        rem = A%10;
        sum = sum*10+rem;
        A=A/10;
    }
    if(sum == temp)
      return true;
    else
      return false;
}
