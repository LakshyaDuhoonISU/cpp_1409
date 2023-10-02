//c++ program to create a class and objects for it and display student details
#include<iostream>
#include<string>
using namespace std;

class Student
{
    private:
    string college_name;
    string roll_no;
    string name;
    double marks;
    
    public:
    Student()
    {
        cout<<endl<<"Default constructor is called"<<endl;
        college_name="ITM";
        roll_no="ITM002";
        name="XYZ";
        marks=90.5;

        cout<<endl<<"College Name: "<<college_name<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
    Student(string cn,string rn, string n, double m)
    {
        cout<<endl<<"Parameterized constructor is called"<<endl;
        college_name=cn;
        roll_no=rn;
        name=n;
        marks=m;

        cout<<endl<<"College Name: "<<college_name<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
    Student(Student &obj)
    {
        cout<<endl<<"Copy constructor is called"<<endl;
        college_name=obj.college_name;
        roll_no=obj.roll_no;
        name=obj.name;
        marks=obj.marks;

        cout<<endl<<"College Name: "<<college_name<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
    ~Student()
    {
        cout<<endl<<"Destructor is called"<<endl;
    }
    void setData(string cn, string rn, string n, double m)
    {
        college_name=cn;
        roll_no=rn;
        name=n;
        marks=m;
    }
    void displayData()
    {
        cout<<endl;
        cout<<"College name: "<<college_name<<endl;
        cout<<"Roll no: "<<roll_no<<endl;
        cout<<"Student name: "<<name<<endl;
        cout<<"Marks of student: "<<marks<<endl;
    }
};

int main()
{
    // string college_name,roll_no,name;
    // double marks;
    // cout<<"Enter College name: ";
    // getline(cin,college_name);
    // cout<<"Enter Roll Number: ";
    // getline(cin,roll_no);
    // cout<<"Enter name of student: ";
    // getline(cin,name);
    // cout<<"Enter marks: ";
    // cin>>marks;
    Student S1,S2("ITM","ITM001","Amit",78.9);
    // S1.setData(college_name,roll_no,name,marks);
    // S1.displayData();
    // S2.displayData();
    Student S3=S2;
    // S3.displayData();
    return 0;
}

// #include<iostream>
// #include<string>
// using namespace std;

// class Student
// {
// private:
//     string college_name;
//     string roll_no;
//     string name;
//     double marks;

// public:
//     void setData(string cn, string rn, string n, double m)
//     {
//         college_name = cn;
//         roll_no = rn;
//         name = n;
//         marks = m;
//     }

//     void displayData()
//     {
//         cout << "College name: " << college_name << endl;
//         cout << "Roll no: " << roll_no << endl;
//         cout << "Student name: " << name << endl;
//         cout << "Marks of student: " << marks << endl;
//     }
// };

// int main()
// {
//     string college_name, roll_no, name;
//     double marks;

//     cout << "Enter College name: ";
//     getline(cin, college_name);

//     cout << "Enter Roll Number: ";
//     cin >> roll_no;
    
//     cin.ignore(); // Consume the newline character left in the input buffer

//     cout << "Enter name of student: ";
//     getline(cin, name);

//     cout << "Enter marks: ";
//     cin >> marks;

//     Student S1, S2;
//     S1.setData(college_name, roll_no, name, marks);
//     S1.displayData();

//     return 0;
// }
