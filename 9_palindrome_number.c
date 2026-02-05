bool isPalindrome(int x) {
    int original=x;
    long int reverse=0;
    bool ans;
    if(x<0){
        return false;
    }
    while(x>0){
        reverse=reverse*10+(x%10);
        x=x/10;
    }
    if (original == reverse)
        return true;
    else
        return false;
}