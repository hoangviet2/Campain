//
//  Homework.cpp
//  Inner
//
//  Created by Hoang Viet on 13/09/2021.
//

#include "Homework.hpp"
using namespace std;
int Homework::Fibo(int n){
    if (n==1 || n==2)
        return 1;
    else
        return Homework::Fibo(n-1)+Homework::Fibo(n-2);
}
void Homework::task1(){
    cout<<"Hello World @ Code Online"<<"\n";
    return;
}
void Homework::task2(){
    int a,b;
    cin>>a>>b;
    cout<<a+b<<"\n";
    return;
}
void Homework::task3(){
    int a,b;
    cin>>a>>b;
    cout<<a+b<<" "<<a-b<<"\n";
    cout<<a*b<<" "<<setprecision(2)<<fixed<<double(double(a)/double(b))<<"\n";
    return;
}
void Homework::task4(){
    int a;
    cin>>a;
    cout<<a*a<<" "<<a*a*a<<" "<<a*a*a*a<<"\n";
    return;
}
void Homework::task5(){
    long long int a,b;
    cin>>a>>b;
    cout<<a+b<<"\n";
    return;
}
void Homework::task6(){
    int a,b;
    cin>>a>>b;
    cout<<2*(a+b)<<" "<<a*b<<"\n";
    return;
}
void Homework::task7(){
    int a;
    cin>>a;
    cout<<setprecision(2)<<fixed<<double(4.00*3.14*double(a*a))<<" "<<double(3.14*double(a*a*a)*4.00/3.00);
    return;
}
void Homework::task8(){
    int dd,mm,yyyy;
    scanf("%d",&dd);
    scanf("%d",&mm);
    scanf("%d",&yyyy);
    printf("%02d/%02d/%04d", dd, mm, yyyy);
    return;
}
void Homework::task9(){
    int second;
    scanf("%d",&second);
    printf("%02d:%02d:%02d", second/3600 , second%3600/60, second%60);
    return;
}
void Homework::task10(){
    int a,b;
    cin>>a>>b;
    cout<<max(a,b)<<"\n";
    return;
}
void Homework::task11(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(max(a,b),c)<<"\n";
    return;
}
void Homework::task12(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<max(max(a,b),max(c,d))<<"\n";
    return;
}

void Homework::task13(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a!=0){
        int delta = (b*b)-(4*a*c);
        if(delta>0){
            b = b*(-1);
            cout<<setprecision(2)<<fixed<<(double(b)+sqrt(delta))/4.00<<" "<<(double(b)+sqrt(delta))/4.00;
        }else if(delta==0){
            b = b*(-1);
            cout<<setprecision(2)<<fixed<<double(b)/(2.00*double(a))<<"\n";
        }else{
            cout<<"VN"<<"\n";
        }
    }else if(a+b+c == 0){
        cout<<"VSN"<<"\n";
    }else{
        cout<<"Chọn lại đi mày đấy kh phải phương trình bậc 2"<<"\n";
    }
    return;
}
void Homework::task14(){
    float a,b,c,p,s=0; // các cạnh của tam giác
    cin>>a>>b>>c;
    if((a*a<b*b+c*c) && (b*b<a*a+c*c) && (c*c<b*b+a*a)){
        p = (a+b+c)/2;
        s = sqrt(p*(p-a)*(p-b)*(p-c));
        cout<<setprecision(2)<<fixed<<s<<" "<<p*2<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
    return;
}
void Homework::task15(){
    int a;
    cin>>a;
    switch (a) {
        case 1:
            cout<<31;
            break;
        case 2:
            cout<<28;
            break;
        case 3:
            cout<<31;
            break;
        case 4:
            cout<<30;
            break;
        case 5:
            cout<<31;
            break;
        case 6:
            cout<<30;
            break;
        case 7:
            cout<<31;
            break;
        case 8:
            cout<<31;
            break;
        case 9:
            cout<<30;
            break;
        case 10:
            cout<<31;
            break;
        case 11:
            cout<<30;
            break;
        case 12:
            cout<<31;
            break;
        default:
            cout<<"NOT FOUND";
            break;
    }
    return;
}
void Homework::task16(){
    int a;
    int fee = 25000;
    cin>>a;
    if(a>200){
        cout<<(600*50)+(150*400)+((a-200)*200)+fee;
    }else if(a>50){
        cout<<(600*50)+((a-50)*400)+fee;
    }else{
        cout<<600*a+fee;
    }
    return;
}
void Homework::task17(){
    int a;
    cin>>a;
    for(int i=1;i<=a;++i) cout<<i<<" ";
    return;
}
void Homework::task18(){
    // áp dụng kiến thức lớp 5: https://vndoc.com/bai-toan-tinh-tong-cua-day-so-co-quy-luat-cach-deu-98791
    int a;
    cin>>a;
    cout<<(1+a)*a/2;
    return;
}
void Homework::task19(){
    int a;
    string sentence,num;
    getline(cin,num);
    getline(cin,sentence);
    a = stoi(num);
    for(int i =1;i<=a;++i){
        cout<<sentence<<"\n";
    }
    return;
}
void Homework::task20(){
    int a;
    int answer = 1;
    cin>>a;
    for(int i=1;i<=a;++i){
        answer*=i;
    }
    cout<<answer;
    return;
}
void Homework::task21(){
    int a;
    cin>>a;
    double answer = 1;
    for(int i=2;i<=a;++i){
        answer += 1.00/double(i);
    }
    cout<<setprecision(6)<<fixed<<answer;
    return;
}
void Homework::task22(){
    int a,b;
    cin>>a>>b;
    string line(b,'*');
    for(int i=1;i<=a;++i) cout<<line<<"\n";
    return;
}
void Homework::task23(){
    int a;
    cin>>a;
    for(int i=a;i>=1;--i){
        string line(i,'*');
        cout<<line<<"\n";
    }
    return;
}
void Homework::task24(){
    int a,b;
    cin>>a>>b;
    string line(b,'*');
    string lines(b,' ');
    lines.at(0) = '*';
    lines.at(b-1) = '*';
    cout<<line<<"\n";
    for(int i=1;i<=a-2;++i){
        cout<<lines<<"\n";
    }
    cout<<line<<"\n";
    return;
}
void Homework::task25(){
    int n;
    cin>>n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            cout<<"FALSE";
        }
    }
    cout<<"TRUE";
    return;
}
void Homework::task26(){
    int n;
    cin>>n;
    int sum = 0;//khai bao biem sum
    for(int i=1;i<=n/2;i++){
        if(n%i==0)
            sum+=i;
    }
    if(sum==n) cout<<"TRUE"; // tra ve true
    cout<<"FALSE";
    return;
}
void Homework::task27(){
    int n;
    cin>>n;
    cout<<Fibo(n);
    return;
}
void Homework::task28(){
    long long int n;
    cin>>n;
    while (n>0) {
        cout<<n%10;
        n/=10;
    }
    return;
}
void Homework::task29(){
    long long int n;
    cin>>n;
    long long int ans = n%10;
    n/=10;
    while (n>0) {
        ans = max(n%10,ans);
        n/=10;
    }
    return;
}
void Homework::task30(){
    string num,copiedNum;
    getline(cin, num);
    copiedNum = num;
    reverse(num.begin(), num.end());
    cout<<stoi(num)+stoi(copiedNum);
    return;
}
void Homework::task31(){
    int n;
    cin>>n;
    for(int i=2;i<=n;++i){
        int timesTimes = 0;
        while(n%i ==0){
            ++timesTimes;
            n/=i;
        }
        if(timesTimes){
            cout << i;
            if(timesTimes > 1) cout << "^" << timesTimes;
            if(n > i){
                cout << " * ";
            }
        }
    }
    return;
}
void Homework::task32(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a, b)<<" "<<(a*b)/gcd(a, b);
    return;
}
void Homework::task33(){
    int maxNum,miniNum,sizeNum,a;
    cin>>a;
    maxNum = a;
    miniNum = a;
    sizeNum = 0;
    while(a!=0){
        ++sizeNum;
        maxNum = max(a, maxNum);
        miniNum = min(a,miniNum);
        cin>>a;
    }
    cout<<maxNum<<" "<<miniNum<<" "<<sizeNum;
    return;
}
void Homework::task34(){
    int k;
    cin>>k;
    if(k<2){
        cout<<"NOT FOUND";
    }
    bool check[k];
    // Khởi tạo tất cả các số [2...N] đều là số nguyên tố
    for (int i = 2; i < k; i++) {
        check[i] = true;
    }
     
    // Thuật toán sàng nguyên tố
    // Nếu một số là số nguyên tố, thì tất cả các bội của nó không phải số nguyên tố
    for (int i = 2; i < k; i++) {
        if (check[i] == true) {
            for (int j = 2 * i; j <= k; j += i) {
                check[j] = false;
            }
        }
    }
      // In ra các số là số nguyên tố
    for (int i = 2; i < k; i++) {
        if (check[i] == true) {
            printf("%d ", i);
        }
    }
    return;
}
void Homework::task35(){
    int k;
    cin>>k;
    if(k<2){
        cout<<"NOT FOUND";
    }
    bool check[k];
    // Khởi tạo tất cả các số [2...N] đều là số nguyên tố
    for (int i = 2; i < k; i++) {
        check[i] = true;
    }
     
    // Thuật toán sàng nguyên tố
    // Nếu một số là số nguyên tố, thì tất cả các bội của nó không phải số nguyên tố
    for (int i = 2; i < k; i++) {
        if (check[i] == true) {
            for (int j = 2 * i; j <= k; j += i) {
                check[j] = false;
            }
        }
    }
    int count = 0;
    int total = 0;
    // In ra các số là số nguyên tố
    for (int i = 2; i < k; i++) {
        if (check[i] == true) {
            total+=i;
            count++;
        }
    }
    cout<<total/count;
    return;
}
void Homework::task36(){
    int n;
    cin>>n;
    int count = 0;
    int printValue = 2;
    while(count<n){
        if(isPrimeNumber(printValue)){
            cout<<printValue<<" ";
            ++count;
        }
        ++printValue;
    }
    return;
}
int Homework::isPrimeNumber(int n) {
    // so nguyen n < 2 khong phai la so nguyen to
    if (n < 2) {
        return 0;
    }
    // check so nguyen to khi n >= 2
    int i;
    int squareRoot = sqrt(n);
    for (i = 2; i <= squareRoot; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int Homework::gcd(int a, int b) {
  while (b != 0)  {
    int t = b;
    b = a % b;
    a = t;
  }
  return a;
}
