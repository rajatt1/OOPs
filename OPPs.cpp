// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Students
{
    private:
        int roll;
        string name;
        int mathMarks;
        int phyMarks;
        int chemMarks;
        
    public:
        Students(int r, string n, int m, int p, int c)
        {
            roll=r;
            name=n;
            mathMarks=m;
            phyMarks=p;
            chemMarks=c;
        }
        int total()
        {
            return mathMarks+phyMarks+chemMarks;
        }
        char grade()
        {
            float average=total()/3;
            if(average>60)
                return 'A';
            else if(average>=40 && average<60)
                return 'B';
            else
                return 'C';
        }
};

int main() {
    int roll;
    string name;
    int m,p,c;
    cout<<"Enter Roll number of a student: ";
    cin>>roll;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter marks in 3 subjects: ";
    cin>>m>>p>>c;
    Students s(roll,name,m,p,c);
    cout<<"Total marks: "<<s.total()<<endl;
    cout<<"Grade of Students: "<<s.grade()<<endl;

    return 0;
}