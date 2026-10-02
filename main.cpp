#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Student { int id; string name, course; double marks; };
int main() {
    vector<Student> students; int choice;
    do {
        cout << "\n1 Add\n2 List\n3 Search ID\n4 Exit\nChoice: ";
        cin >> choice;
        if(choice==1) {
            Student s; cout<<"ID: ";cin>>s.id; cin.ignore();
            cout<<"Name: ";getline(cin,s.name);
            cout<<"Course: ";getline(cin,s.course);
            cout<<"Marks: ";cin>>s.marks; students.push_back(s);
        } else if(choice==2) {
            for(const auto&s:students) cout<<s.id<<" | "<<s.name<<" | "<<s.course<<" | "<<s.marks<<"\n";
        } else if(choice==3) {
            int id; cout<<"ID: ";cin>>id; bool found=false;
            for(const auto&s:students) if(s.id==id){cout<<s.name<<" | "<<s.course<<" | "<<s.marks<<"\n";found=true;}
            if(!found) cout<<"Not found.\n";
        }
    } while(choice!=4);
}
