vector<vector<int> > Solution::generateMatrix(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<vector<int> > res(A,vector<int>(A,0));
        if (A==0){return res;}
        int i=1;
        int x = 0;
        int y = 0;
        res[0][0]=i++;
        while (i<=A*A){
            while (y+1<A && res[x][y+1]==0){
                res[x][++y]=i++;
            }
            while (x+1<A && res[x+1][y]==0){
                res[++x][y]=i++;
            }
            while (y-1>=0 && res[x][y-1]==0){
                res[x][--y]=i++;
            }
            while (x-1>=0 && res[x-1][y]==0){
                res[--x][y]=i++;
            }
        }
        return res;
}
