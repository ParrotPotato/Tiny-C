int fibo(int x){
    if(x == 0 || x == 1 ){
        return 0;
    }
    return fibo(x-1) + fibo(x-2);
}

int MAX = 126;

int ARRAY[MAX];

int fibo_dp(int x){
    if(ARRAY[x] == -1)
        ARRAY[x] = fibo_dp(x-1) + fibo_dp(x-2);
    return ARRAY[x];
}

void init(){
    for(int i=0;i<MAX;i++)
        ARRAY[i] = -1;
}

int main(){
    int x = 10;
    int without = fibo(10);
    int with_dp = fibo_dp(10);
    return 0;
}
