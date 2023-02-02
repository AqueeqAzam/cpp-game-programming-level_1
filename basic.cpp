int main(){
              int student, pass, fail;
              int yrs = 2020;
              string course;

              cout<<"Welcome to qualification score game"<<endl;
              cout<<"Enter the total number of the student";
              cin>>student;

              cout<<"Enter the marks of the student who score good in exam";
              cin>>pass;

              cout<<"Enter the number of student who score bad in exam";
              cin>>fail;

              cout<<"enter the name of couse";
              cin>>course;

              cout<<"Total number of "<<student<<"who pass this year in"<<course;
              cout<<"is only"<<student - fail;
              cout<<"and rest of the student is fail in"<<course;
              cout<<"with low score and the number of student is "<<student-pass;

              return 0;
}
