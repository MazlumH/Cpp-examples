#include <cstdlib>
#include <iostream>
#include <ctime> //time(0)
#include <time.h>

using namespace std;

short UserAuswahl;
short PcAuswahl;
short Rounds;
short UserWins = 0;
short PcWins = 0;

int main()
{
 cout << "\t\tWillkommen in meinem kleinen Stein-Schere-Papier-Spiel!\n\n\n\n\n\n";
 system ("PAUSE");
 system ("CLS");
 cout << "\n\n\n\t\tGib Bitte die Rundenanzahl an: ";
 cin >> Rounds;
 cout << "\n\tOK nach " << Rounds << " Runde";
 	if (Rounds == 1)
 	{
 		cout << " ist das Spiel bereits zu Ende!\n\n\n\n\n\n";
 	}
 	else
 	{
 		cout << "n wird zusammen gerechnet wer gewonnen hat\n\n\n\n\n\n";
 	}
 
 system ("PAUSE");
 system ("CLS");
 
 for (int i=1; i<=Rounds; i++)
 {
 	cout << "\t\t\t\tDu bist in der "; // << i << ". Runde !";
 	if (i==Rounds)
 	{
 		cout << "letzten Runde!";
 	}
 	else
 	{
 		cout << i << ". Runde !";
 	}
 	
 cout << "\n\nW\x84 \bhle nun deinen Gegenstand:\n\n\t\t\t\t1. Stein" << "\tZwischenstand:" 
 << "\n\t\t\t\t2. Schere" << "\tPC: " << PcWins << " | DU: " << UserWins
 << "\n\t\t\t\t3. Papier"
 << "\n\n\n\t\t\t\t ";
 
 cin >> UserAuswahl;
 cout << "\n\n\n";
 srand( time (NULL) );
 PcAuswahl = (rand()%3)+1;
 cout << "\tDu hast " << UserAuswahl << " gew\x84 \bhlt" << "\t\tDer PC hat " << PcAuswahl << " gew\x84 \bhlt!\n\n\t\t\t"; 
 /////////////////////// Jetzt fängt die Vergleicherei an ^^ omg!!!!
 
 	if (UserAuswahl == 1 && PcAuswahl == 1)
 	{
 		cout << "Stein vs. Stein !\n\n\tUnentschieden! Sowohl der PC als auch du hast Stein gew\x84 \bhlt!";
 	}
 	else if (UserAuswahl == 1 && PcAuswahl == 2)
 	{
 		cout << "Stein vs. Schere !\n\n\tDie Klingen der Schere gehen an dem harten Stein kaputt! Du gewinnst!";
 		UserWins++;
 	}
 	else if (UserAuswahl == 1 && PcAuswahl == 3)
	{
		cout << "Stein vs. Papier !\n\n\tPapier umwickelt den Stein! PC gewinnt!";
 		PcWins++;
 	}
 	else if (UserAuswahl == 2 && PcAuswahl == 1)
 	{
 		
 		cout << "Schere vs. Stein !\n\n\tDie Klingen der Schere gehen an dem harten Stein kaputt! PC gewinnt!";
 		PcWins++;
 	}
 	else if (UserAuswahl == 2 && PcAuswahl == 2)
 	{
 		cout << "Schere vs. Schere !\n\n\tUnentschieden! Sowohl der PC als auch du hast Schere gew\x84 \bhlt!";
 	}
 	else if (UserAuswahl == 2 && PcAuswahl == 3)
 	{
 		cout << "Schere vs. Papier !\n\n\tGanz klar! Die Schere zerschneidet das Papier! Du gewinnst!";
 		UserWins++;
 	}
 	else if (UserAuswahl == 3 && PcAuswahl == 1)
 	{
 		cout << "Papier vs. Stein !\n\n\tPapier umwickelt den Stein! Du gewinnst!";
 		UserWins++;
 	}
 	else if (UserAuswahl == 3 && PcAuswahl == 2)
 	{
 		cout << "Papier vs. Schere !\n\n\tGanz klar! Die Schere zerschneidet das Papier! PC gewinnt!";
 		PcWins++;
 	}
 	else if (UserAuswahl == 3 && PcAuswahl == 3)
 	{
 		cout << "Papier vs. Papier !\n\n\tUnentschieden! Sowohl der PC als auch du hast Papier gew\x84 \bhlt!";
 	}
 		else
 		{
 			cout << "Wenn du das hier lie\xE1 \bt hast du wahrscheinlich weder eine Zahl gr\x94 \ber 3 eingegeben!";
 		} 
 	cout << "\n\n\n\n";
 	system ("PAUSE");
 	system ("CLS");
 	}
 		cout << "\t\tSoooooooooo jetzt kommt die Abrechnung ;-)";
 		cout << "\n\n\tDu hast ";
 		if (UserWins < 0.5*Rounds && UserWins != 0)
 		{
 			cout << UserWins << ", also weniger als die H\x84 \blfte der Spiele gewonnen.";
 		}
 		else if (UserWins == 0)
 		{
 			cout << "\b\b\b\b\b\b\b\b\t\tDu hast kein einziges Spiel gewonnen!";
 		}
 		else if (UserWins > 0.5*Rounds && UserWins != Rounds)
 		{
 			cout << UserWins << ", also mehr als die H\x84 \blfte der Spiele gewonnen.";
 		}
 		else if (UserWins == Rounds)
 		{
 			cout << "jedesmal gewonnen! WOW!";
 		}
 		else if (UserWins == Rounds*0.5)
 		{
 			cout << UserWins << ", also genau die H\x84 \blfte aller Spiele gewonnen.";
 		}
 			else
 			{
 				cout << "Wenn du das hier lie\xE1 \bt ist irgent etwas falsch gelaufen :D";
 			}
 		cout << "\n\n\t\t\t Endstand:\n\t\t\tPC: " << PcWins << " | DU: " << UserWins;
 		if (UserWins == PcWins)
 		{
 			cout << "\n\n Du hast dich gut geschlagen aber mehr als ein UNENTSCHIEDEN ist nicht drin!";
 		}
 		else if (UserWins < PcWins)
 		{
 			
 cout << "\n\n\t\tVEEEEEEEEEEEERRRLOOOOOOOOOOOOOOOORRRRRRRRRRRRRRREEEEEEEEN";
 cout << "\n\t :-):-):-):-):-):-):-):-):-):-)"
 << "\n\t :-):-) :-):-)"
 << "\n\t :-):-) :-):-)"
 << "\n\t :-):-) :-):-) :-):-) :-):-)"
 << "\n\t :-):-) :-) :-):-)"
 << "\n\t :-):-) :-):-):-) :-):-)"
 << "\n\t :-):-) :-):-)"
 << "\n\t :-):-) :-):-):-):-):-):-):-) :-):-)"
 << "\n\t :-):-) :-) :-) :-):-)"
 << "\n\t :-):-) :-):-)"
 << "\n\t :-):-):-):-):-):-):-):-):-)";
 }
 
 else if (UserWins > PcWins)
 {
 cout << "\n\n\t\t\tGEWONNEN! Super!";
 cout << "\n\t :-):-):-):-):-):-):-):-):-):-)"
 << "\n\t :-):-) :-):-)"
 << "\n\t :-):-) :-):-)"
 << "\n\t :-):-) :-):-) :-):-) :-):-)"
 << "\n\t :-):-) :-) :-):-)"
 << "\n\t :-):-) :-):-):-) :-):-)"
 << "\n\t :-):-) :-):-)"
 << "\n\t :-):-) :-) :-) :-):-)"
 << "\n\t :-):-) :-):-):-):-):-):-):-) :-):-)"
 << "\n\t :-):-) :-):-)"
 << "\n\t :-):-):-):-):-):-):-):-):-)";
 }
 
 system ("PAUSE");
 return 0;
}
