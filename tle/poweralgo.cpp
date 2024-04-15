const int MOD=10000000007
int power(int a,int b){
    if(b==0) return 1;
    a%=MOD;
    int temp=power(a,b/2);
    if(a%2==0) return temp*temp*MOD;
    else return temp*temp*MOD*a*MOD;
}