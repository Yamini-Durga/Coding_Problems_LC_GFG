https://leetcode.com/problems/powx-n/description/

// C++ code

double calcPow(double x, int n, double ans){
        return n != 0 ? ( (n%2) ? 
            calcPow(x, (n>0 ? n-1 : n+1), ans*x ) 
            : calcPow(x*x, n/2, ans) ) : ans;
    }
    double myPow(double x, int n) {
        double ans = calcPow(x,n,1);
        return n>0 ? ans : 1/ans;
    }

// C# code

public double calcPow(double x, int n, double ans){
        return n != 0 ? ( (n%2 != 0) ? 
            calcPow(x, (n>0 ? n-1 : n+1), ans*x ) 
            : calcPow(x*x, n/2, ans) ) : ans;
    }
    public double MyPow(double x, int n) {
        double ans = calcPow(x,n,1);
        return n>0 ? ans : 1/ans;
    }
