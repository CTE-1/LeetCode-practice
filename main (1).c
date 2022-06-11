

bool isPalindrome(int x){
    if(x<0)
        return false;
    if(x==0)
        return true;
    char *temp=(char*)malloc(10*sizeof(char*));
    int count=0, i;
    while(x!=0)
    {
        temp[count]=x%10;
        count++;
        x=x/10;
    }
    for(i=0;i<count/2;i++)
    {
        if(temp[i]!=temp[count-1-i])
            return false;
    }
    return true;
    
}