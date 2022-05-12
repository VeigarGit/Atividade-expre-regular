#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
	int opcao;
	string str;
	while (true)
	{
		regex e("([A-Z][a-z]+)(\\s)+([A-Z][a-z]+)((\\s)*([A-Z][a-z]+))?"); 
		//cout << "Expressão Regular: ([A-Z][a-z]+)(\\s)+([A-Z][a-z]+)((\\s)*([A-Z][a-z]+))? \n"; //Nome sobrenome
		//regex e("[[:w:]]+@[[:w:]]+\.(com.br|br)");//email
		//regex e("[[:w:]][[:w:]][[:w:]][[:w:]][[:w:]][[:w:]][[:w:]][[:w:]]");//senha de 8 digitos
		//regex e("[0-9][0-9][0-9].[0-9][0-9][0-9].[0-9][0-9][0-9]-[0-9][0-9]");//cpf
		//regex e("[[:digit:]]{2}\\s9[[:digit:]]{8}");//Telefone
		//regex e("(([0-9][0-9]/[0-9][0-9]/[0-9][0-9][0-9][0-9])\\s([0-2][0-9]:[0-5][0-9]:[0-5][0-9]))");// data e hora
		//regex e("[+—]?([0-9]|.)+");// numeros reais
		//regex e("(HM|MH)(mm*h|hh*m)");//letra a
		//regex e("(HM|MH)m(mm)*");//letra b
		//regex e("(HM|MH)m(h|m)*h");//letra c
		//regex e("(HH|MM)(mh|hm)(m|h)(m|h)((mh|hm)|(m|h))*(mh|hm)");//letra d
		//regex e("(HH|MM)((h|m)*[^mm][^hh])h?");//letra e
		//regex e("(HH|MM)(h?m+|m*)*h?");//letra f
		//regex e("(HH|MM){1,3}(h|m)*mmm");
		getline(cin, str);
		cout << str;
		bool match = regex_match(str, e);

		cout << "  " << (match ? "Aceita" : "Nao aceita") << endl << endl;
	}


}
