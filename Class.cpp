#include <iostream>
using namespace std;
#include<cstring>
#include <utility>

//Sol-1

//class Student {
//public:
//    int rollno;
//    int marks1,marks2,marks3;
//    void acceptinfo(){
//        std::cin >> rollno >> marks1 >> marks2 >> marks3;
//    }
//    void display(){
//        std::cout << rollno << marks1 << marks2 << marks3;
//        int total =marks1+marks2+marks3;
//        std::cout << "Total"<<total<<"percentage"<<total*0.33;
//    }
//};

//Sol-2
//
//class Person {
//private:
//    char name[50]{}, city[50]{};
//    int age{};
//public:
//    void setter(char n[], char c[], int a){
//        strcpy(name,n);
//        strcpy(city, c);
//        age = a;
//    }
//    char* getName(){
//        return name;
//    }
//    char* getCity(){
//        return city;
//    }
//    int getAge(){
//        return age;
//    }
//    Person(){
//        cin>>name>>age>>city;
//    }
//    Person(char n[], char c[], char a){
//        strcpy(name,n);
//        strcpy(city, c);
//        age = a;
//    }
//    void display(){
//        cout<<getName()<<getCity()<<getAge();
//    }
//};
//
//int main(){
//    Person p;
//    p.display();
//}

//Sol-3
//class Date {
//private:
//    int dd,mm,yy;
//public:
//    void setter(int d, int m, int y){
//        dd = d;
//        mm = m;
//        yy = y;
//    }
//    int getDay(){
//        return dd;
//    }
//    int getMonth(){
//        return mm;
//    }
//    int getYear(){
//        return yy;
//    }
//    Date(){
//        cin>>dd>>mm>>yy;
//    }
//    Date(int d, int m ,int y){
//        dd =d;
//        mm= m;
//        yy=y;
//
//    }
//    void display(){
//        cout<<getDay()<<getMonth()<<getYear();
//    }
//};
//int main(){
//    Date d;
//    d.display();
//}


//Sol-4
//class Book {
//private:
//    char name[50]{}, author[50]{};
//    int cost;
//public:
//    void setter(char n[], char c[], int a){
//        strcpy(name,n);
//        strcpy(author, c);
//        cost = a;
//    }
//    char* getName(){
//        return name;
//    }
//    char* getAuthor(){
//        return author;
//    }
//    int getCost(){
//        return cost;
//    }
//    Book(){
//        cin>>name>>cost>>author;
//    }
//    Book(char n[], char c[], char a){
//        strcpy(name,n);
//        strcpy(author, c);
//        cost= a;
//    }
//    void display(){
//        cout<<getName()<<getAuthor()<<getCost();
//    }
//};

//Sol-5
//class Point {
//private:
//    int x,y;
//public:
//    void setter(int d, int m){
//        x = d;
//        y = m;
//    }
//    int getX(){
//        return x;
//    }
//    int getY(){
//        return y;
//    }
//    Point(){
//        cin>>x>>y;
//    }
//    Point(int d, int m){
//        x=d;
//        y=m;
//    }
//    void display(){
//        cout<<getX()<<getY();
//    }
//};
//int main(){
//    Point d;
//    d.display();
//}

//Sol-6
//class ComplexNumber {
//private:
//    int x,y;
//public:
//    void setter(int d, int m){
//        x = d;
//        y = m;
//    }
//    int getX(){
//        return x;
//    }
//    int getY(){
//        return y;
//    }
//    ComplexNumber(){
//        cin>>x>>y;
//    }
//    ComplexNumber(int d, int m){
//        x=d;
//        y=m;
//    }
//    void display(){
//        cout<<getX()<<getY();
//    }
//};
//int main(){
//    ComplexNumber d;
//    d.display();
//}

//Sol-7
//class Date {
//private:
//    int dd,mm,yy;
//public:
//    void setter(int d, int m, int y){
//        dd = d;
//        mm = m;
//        yy = y;
//    }
//    int getDay(){
//        return dd;
//    }
//    int getMonth(){
//        return mm;
//    }
//    int getYear(){
//        return yy;
//    }
//    Date(){
//        cin>>dd>>mm>>yy;
//    }
//    Date(int d, int m ,int y){
//        dd =d;
//        mm= m;
//        yy=y;
//
//    }
//    void display(){
//        cout<<getDay()<<getMonth()<<getYear();
//    }
//};
//int main(){
//    Date d1;
//    Date d2(3,4,2015);
//    d1.display();
//    d2.display();
//}

//Sol-8
//class Employee{
//private:
//    int id;
//    char name[50]{};
//    Date dob;
//public:
////    Employee() : dob(){
////        std::cin>>id>>name;
////    }
//    Employee(int i, char n[], int d , int m ,int y): dob(d,m,y){
//        id = i;
//        strcpy(name, n);
//    }
//    void accept(){
//    std::cin>>name>>id;
//    int d,m,y;
//    cin>>d>>m>>y;
//    dob.setter(d,m,y);
//}
//    void display(){
//    cout<<name<<id<<dob.getDay()<<dob.getMonth()<<dob.getYear();
//}
//};

//Sol-9
//class Employee{
//    int id,
//    char name[24];
//    double salary;
//    double hra,medical =1000,pf,pt;
//    double net_salary,gross_salary;
//public:
//    Employee(){
//        cin>>name>>id>>salary;
//        hra = 0.5*salary;
//        pf = 0.12*salary;
//        pt = 200;
//    }
//    double getGross(){
//        return salary+hra+medical;
//    }
//    double getNet(){
//        return getGross() -(pf+pt);
//    }
//    void display(){
//        cout<<name<<id<<salary;
//        cout<<getGross()<<getNet();
//    }
//};
//int main(){
//    Employee emp;
//    emp.display();
//}

//Sol-10
//class Employee{
//    int id;
//    char name[24];
//    int deptId;
//    double basicSalary;
//public:
//    Employee(){}
//    Employee(int i,int d, char n[], double s){
//        id = i;
//        deptId = d;
//        strcpy(name,n);
//        basicSalary =s;
//    }
//    double getBasicSalary(){
//        return basicSalary;
//    }
//    virtual double netSalary(){
//        return 0;
//    }
//};
//
//class Manager: public Employee{
//    int perfBonus;
//public:
//    Manager(){}
//    Manager(int i,int d, char n[], double s, int perf) : Employee(i,d,n,s){
//        perfBonus = perf;
//    }
//    double netSalary() override{
//        return getBasicSalary()+perfBonus;
//    }
//};
//
//class Worker: public Employee{
//private:
//    int hoursWorked;
//    int hourlyRate;
//public:
//    Worker() {}
//    Worker(int i, int d, char n[], double s, int h, int hr): Employee(i,d,n,s){
//        hourlyRate=hr;
//        hoursWorked =h;
//    }
//    double netSalary() override{
//        return getBasicSalary()+hoursWorked*hourlyRate;
//    }
//    int getHourlyRate(){
//        return hourlyRate;
//    }
//};
//
//int main(){
//    int noOfManagers, noOfWorkers;
//    cin>>noOfManager>>noOfWorkers;
//   Manager* managers = new Manager[noOfManager];
//   Worker* workers = new Worker[noOfWorkers];
//    int id;
//    char name[24];
//    int deptId;
//    double basicSalary;
//    int perfBonus;
//    int hoursWorked;
//    int hourlyRate;
//    for (int i=0 ;i<noOfManagers;i++){
//        cin>>name>>id>>deptId>>basicSalary>>perfBonus;
//        managers[i] = Manager(id, deptId, name, basicSalary, perfBonus);
//    }
//    for (int i=0 ;i<noOfWorkers;i++){
//        cin>>name>>id>>deptId>>basicSalary>>hourlyRate>>hoursWorked;
//        workers[i] = Worker(id, deptId, name, basicSalary, hoursWorked, hourlyRate);
//    }
//    double sum=0;
//    for (int i =0;i<noOfWorkers;i++){
//        sum+=workers[i].getBasicSalary();
//    }
//    for (int i =0;i<noOfManagers;i++){
//        sum+=managers[i].getBasicSalary();
//    }
//    cout<<sum;
//}
//

//Sol-11

//class BankAccount{
//    int accNo;
//    string name;
//    double balance;
//public:
//    BankAccount(){
//        cin>>name>>accNo>>balance;
//    }
//    BankAccount(int acc, string n, double bal){
//        accNo= acc;
//        name = n;
//        balance = bal;
//    }
//    void withdraw(double amt){
//        balance-=amt;
//    }
//    void deposit(double amt){
//        balance+=amt;
//    }
//};

//Sol-12
//class Shape {
//public:
//    virtual int Area() = 0;
//    void setWidth(int w) {
//        width = w;
//    }
//    void setHeight(int h) {
//        height = h;
//    }
//protected:
//    int width;
//    int height;
//};
//class Rectangle: public Shape {
//public:
//    int Area() {
//        return (width * height);
//    }
//};
//class Triangle: public Shape {
//public:
//
//    int Area() {
//        return (width * height)/2;
//    }
//};
//class Circle:public Shape{
//public:
//    int area(){
//        return 2*3.14*width;
//    }
//};
