void digits_print(int n){
    //1.define base case
    if(n<1){
        return;
    }
    digits_print(n/10);
    if(n/10!=0){
        cout<<" ";
     }
    cout<<n%10;
     
}