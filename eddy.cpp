#include <iostream>
#include <string>
#include <cstring>
#include <locale.h>
#include <iomanip>
using namespace std;
void menuPrinc() ;
void menuRemocao() ;
void menuRotiEsp() ;
int addVetor( int a) ;
void exibirVetor() ;
int removPOS( int a ) ;
int removVetorIND( int a ) ;
double removTodosITENS() ;
void ordemCRESCENTE() ;
void ordemDECRESCENTE() ;
void maiorValor() ;
void menorValor() ;
void contTOPO() ;
double totalSoma() ;
double media(double a, double b, int c );
int VETOR[10]={10, 7, 3, 4, 8, 6, 2, 5, 9, 1}, topo = 0 ;
int main(){
setlocale( LC_ALL,"Portuguese" ) ;
int valor, op1, Vadd = 0, op2, remVAL, remIND, op3, op4, SomaTl, aux ;
double MEDIAtl ;
string menuP, menuESP ;
bool b = true ;
do{
menuPrinc() ;
cout << "INFORME UMA DAS OPÇÕES ACIMA: " << endl ;
cin >> op1 ;
system("cls") ;
switch ( op1 ) {
case 1 :
cout << "INFORME O VALOR A SER ADICIONADO:" << endl ;
cin >> Vadd ;
system( "cls" ) ;
addVetor( Vadd ) ;
break ;
case 2 :
menuRemocao() ;
cout << "INFORME UMA DAS OPÇÕES ACIMA:" << endl ;
cin >> op2 ;
if ( op2 == 1 ) {
cout << "INFORME O VALOR QUE DESEJA REMOVER DO VETOR:" << endl ;
cin >> remVAL ;
system( "cls" ) ;
cout << "SEQUÊNCIA DO VETOR COM O VALOR "
<< remVAL << " ZERADO:" << endl ;
removVetorIND( remVAL ) ;
}else if ( op2 == 2 ) {
cout << "INFORME A POSIÇÃO QUE DESEJA ZEROO VALOR DO VETOR:" << endl ;
cin >> remIND ;
system( "cls" ) ;
while( remIND < 0 || remIND > 9 ) {
cout << "INFORME A POSIÇÃO QUE DESEJAZERAR O VALOR DO VETOR 'Posições de o a 9':" << endl ;
cin >> remIND ;
system( "cls" ) ;
}
cout << "SEQUÊNCIA DO VETOR COM O VALOR DAPOSIÇÃO " << remIND << " ZERADA" << endl ;
removPOS( remIND ) ;
}else if ( op2 == 3 ) {
cout << "SEGUE ABAIXO OS VALORES DO VETORZERADOS:" << endl ;
removTodosITENS() ;
}
break ;
case 3 :
do {
menuRotiEsp() ;
cout << "INFORME UMA DAS OPÇÕES DO MENUACIMA:" << endl ;
cin >> op3 ;
system( "cls" ) ;
switch(op3){
case 1 :
cout << "ORDEM CRESCENTE" << endl
;
ordemCRESCENTE() ;
break ;
case 2 :
cout << "ORDEM DECRESCENTE" <<
endl ;
ordemDECRESCENTE() ;
break ;
case 3 :
maiorValor() ;
break ;
case 4 :
menorValor() ;
break ;
case 5 :
cout << "SOMA TOTAL DOSELEMENTOS: " << endl ;
totalSoma() ;
break ;
case 6 :
contTOPO() ;
system( "cls" ) ;
cout << "SOMA TOTAL DOS ELEMENTOS: " << endl ;
cout << "VALOR MÉDIO DOS ELEMENTOS: " << endl
<< fixed << setprecision(2)
<< media( MEDIAtl, totalSoma(),
topo ) << endl ;
break ;
case 7 :
cout << "OBRIGADO USUÁRIO!" <<
endl ;
break ;
}
cout << "DESEJA VOLTAR AO MENU ROTINAS ESPECIAIS?, DIGITE SIM" << endl ;
cin >> menuESP ;
system( "cls" ) ;
}while ( menuESP == "sim" || menuESP == "SIM" ) ;
break ;
case 4 :
cout << "SEGUE OS VALORES CONTIDOS NO VETOR:" <<endl ;
exibirVetor() ;
break ;
}
cout << "DESEJA VOLTAR AO MENU PRINCIPAL?, DIGITE SIM" << endl ;
cin >> menuP ;
system( "cls" ) ;
}while( menuP == "sim" || menuP == "SIM" ) ;
}
void menuPrinc() {
cout << " Menu Principal" << endl
<< "1 - Adicionar valores no vetor" << endl
<< "2 - Remover um valor especifico" << endl
<< "3 - Rotinas Especiais" << endl
<< "4 - Exibir os elemento" << endl ;
}
void menuRemocao() {
cout << " Menu Remoção" << endl
<< "1 - Remover pelo Índice" << endl
<< "2 - Remover pela Posição" << endl
<< "3 - Remover todos" << endl ;
}
void menuRotiEsp() {
cout<< " Menu Rotinas Especiais" << endl
<< "1 - Exibir os elementos em ordem crescente" << endl
<< "2 - Exibir os elementos em ordem decrescente" << endl
<< "3 - Mostrar o maior elemento do vetor" << endl
<< "4 - Mostrar o menor elemento do vetor" << endl
<< "5 - Exibir a soma total dos elementos" << endl
<< "6 - Exibir a media dos elementos" << endl
<< "7 - Retornar ao menu Principal" << endl ;
}
int addVetor( int a) {
for ( int i = 0 ; i < 10 ; i++ ) {
if ( VETOR[i] >= 0 ) {
if ( a%2 == 0 ) {
VETOR[i + 9] = a ;
system( "pause" ) ;
exibirVetor() ;
break ;
}else if ( a%2 == 1 ) {
VETOR[i] = a ;
system( "pause" ) ;
exibirVetor() ;
break ;
}
}
}
}
void exibirVetor() {
for ( int i = 0 ; i < 10 ; i++ ) {
cout << "VETOR [" << i << "] = " << VETOR[i] << endl ;
}
}
int removPOS( int a ) {
for ( int i = 0 ; i < 10 ; i++ ) {
if ( VETOR[a] != 0 ) {
VETOR[a] = 0 ;
exibirVetor() ;
break ;
}else if ( VETOR[a] == 0 ) {
cout << "VETOR[" << a << "] JÁ ENCONTRA-SE ZERADO." << endl
<< endl ;
exibirVetor() ;
break ;
}
}
}
int removVetorIND( int a ) {
for ( int i = 0 ; i < 10 ; i++ ) {
if ( VETOR[i] == a ) {
VETOR[i] = 0 ;
exibirVetor() ;
break ;
}
}
}
double removTodosITENS(){
for ( int i = 0 ; i < 10 ; i++ ) {
if ( VETOR[i] != 0 ) {
VETOR[i] = 0 ;
cout << "VETOR [" << i << "] = " << VETOR[i] << endl ;
}
}
}
void ordemCRESCENTE() {
for ( int i = 0 ; i < 10 ; i++ ) {
for ( int j = i + 1 ; j < 10 ; j++ ) {
int aux ;
if ( VETOR[i] > VETOR[j] ) {
aux = VETOR[i] ;
VETOR[i] = VETOR[j] ;
VETOR[j] = aux ;
}
}
}
exibirVetor() ;
}
void ordemDECRESCENTE(){
for ( int i = 0 ; i < 10 ; i++ ) {
for ( int j = i + 1 ; j < 10 ; j++ ) {
int aux ;
if ( VETOR[i] < VETOR[j] ) {
aux = VETOR[i] ;
VETOR[i] = VETOR[j] ;
VETOR[j] = aux ;
}
}
}
exibirVetor() ;
}
void maiorValor() {
contTOPO() ;
if ( topo > 0 ) {
int MAIOR = VETOR[0] ;
for ( int i = 1 ; i < 10 ; i++ ) {
if ( MAIOR < VETOR[i] ) {
MAIOR = VETOR[i] ;
}
cout << "MAIOR VALOR É " << MAIOR << endl ;
break ;
}
} else {
cout << "VETOR ENCONTRA-SE ZERADO" << endl ;
}
}
void menorValor() {
contTOPO() ;
if ( topo > 0 ) {
int MENOR = VETOR[9] ;
for ( int i = 1 ; i < 10 ; i++ ) {
if ( MENOR > VETOR[i] ) {
MENOR = VETOR[i] ;
}
cout << "MENOR VALOR É " << MENOR << endl ;
break ;
}
} else {
cout << "VETOR ENCONTRA-SE ZERADO" ;
}
}
void contTOPO() {
topo = 0 ;
for ( int i = 0 ; i < 10 ; i++ ) {
if ( VETOR[i] > 0 ) {
topo++ ;
}
}
}
double totalSoma() {
double a = 0 ;
for ( int i = 0 ; i < 10 ; i++ ) {
if ( VETOR[i] != 0 ) {
a = a + VETOR[i] ;
}
//cout << a << endl ;
//break ;
}
cout << a << endl ;
return a ;
}
double media(double a, double b, int c ) {
return a = b / c ;
}
