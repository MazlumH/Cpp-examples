#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ifstream textDatei("datei_schreiben_beliebig.txt");

	if(textDatei)
	{
      int anzahl;
      double preis;
      string bezeichnung;
      
      cout << "Position: " << textDatei.tellg() << endl;
      textDatei.seekg(70);
      cout << "Position: " << textDatei.tellg() << endl;

      textDatei >> anzahl;
	  textDatei >> preis;
      getline(textDatei, bezeichnung);
      while(bezeichnung[0] == ' ')
      	bezeichnung = bezeichnung.substr(1);
      cout << anzahl << " " << preis << " " << bezeichnung << endl;

      textDatei.seekg(35);
      cout << "Position: " << textDatei.tellg() << endl;

      textDatei >> anzahl;
	  textDatei >> preis;
      getline(textDatei, bezeichnung);
      while(bezeichnung[0] == ' ')
      	bezeichnung = bezeichnung.substr(1);
      cout << anzahl << " " << preis << " " << bezeichnung << endl;
	}
	else                   
		cout << "Dateifehler" << endl;
}

