// Loops

//Sol-1
//int main(){
//    int n, sum=0;
//    for(;;){
//        std::cin>>n;
//        if (n<0) break;
//        sum+=n;
//        std::cout<<sum;
//    }
//}

//Sol -2
//int main(){
//    int base,exp;
//    int res;
//    std::cin>>base>>exp;
//    res=1;
//    for(int i =0; i<exp;i++){
//        res*=base;
//    }
//    std::cout<<res;
//}

//Sol-3
//int main(){
//    int n;
//    char c;
//    std::cin>>c>>n;
//    for(int i=0;i<n;i++){
//        std::cout<<char(c++);
//    }
//}

//Sol-4
//int main(){
//    int n, res =1;
//    std::cin>>n;
//    for(int i=0; i<n;i++){
//        res*= n-i;
//    }
//    std::cout<<res;
//}

//Sol-5
//int main(){
//    int n;
//    std::cin>>n;
//    for (int i=1; i<=n; i++){
//        if(n%i==0)std::cout<<i<<",";
//    }
//}

//Sol-6
//int main(){
//    int a,b,gcd=1;
//    std::cin>>a>>b;
//    for (int i=0; i<=a;i++){
//        if((a%i==0) & (b%i==0)){
//            gcd=i;
//        }
//    }
//    std::cout<<gcd;
//}

//Sol-7
//int main(){
//    int choice;
//    float radius,length,breadth,base,height;
//    while (1){
//        std::cout<<" 1.AreaC\n2.AreaR\n3.AreaT\n4.Exit";
//        std::cin>>choice;
//        switch (choice) {
//            case 1: std::cin>>radius;std::cout<<3.17*radius*radius;break;
//            case 2: std::cin>>length>>breadth;std::cout<<length*breadth;break;
//            case 3: std::cin>>base>>height;std::cout<<0.5*base*height;break;
//            case 4:
//                exit(0);
//        }
//
//    }
//}

//Sol-8
//int main(){
//    int n,count;
//    std::cin>>n;
//    for(int num = 1;num<=n;num++){
//        count = 0;
//        for(int i=2;i<=num/2;i++){
//            if(num%i==0){
//                count++;
//                break;
//            }
//        }
//        if(count==0 && num!= 1)
//            std::cout<<num;
//    }
//}
