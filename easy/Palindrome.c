bool isPalindrome(int x){
   long rem=0,sum=0,num=x;
   while(x>0)
   {rem=x%10; //1%10
    sum=sum*10+rem; //10*1
    x/=10; //10/1
    }
    if(sum==num)
    return true;
    else
    return false;
}
