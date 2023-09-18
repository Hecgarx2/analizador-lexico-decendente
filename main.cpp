/*
    expr():                                             
        term();
        resto_expr();
    term():
        preanalisis = get_prenalaisis();
            preanalisis == ('0');
                coincidir('0');
            preanalisis == ('1');
                coincidir('1');
            preanalisis == ('n');
                coincidir('n');
    resto_expr():
        preanalisis = get_prenalaisis();
            preanalisis == ('+');
                coincidir('+');
                term();
                resto_expr();
            preanalisis == ('-');
                coincidir('-');
                term();
                resto_expr();
            else:
                fin;
*/

#include <iostream>
#include <string>

using namespace std;

int pos = 0;

char get_preanalisis(string expresion){
    return expresion[pos];
}

void coincidir(char caracter){
    pos++;
}

void term(string expresion){
    char preanalisis;
    preanalisis = get_preanalisis(expresion);
    if (preanalisis == '0'){
        coincidir('0');
    }
    else if (preanalisis == '1'){
        coincidir('1');
    }
    else if (preanalisis == '2'){
        coincidir('2');
    }
    else if (preanalisis == '3'){
        coincidir('3');
    }
    else if (preanalisis == '4'){
        coincidir('4');
    }
    else if (preanalisis == '5'){
        coincidir('5');
    }
    else if (preanalisis == '6'){
        coincidir('6');
    }
    else if (preanalisis == '7'){
        coincidir('6');
    }
    else if (preanalisis == '8'){
        coincidir('6');
    }
    else if (preanalisis == '9'){
        coincidir('9');
    }
    else{
        cout<<"Expresion invalida"<<endl;
        exit;
    }  
}

void resto_expr(string expresion){
    char preanalisis;
    preanalisis = get_preanalisis(expresion);
    if (preanalisis == '+'){
        coincidir('+');
        term(expresion);
        resto_expr(expresion);
    }
    else if (preanalisis == '-'){
        coincidir('-');
        term(expresion);
        resto_expr(expresion);
    }
    else if (preanalisis == '/'){
        coincidir('/');
        term(expresion);
        resto_expr(expresion);
    }
    else if (preanalisis == '*'){
        coincidir('*');
        term(expresion);
        resto_expr(expresion);
    }
    else if (preanalisis == '('){
        coincidir('(');
        term(expresion);
        resto_expr(expresion);
    }
    else if (preanalisis == ')'){
        coincidir(')');
        term(expresion);
        resto_expr(expresion);
    }
    else if (preanalisis == '\0')
    {
        cout<<"Expresion valida"<<endl;
    }
    
    else{
        cout<<"Expresion invalida"<<endl;
        exit;
    }  
}

void expr(string expresion){
    term(expresion);
    resto_expr(expresion);
}

int main(int argc, char const *argv[])
{
    string expresion;
    cout<<"Escribe una expresion: "<<endl;
    cin>>expresion;
    expr(expresion);
    return 0;
}

