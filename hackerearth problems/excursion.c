#include <stdio.h>

void rooms(int n, int m, int k){
    int boys = (n + k - 1) / k;
    int girls = (m + k - 1) / k;
    printf("%d\n", boys + girls);
}

int main(){
    int T;
    scanf("%d", &T);
    
    while(T--){
        int N, M, K;
        scanf("%d %d %d", &N, &M, &K);
        
        rooms(N, M, K);
    }
    
    return 0;
}
