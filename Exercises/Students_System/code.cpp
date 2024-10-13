#include <iostream>

using namespace std;

class Aluno{
    private:
        string nome;
        int matricula;
        float notas[3];

    public:
        void setName(string Nome){
            nome = Nome;
        }

        void setMatricula(int Matricula){
            matricula = Matricula;
        }

        void setNotas(float Notas[3]){
            for(int x = 0 ; x < 3; x++){
                notas[x] = Notas[x];
            }
        }

        string getName(){
            return nome;
        }

        int getMatricula(){
            return matricula;
        }

        float getNotas(){
            for(int x = 0; x < 3; x++){
                return notas[x];
            }
        }

        float calculaMedia(){
            float total = 0;

            for(int x = 0; x < 3; x++){
                total += notas[x];
            }
            return total / 3;
        }
};

class Turma{
    private:
        Aluno alunos_turma[25];
        int tamanho = 0;

    public:
        void adicionarAluno(Aluno aluno){
            if(tamanho < 25){
                alunos_turma[tamanho] = aluno;
                tamanho++;
            }
            else{
                cout << "A turma ja esta cheia !\n";
            }
        }

        void removerAluno(int matricula){
            for(int x = 0; x < tamanho; x++){
                if(alunos_turma[x].getMatricula() == matricula){
                    for(int x = 0; x < tamanho - 1; x++){
                        alunos_turma[x] = alunos_turma[x + 1];
                    }
                    tamanho--;
                    cout << "O aluno foi removido !\n";
                }
            }
            cout << "Aluno nao encontrado !\n";
        }

        void mostrarAlunos(){
            for(int x = 0; x < tamanho; x++){
                cout << "Aluno: " << alunos_turma[x].getName() << " | " 
                << "Matricula: " << alunos_turma[x].getMatricula() << " | "
                << "Media: " << alunos_turma[x].calculaMedia() << endl;
            }
        }
};

int main(){
    Turma turma_1;
    Aluno aluno_1, aluno_2;

    aluno_1.setName("Ricardo");
    aluno_1.setMatricula(12424);

    float notas_Aluno_1[3] = {18, 16.8, 17.3};
    aluno_1.setNotas(notas_Aluno_1);

    turma_1.adicionarAluno(aluno_1);

    turma_1.mostrarAlunos();
    
    return 0;
}