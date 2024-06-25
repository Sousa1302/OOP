#include <iostream>

using namespace std;

class Student{
    private:
        string Name;
        int Age;
        float Grades[3];

    public:
        Student(string name, int age, float grades[3]){
            Name = name;
            Age = age;
            for(int x = 0; x < 3; x++){
                Grades[x] = grades[x];
            }
        }

        string getName(){
            return Name;
        }

        int getAge(){
            return Age;
        }

        void setName(string nome){
            Name = nome;
        }

        void setAge(int idade){
            Age = idade;
        }

        float getGrade(int index) {
            if (index >= 0 && index < 3) {
                return Grades[index];
            }
            return -1; // valor inválido
        }

        void setGrade(int index, float grade) {
            if (index >= 0 && index < 3) {
                Grades[index] = grade;
            }
        }

        float calculateAverage(){
            float sum = 0;
            for(int x = 0; x < 3; x++){
                sum += Grades[x];
            }
            return sum / 3;
        }

        bool isApproved(){
            return calculateAverage() >= 6;
        }

        void displayInfo(){
            cout << "Name: " << Name << endl;
            cout << "Age: " << Age << endl;
            cout << "Avarage Grade: " << calculateAverage() << endl;
            cout << "Is approved: " << isApproved() << endl;
        }
};

int main(){
    float grades1[3] = {10, 15, 20};
    float grades2[3] = {5, 20 ,5};
    float grades3[3] = {10, 10, 15};

    Student Aluno_1("Jose", 17, grades1);
    Student Aluno_2("Carlos", 19, grades2);
    Student Aluno_3("Alberto", 16, grades3);

    Aluno_1.setGrade(1, 12);
    Aluno_2.setGrade(2, 18);

    Aluno_1.displayInfo();
    Aluno_2.displayInfo();
    Aluno_3.displayInfo();

    return 0;
}