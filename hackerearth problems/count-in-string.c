#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int solve(char* S, char k, int l) {
    int count = 0;
    for (int i = 0; i < l; i++) {
        if (S[i] == k) {
            count++;
        }
    }
    return count;
}

int main() {
    int T;
    scanf("%d", &T);
    
    for (int t_i = 0; t_i < T; t_i++) {
        
        char* S = (char*)malloc(200000 * sizeof(char));
        
        scanf(" %[^\n]", S);  // read full line safely
        
        char k;
        scanf(" %c", &k);  // read single char safely
        
        int length = strlen(S);
        
        int ans = solve(S, k, length);
        printf("%d\n", ans);
        
        free(S);
    }
    
    return 0;
}
