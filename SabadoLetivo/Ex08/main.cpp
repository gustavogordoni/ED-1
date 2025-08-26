#include <iostream>
#include <locale>

using namespace std;

/*
Considere um cadastro de produtos de um estoque
(código do produto, nome do produto, quantidade disponível e preço de venda).
Crie uma struct contendo estas informações.  Peça para o usuário informar a quantidade de
produtos (N) que serão cadastrados, depois aloque dinamicamente a struct.
Faça o cadastro (peça as informações dos N produtos para o usuário.
Encontre o produto que possui o maior preço de venda e também encontre o produto
que possui a menor quantidade disponível no estoque  (exiba o código e o nome do produto).
*/

struct Produto {
    int codigo;
    string nome;
    int quantidade;
    double preco;
};

void cadastrarProdutos(Produto *produtos, int N);
void verificarProdutos(Produto *produtos, int N);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int N;
    cout << "Digite a quantidade de produtos: ";
    cin >> N;

    Produto *produtos = new Produto[N];

    cadastrarProdutos(produtos, N);
    verificarProdutos(produtos, N);

    delete[] produtos;

    return 0;
}

void cadastrarProdutos(Produto *produtos, int N) {
     for (int i=0; i<N; i++) {
        cout << "\n--- Produto " << i+1 << " ---" << endl;
        cout << "Código: ";
        cin >> produtos[i].codigo;

        cin.ignore();
        cout << "Nome: ";
        getline(cin, produtos[i].nome);

        cout << "Quantidade: ";
        cin >> produtos[i].quantidade;

        cout << "Preço: ";
        cin >> produtos[i].preco;
    }
}

void verificarProdutos(Produto *produtos, int N) {
    Produto maiorPreco = produtos[0];
    Produto menorQtd = produtos[0];

    for (int i=1; i<N; i++) {
        if (produtos[i].preco > maiorPreco.preco) {
            maiorPreco = produtos[i];
        }
        if (produtos[i].quantidade < menorQtd.quantidade) {
            menorQtd = produtos[i];
        }
    }

    cout << "\nProduto com maior preço: " << maiorPreco.nome
         << " (Código: " << maiorPreco.codigo << ")" << endl;
    cout << "Produto com menor quantidade: " << menorQtd.nome
         << " (Código: " << menorQtd.codigo << ")" << endl;
}
