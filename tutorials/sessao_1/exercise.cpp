#include <iostream>

using namespace std;

class Book{
    private:
        string Title;
        string Author;
        int PublicationYear;
        bool IsAvailable;

    public:
        void DisplayInfo(){
            cout << "Title: " << Title << endl;
            cout << "Author: " << Author << endl;
            cout << "Publication Year: " << PublicationYear << endl;
            cout << "Avaibility: " << IsAvailable << endl;
        }

        void CheckAvaibility(){
            if(IsAvailable == true){
                cout << "It is available !\n";
            }
            else{
                cout << "It is not available!\n";
            }
        }


        Book(string title, string author, int pubYear, bool available){
            Title = title;
            Author = author;
            PublicationYear = pubYear;
            IsAvailable = available;
        }
};

int main(){
    Book Livro_1("Comida", "Jose Saramago", 2010, true);
    Book Livro_2("Carne Moida", "Camoes", 2015, false);
    Book Livro_3("O Dentista", "Sofia Bryner", 2004, true);

    Livro_1.DisplayInfo();
    Livro_2.DisplayInfo();
    Livro_3.DisplayInfo();
    
    cout << endl;

    Livro_1.CheckAvaibility();
    Livro_2.CheckAvaibility();
    Livro_3.CheckAvaibility();

    return 0;
}