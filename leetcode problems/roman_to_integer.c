int romanToInt(char* s) {
    char roman_number[]={'I','V','X','L','C','D','M'};
    int integer_value[]={1,5,10,50,100,500,1000};
    
    int ending;
    ending=strlen(s);
    int curr=0, next=0, sum=0;
    
    for(int i=0; i<ending; i++){
        
        for(int j=0; j<7; j++){
            if(s[i]==roman_number[j]){
                curr=integer_value[j];
            }
            if(s[i+1]==roman_number[j]){
                next=integer_value[j];
            }
        }
        if(curr<next){
            sum=sum-curr;
        }else{
            sum=sum+curr;
        }
    }
    return sum;
}
