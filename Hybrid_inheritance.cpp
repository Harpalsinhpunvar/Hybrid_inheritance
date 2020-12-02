#include<iostream>
using namespace std;

class Student {             // BASE CLASS
    
    protected:    
        int rollno;
    
    public:
        void get_rollno(int r)
        {
            rollno = r;
        }
        
        void show_rollno(void)
        {
            cout<<"Student Result"<<endl;
            cout<<"--------------------"<<endl;
            cout<<"Roll no : "<<rollno<<"\n";
        }

};
class Test : public virtual Student {        //SUB-CLASS 
    
    protected:
        float mark1, mark2;
    
    public:
        void get_marks(float m1, float m2){
            mark1 = m1;
            mark2 = m2;
        }
        
        void show_marks()
        {
            cout<<"Marks obtained:"<<endl;
            cout<<"Mark 1 = "<<mark1<<"\n"<<"Mark 2 = "<<mark2<<"\n";
        }
};
class Sports : public virtual Student{     // SUB-CLASS
    
    protected:
        float score;

    public:
        void get_score(float s){
            score = s;
        }
        void show_score(void)
            {
            cout<<"Sports Scores = "<<score<<"\n";
        } 

};
class Result: public Test, public Sports{     //SUB-CLASS OF SUB-CLASS TEST AND SPORTS.
    
    float total;
    
    public:
    void show(void);
};
    void Result :: show(void)
{
    total = mark1 + mark2 + score;
    show_rollno();
    show_marks();
    show_score();
    cout<<"-------------------------"<<endl;
    cout<<"Total Score = "<<total<<"\n";
    
}
int main(){                                 // MAIN OUT PUT FROM THE BASE CLASS TO SUB-CLASS TO SUB-CLASS OF SUB-CLASS.
    
    Result re;
    re.get_rollno(101);
    re.get_marks(60,65);
    re.get_score(6.0);
    re.show();    
return 0;
}