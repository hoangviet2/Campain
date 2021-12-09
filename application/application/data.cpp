//
//  data.cpp
//  application
//

#include "data.hpp"
#include <vector>
stack<int> Data::Dec_Binary(int n){
    stack<int> answer;
    while(n>0){
        answer.push(n%2);
        n/=2;
    }
    return answer;
}
int Data::Fibo(int n){
    if (n==1 || n==2)
        return 1;
    else
        return Data::Fibo(n-1)+Data::Fibo(n-2);
}
int Data::isPrimeNumber(int n) {
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
int Data::gcd(int a, int b) {
  while (b != 0)  {
    int t = b;
    b = a % b;
    a = t;
  }
  return a;
}
void Data::test1(){
    cout<<"Hello World @ Code Online"<<"\n";
    return;
}
void Data::test2(){
    Inp.open("Test2.txt");
    int a,b;
    Inp>>a>>b;
    cout<<a+b<<"\n";
    Inp.close();
    return;
}
void Data::test3(){
    Inp.open("Test3.txt");
    int a,b;
    Inp>>a>>b;
    cout<<a+b<<" "<<a-b<<"\n";
    cout<<a*b<<" "<<setprecision(2)<<fixed<<double(double(a)/double(b))<<"\n";
    Inp.close();
    return;
}
void Data::test4(){
    Inp.open("Test4.txt");
    int a;
    Inp>>a;
    cout<<a*a<<" "<<a*a*a<<" "<<a*a*a*a<<"\n";
    Inp.close();
    return;
}
void Data::test5(){
    Inp.open("Test5.txt");
    long long int a,b;
    Inp>>a>>b;
    cout<<a+b<<"\n";
    Inp.close();
    return;
}
void Data::test6(){
    Inp.open("Test6.txt");
    int a,b;
    Inp>>a>>b;
    cout<<2*(a+b)<<" "<<a*b<<"\n";
    Inp.close();
    return;
}
void Data::test7(){
    Inp.open("Test7.txt");
    int a;
    Inp>>a;
    cout<<setprecision(2)<<fixed<<double(4.00*3.14*double(a*a))<<" "<<double(3.14*double(a*a*a)*4.00/3.00);
    Inp.close();
    return;
}
void Data::test8(){
    Inp.open("Test8.txt");
    int dd,mm,yyyy;
    Inp>>dd>>mm>>yyyy;
    printf("%02d/%02d/%04d", dd, mm, yyyy);
    Inp.close();
    return;
}
void Data::test9(){
    Inp.open("Test9.txt");
    int second;
    scanf("%d",&second);
    printf("%02d:%02d:%02d", second/3600 , second%3600/60, second%60);
    Inp.close();
    return;
}
void Data::test10(){
    Inp.open("Test10.txt");
    int a,b;
    Inp>>a>>b;
    cout<<max(a,b)<<"\n";
    Inp.close();
    return;
}
void Data::test11(){
    Inp.open("Test");
    int a,b,c;
    Inp>>a>>b>>c;
    cout<<max(max(a,b),c)<<"\n";
    Inp.close();
    return;
}
void Data::test12(){
    Inp.open("Test");
    int a,b,c,d;
    Inp>>a>>b>>c>>d;
    cout<<max(max(a,b),max(c,d))<<"\n";
    Inp.close();
    return;
}

void Data::test13(){
    Inp.open("Test");
    int a,b,c;
    Inp>>a>>b>>c;
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
    Inp.close();
    return;
}
void Data::test14(){
    Inp.open("Test");
    float a,b,c,p,s=0; // các cạnh của tam giác
    Inp>>a>>b>>c;
    if((a*a<b*b+c*c) && (b*b<a*a+c*c) && (c*c<b*b+a*a)){
        p = (a+b+c)/2;
        s = sqrt(p*(p-a)*(p-b)*(p-c));
        cout<<setprecision(2)<<fixed<<s<<" "<<p*2<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
    Inp.close();
    return;
}
void Data::test15(){
    Inp.open("Test");
    int a;
    Inp>>a;
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
    Inp.close();
    return;
}
void Data::test16(){
    Inp.open("Test");
    int a;
    int fee = 25000;
    Inp>>a;
    if(a>200){
        cout<<(600*50)+(150*400)+((a-200)*200)+fee;
    }else if(a>50){
        cout<<(600*50)+((a-50)*400)+fee;
    }else{
        cout<<600*a+fee;
    }
    Inp.close();
    return;
}
void Data::test17(){
    Inp.open("Test");
    int a;
    Inp>>a;
    for(int i=1;i<=a;++i) cout<<i<<" ";
    Inp.close();
    return;
}
void Data::test18(){
    Inp.open("Test");
    // áp dụng kiến thức lớp 5: https://vndoc.com/bai-toan-tinh-tong-cua-day-so-co-quy-luat-cach-deu-98791
    int a;
    Inp>>a;
    cout<<(1+a)*a/2;
    Inp.close();
    return;
}
void Data::test19(){
    Inp.open("Test");
    int a;
    string sentence,num;
    getline(Inp,num);
    getline(Inp,sentence);
    a = stoi(num);
    for(int i =1;i<=a;++i){
        cout<<sentence<<"\n";
    }
    Inp.close();
    return;
}
void Data::test20(){
    Inp.open("Test");
    int a;
    int answer = 1;
    Inp>>a;
    for(int i=1;i<=a;++i){
        answer*=i;
    }
    cout<<answer;
    Inp.close();
    return;
}
void Data::test21(){
    Inp.open("Test");
    int a;
    Inp>>a;
    double answer = 1;
    for(int i=2;i<=a;++i){
        answer += 1.00/double(i);
    }
    cout<<setprecision(6)<<fixed<<answer;
    Inp.close();
    return;
}
void Data::test22(){
    Inp.open("Test");
    int a,b;
    Inp>>a>>b;
    string line(b,'*');
    for(int i=1;i<=a;++i) cout<<line<<"\n";
    Inp.close();
    return;
}
void Data::test23(){
    Inp.open("Test");
    int a;
    Inp>>a;
    for(int i=a;i>=1;--i){
        string line(i,'*');
        cout<<line<<"\n";
    }
    Inp.close();
    return;
}
void Data::test24(){
    Inp.open("Test");
    int a,b;
    Inp>>a>>b;
    string line(b,'*');
    string lines(b,' ');
    lines.at(0) = '*';
    lines.at(b-1) = '*';
    cout<<line<<"\n";
    for(int i=1;i<=a-2;++i){
        cout<<lines<<"\n";
    }
    cout<<line<<"\n";
    Inp.close();
    return;
}
void Data::test25(){
    Inp.open("Test");
    int n;
    Inp>>n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            cout<<"FALSE";
        }
    }
    cout<<"TRUE";
    Inp.close();
    return;
}
void Data::test26(){
    Inp.open("Test");
    int n;
    Inp>>n;
    int sum = 0;//khai bao biem sum
    for(int i=1;i<=n/2;i++){
        if(n%i==0)
            sum+=i;
    }
    if(sum==n) cout<<"TRUE"; // tra ve true
    cout<<"FALSE";
    Inp.close();
    return;
}
void Data::test27(){
    Inp.open("Test");
    int n;
    Inp>>n;
    cout<<Fibo(n);
    return;
}
void Data::test28(){
    Inp.open("Test");
    long long int n;
    Inp>>n;
    while (n>0) {
        cout<<n%10;
        n/=10;
    }
    Inp.close();
    return;
}
void Data::test29(){
    Inp.open("Test");
    long long int n;
    Inp>>n;
    long long int ans = n%10;
    n/=10;
    while (n>0) {
        ans = max(n%10,ans);
        n/=10;
    }
    Inp.close();
    return;
}
void Data::test30(){
    Inp.open("Test");
    string num,copiedNum;
    getline(Inp, num);
    copiedNum = num;
    reverse(num.begin(), num.end());
    cout<<stoi(num)+stoi(copiedNum);
    Inp.close();
    return;
}
void Data::test31(){
    Inp.open("Test");
    int n;
    Inp>>n;
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
    Inp.close();
    return;
}
void Data::test32(){
    Inp.open("Test");
    int a,b;
    Inp>>a>>b;
    cout<<gcd(a, b)<<" "<<(a*b)/gcd(a, b);
    Inp.close();
    return;
}
void Data::test33(){
    Inp.open("Test");
    int maxNum,miniNum,sizeNum,a;
    Inp>>a;
    maxNum = a;
    miniNum = a;
    sizeNum = 0;
    while(a!=0){
        ++sizeNum;
        maxNum = max(a, maxNum);
        miniNum = min(a,miniNum);
        Inp>>a;
    }
    cout<<maxNum<<" "<<miniNum<<" "<<sizeNum;
    Inp.close();
    return;
}
void Data::test34(){
    Inp.open("Test");
    int k;
    Inp>>k;
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
    Inp.close();
    return;
}
void Data::test35(){
    Inp.open("Test");
    int k;
    Inp>>k;
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
    Inp.close();
    return;
}
void Data::test36(){
    Inp.open("Test");
    int n;
    Inp>>n;
    int count = 0;
    int printValue = 2;
    while(count<n){
        if(isPrimeNumber(printValue)){
            cout<<printValue<<" ";
            ++count;
        }
        ++printValue;
    }
    Inp.close();
    return;
}
void Data::test37(){
    Inp.open("Test");
    int n;
    int temp;
    Inp>>n;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i=0;i<n;++i){
        Inp>>temp;
        maxi = max(maxi, temp);
        mini = min(mini, temp);
    }
    cout<<maxi<<" "<<mini;
    Inp.close();
    return;
}
void Data::test38(){
    Inp.open("Test");
    int n;
    int temp;
    Inp>>n;
    int maxi = INT_MIN;
    int maxPos = 0;
    for(int i=0;i<n;++i){
        Inp>>temp;
        maxi = max(maxi, temp);
        if (maxi == temp) {
            maxPos = i+1;
        }
    }
    cout<<maxPos;
    Inp.close();
    return;
}
void Data::test39(){
    Inp.open("Test");
    int n,temp;
    int total = 0;
    float average;
    Inp>>n;
    for(int i=0;i<n;++i){
        Inp>>temp;
        total+=temp;
    }
    average = total/n;
    cout<<setprecision(2)<<fixed<<average;
    Inp.close();
    return;
}
void Data::test40(){
    Inp.open("Test");
    vector<int> collection;
    int n,temp;
    bool isVaild = false;
    int total = 0;
    float average;
    Inp>>n;
    for(int i=0;i<n;++i){
        Inp>>temp;
        total+=temp;
        collection.push_back(temp);
    }
    average = total/n;
    for(int i=0;i<n;++i){
        if(float(collection[i])>average){
            isVaild = true;
            cout<<i+1<<" ";
        }
    }
    if(isVaild == false){
        cout<<"Not found";
    }
    Inp.close();
    return;
}
void Data::test41(){
    Inp.open("Test");
    int num,temp;
    Inp>>num;
    for(int i=0;i<num;++i){
        Inp>>temp;
        if(isPrimeNumber(temp) == 1){
            cout<<temp<<" ";
        }
    }
    Inp.close();
    return;
}
void Data::test42(){
    Inp.open("Test");
    int num,temp;
    int total = 0;
    int numeric = 0;
    Inp>>num;
    for(int i=0;i<num;++i){
        Inp>>temp;
        if(isPrimeNumber(temp) == 1){
            total+=temp;
            ++numeric;
        }
        cout<<setprecision(2)<<fixed<<double(double(total)/double(numeric));
    }
    Inp.close();
    return;
}
void Data::test43(){
    Inp.open("Test");
    int num,temp;
    bool state = true;
    Inp>>num;
    for(int i=0;i<num;++i){
        Inp>>temp;
        if(sqrt(double(temp))*sqrt(double(temp))==double(temp)){
            state = false;
            cout<<temp<<" ";
        }
    }
    if(state){
        cout<<"NOT FOUND";
    }
    Inp.close();
    return;
}
void Data::test44(){
    Inp.open("Test");
    int num,temp;
    int maxNeg = INT_MIN;
    bool state = true;
    Inp>>num;
    for(int i=0;i<num;++i){
        Inp>>temp;
        if(temp<0){
            state = false;
            maxNeg = max(maxNeg,temp);
        }
    }
    if(state){
        cout<<"NOT FOUND";
    }else{
        cout<<maxNeg;
    }
    Inp.close();
    return;
}
void Data::test45(){
    Inp.open("Test");
    int num,temp;
    vector<int> numsNeg;
    bool state = true;
    Inp>>num;
    for(int i=0;i<num;++i){
        Inp>>temp;
        if(temp<0){
            state = false;
            numsNeg.push_back(temp);
        }else{
            state = false;
            cout<<temp<<" ";
        }
    }
    if(state){
        cout<<"NOT FOUND";
    }else{
        cout<<"\n";
        for(auto element:numsNeg){
            cout<<element<<" ";
        }
    }
    Inp.close();
    return;
}
void Data::test46(){
    Inp.open("Test");
    int num,temp;
    vector<int> numbers;
    Inp>>num;
    for(int i=0;i<num;++i){
        Inp>>temp;
        numbers.push_back(temp);
    }
    sort(numbers.begin(), numbers.end());
    for(auto element:numbers){
        cout<<element<<" ";
    }
    cout<<"\n";
    sort(numbers.begin(), numbers.end(),greater<int>());
    for(auto element:numbers){
        cout<<element<<" ";
    }
    Inp.close();
    return;
}
void Data::test47(){
    Inp.open("Test");
    int num,temp;
    vector<int> numbers;
    Inp>>num;
    for(int i=0;i<num;++i){
        Inp>>temp;
        numbers.push_back(temp);
    }
    sort(numbers.begin(), numbers.end(),greater<int>());
    for(int i=numbers.size()-1;i>=numbers.size()-3;--i){
        cout<<numbers[i]<<" ";
    }
    Inp.close();
    return;
}
void Data::test48(){
    Inp.open("Test");
    int num,temp;
    vector<int> numbers;
    map<int,int> mapple;
    Inp>>num;
    for(int i=0;i<num;++i){
        Inp>>temp;
        numbers.push_back(temp);
        mapple[temp] = 0;
    }
    for(auto element:numbers){
        mapple[element]++;
    }
    cout<<mapple.size()<<"\n";
    for(auto element:mapple){
        cout<<element.first<<" "<<element.second<<"\n";
    }
    Inp.close();
    return;
}
void Data::test49(){
    Inp.open("Test");
    int num,temp;
    vector<int> numbers;
    map<int,int> mapple;
    Inp>>num;
    for(int i=0;i<num;++i){
        Inp>>temp;
        numbers.push_back(temp);
        mapple[temp] = 0;
    }
    for(auto element:numbers){
        mapple[element]++;
    }
    cout<<mapple.size()<<"\n";
    for(auto element:numbers){
        if(mapple[element]!=0){
            cout<<element<<" "<<mapple[element]<<"\n";
            mapple[element] = 0;
        }
    }
    Inp.close();
    return;
}
void Data::test50(){
    Inp.open("Test");
    int num,temp;
    int maxs = 0 ;
    vector<int> numbers;
    map<int,int> mapple;
    Inp>>num;
    for(int i=0;i<num;++i){
        Inp>>temp;
        numbers.push_back(temp);
        mapple[temp] = 0;
    }
    for(auto element:numbers){
        mapple[element]++;
        maxs = max(maxs,mapple[element]);
    }
    for(auto element:numbers){
        if(mapple[element]==maxs){
            cout<<element<<" "<<mapple[element]<<"\n";
            return;
        }
    }
    Inp.close();
    return;
}
void Data::test51(){
    Inp.open("Test");
    int n,temp;
    int current = INT_MIN;
    Inp>>n;
    for(int i=0;i<n;++i){
        Inp>>temp;
        if(current>temp){
            cout<<"FALSE"<<"\n";
            return;
        }else{
            current = temp;
        }
    }
    cout<<"TRUE"<<"\n";
    Inp.close();
    return;
}
void Data::test52(){
    Inp.open("Test");
    int nums = 0;
    int n,temp;
    Inp>>n;
    for(int i=0;i<n;++i){
        Inp>>temp;
        nums = nums*10 + temp;
    }
    string num = to_string(nums);
    string renums = to_string(nums);
    reverse(renums.begin(),renums.end());
    if(num == renums){
        cout<<"True"<<"\n";
        return;
    }
    cout<<"FALSE"<<"\n";
    Inp.close();
    return;
}
void Data::test53(){
    Inp.open("Test");
    int n;
    Inp>>n;
    stack<int> binary = Dec_Binary(n);
    while(!binary.empty()){
        cout<<binary.top();
        binary.pop();
    }
    cout<<"\n";
    Inp.close();
    return;
}
void Data::test54(){
    Inp.open("Test");
    int n,m,temp;
    Inp>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            Inp>>temp;
            matrix[i][j] = temp;
        }
    }
    for(auto section:matrix){
        for(auto element:section){
            cout<<element<<" ";
        }
        cout<<"\n";
    }
    Inp.close();
    return;
}
void Data::test55(){
    Inp.open("Test");
    int n,m,temp;
    Inp>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            Inp>>temp;
            matrix[i][j] = temp;
        }
    }
    vector<int> totalRow;
    vector<int> totalCol;
    for(int i=0;i<n;++i){
        int totalSum = 0;
        for(int j=0;j<m;++j){
            totalSum += matrix[i][j];
        }
        totalRow.push_back(totalSum);
    }
    for(int i=0;i<n;++i){
        int totalSum = 0;
        for(int j=0;j<m;++j){
            totalSum += matrix[j][i];
        }
        totalCol.push_back(totalSum);
    }
    for(auto element:totalRow){
        cout<<element<<" ";
    }
    cout<<"\n";
    for(auto element:totalCol){
        cout<<element<<" ";
    }
    cout<<"\n";
    Inp.close();
    return;
}
void Data::test56(){
    Inp.open("Test");
    int n,m,temp;
    Inp>>n>>m;
    vector<vector<int>> matrix(m,vector<int>(n));
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            Inp>>temp;
            matrix[j][i] = temp;
        }
    }
    for(auto section:matrix){
        for(auto element:section){
            cout<<element<<" ";
        }
        cout<<"\n";
    }
    Inp.close();
    return;
}
void Data::test57(){
    Inp.open("Test");
    int n,temp;
    Inp>>n;
    vector<vector<int>> matrix(n,vector<int>(n));
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            Inp>>temp;
            matrix[j][i] = temp;
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(matrix[i][j] != matrix[j][i]){
                cout<<"FALSE"<<"\n";
                return;
            }
        }
    }
    cout<<"TRUE"<<"\n";
    Inp.close();
    return;
}
void Data::test58(){
    Inp.open("Test");
    int n,temp;
    int sum = 0 ;
    Inp>>n;
    vector<vector<int>> matrix(n,vector<int>(n));
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            Inp>>temp;
            if(i==j){
                sum += temp;
            }
        }
    }
    cout<<setprecision(2)<<fixed<<double(double(sum)/double(n));
    Inp.close();
    return;
}
void Data::test59(){
    Inp.open("Test");
    int n,m,temp;
    Inp>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            Inp>>temp;
            matrix[i][j] = temp;
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            Inp>>temp;
            matrix[i][j] += temp;
        }
    }
    for(auto section:matrix){
        for(auto element:section){
            cout<<element<<" ";
        }
        cout<<"\n";
    }
    Inp.close();
    return;
}
void Data::test60(){
    Inp.open("Test");
    string line;
    getline(Inp,line);
    cout<<"I Love "<<line<<"\n";
    Inp.close();
    return;
}
void Data::test61(){
    Inp.open("Test");
    string line;
    int words = 1;
    getline(Inp,line);
    for(auto element:line){
        if(element==' '){
            ++words;
        }
    }
    cout<<words<<"\n";
    Inp.close();
    return;
}
void Data::test62(){
    Inp.open("Test");
    string line;
    getline(Inp,line);
    if(line[0]=='/'){
        line.erase(0,1);
    }
    if(line[line.length()-1]=='/'){
        line.erase(line.length()-1,2);
    }
    for (int i=0; i<line.length(); ++i) {
        if(line[i]=='/'&& line[i+1]=='/'){
            line.erase(i,1);
            i--;
        }
    }
    cout<<line<<"\n";
    Inp.close();
    return;
}
void Data::test63(){
    Inp.open("Test");
    string line;
    getline(Inp,line);
    for(auto element:line){
        if(!isdigit(element)){
            cout<<"FALSE"<<"\n";
            return;
        }
    }
    cout<<"TRUE"<<"\n";
    Inp.close();
    return;
}
void Data::test64(){
    Inp.open("Test");
    string line;
    getline(Inp,line);
    for(int i=0;i<line.length();++i){
        line[i] = tolower(line[i]);
    }
    line[0] = toupper(line[0]);
    cout<<line<<"\n";
    Inp.close();
    return;
}
void Data::test65(){
    Inp.open("Test");
    string line;
    int ind = 0;
    getline(Inp,line);
    for(int i=0;i<line.length();++i){
        if(line[i] == ' '){
            ind = i;
        }
    }
    cout<<line.substr(ind,line.length()-ind)<<"\n";
    Inp.close();
    return;
}
void Data::test66(){
    Inp.open("Test");
    map<char,int> mapple;
    string line;
    char target;
    getline(Inp,line);
    Inp>>target;
    for(auto element:line){
        mapple[tolower(element)]++;
    }
    cout<<mapple[tolower(target)];
    Inp.close();
    return;
}
void Data::test67(){
    Inp.open("Test");
    int answer = 0;
    string line;
    string target;
    getline(Inp,line);
    getline(Inp,target);
    while(line.find(target)!=string::npos){
        ++answer;
        line.erase(line.find(target),target.length());
    }
    cout<<answer;
    Inp.close();
    return;
}
void Data::menuShowing(){
    Inp.open("Intro.txt");
    while (!Inp.eof()) {
        string temp;
        getline(Inp, temp);
        cout<<temp<<"\n";
    }
    Inp.close();
    return;
}
