t=int(input())
for i in range(t):
    n = int(input())
    pow_value=pow(2,n);
    sum=0;
    while(pow_value>0):
        sum+=pow_value%10;
        pow_value//=10;
    
    print(sum)