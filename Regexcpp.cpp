#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
	string str;
	while (true)
	{
		regex e("([A-Z][a-z]+)(\\s)+([A-Z][a-z]+)((\\s)*([A-Z][a-z]+))?"); //Nome sobrenome
		//regex e("[a-z]+@[a-z]+\.(com.br|br)");//email
		//regex e("(?=.*[A-Z])(?=.*[0-9])([A-z0-9]){8}");//senha de 8 digitos
		//regex e("[0-9][0-9][0-9].[0-9][0-9][0-9].[0-9][0-9][0-9]-[0-9][0-9]");//cpf
		//regex e("[[:digit:]]{2}\\s9[[:digit:]]{8}");//Telefone
		//regex e("(([0-9][0-9]/[0-9][0-9]/[0-9][0-9][0-9][0-9])\\s([0-2][0-9]:[0-5][0-9]:[0-5][0-9]))");// data e hora
		//regex e("[+—]?([0-9]|.[0-9])+");// numeros reais
		//regex e("(HM|MH)(mm+h*|hh?m?)*");//letra a
		//regex e("(HM|MH)h?m(h)?(m(h)?m(h)?)*");//letra b
		//regex e("(HM|MH)m(h|m)*h");//letra c
		//regex e("(HH|MM)(mh|hm)(m|h)(m|h)((mh|hm)|(m|h))*(mh|hm)");//letra d
		//regex e("(HH|MM)(h|m)*[^mm][^hh]");//letra e
		//regex e("(HH|MM)(h?m+|m*)*h?");//letra f
		//regex e("(HH|MM){1,3}(h|m)*mmm"); //letra g
		getline(cin, str);
		cout << str;
		bool match = regex_match(str, e);

		cout << "  " << (match ? "Aceita" : "Nao aceita") << endl << endl;
	}


}
