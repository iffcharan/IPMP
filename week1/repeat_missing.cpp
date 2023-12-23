vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long n = A.size();
    
    long long sum = (n*(n+1))/2;
    int x = 0, y = 0;
    
    long long sum2 = (n*(n+1)*((2*n)+1))/6;
    
    for(auto i : A){
        sum -= 1ll*i;         
        sum2 -= (1ll*i*i);
    }

    x = (sum2-(sum*sum))/(2*sum);
    y = (sum + x);

    return {x, y};
}
