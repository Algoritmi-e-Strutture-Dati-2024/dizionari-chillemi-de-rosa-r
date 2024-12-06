#include <iostream>
template <typename C, template V>
class Dizionarioesteso {
private:
std: :list<std: :coppia<C, V>>* tabella;
int misura;
int numeroelementi;
int hashFunction(const C& chiave) const {
    return std::hash<C>()(chiave) % misura;
}
public:
Dizionarioesteso(int m=10) : misura(m), numeroelementi(0) {
    tabella= new std::list<std::coppia<C, V>> [misura];
}
Dizionarioesteso(){
    delete[] tabella;
}
void inserisci(const C& chiave, const V& valore) {
    int indice= hashFunction(chiave);
    auto& cell = tabella[indice];
    
}
}
int main {
    Dizionarioesteso<int> dizionario;
    dizionario.inserisci("penna", 1);
    dizionario.inserisci("matita", 2 );
    dizionario.inserisci("gomma", 3);
    dizionario.inserisci("penna", 4);
    std::cout <<"contenuto del dizionario"<< std::endl;
    dizionario.stampa();
    std::cout <<"appartiene 'penna': " << dizionario.appartiene("penna") <<std:: endl;
}
