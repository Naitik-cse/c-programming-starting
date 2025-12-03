bool isPalindrome(int x) {
    int original; long rev=0; int mod;
    original=x;
    if(x<0) return 0;
    for(int i=x; i>0; i=i/10){
        mod=i%10;
        rev=mod+rev*10;
    }if(rev==original){
        return 1;
    }else{
        return 0;
    }
}
