//  1.neon no
void neon(int num){
    int sq = num * num;
      int sum =0;
      while(sq>0){
        int rem = sq %10;
        sum = sum+rem;
        sq= sq/10;
      }
      
      if(sum == num){
        printf("%d is a Neon Number\n",num);
      }else{
        printf("%d is not a Neon Number\n",num);
      }
  }

//  2.palindrome
void palindrome(int num){
  int a=num,sum=0;
        while(num>0){
            int rem=num%10;
            num=num/10;
            sum*=10;
            sum=sum+rem;

        }
        if(a==sum){
          printf("It is Palindrome Number\n");
        }
        else{
          printf("It is NOT Palindrome Number\n");
        }
}

// 3.ugly number
void ugly_number(int num){
  while(num!=1) {
    if(num%2==0) {
      num/=2;
    }
    else if(num%3==0) {
      num/=3;
    }
    else if(num%5==0) {
      num/=5;
    }
    else {
      break;
    }
  }
  if(num==1){
    printf("It is a Ugly Number\n");
  }
  else{
    printf("It is NOT a Ugly Number\n");
  }
}