#include <iostream>
#include <string>
using namespace std;

struct hallgato {
	string nev;
	int jegy;
	int szulEv;
};

int main()
{
	//1.feladat
	/*char b;
	string nev1, nev2;

	cout << "Adja meg a nevet ekezetek nelkul: ";
	getline(cin, nev1);
	nev2 = nev1;

	cout << "Az on nevenek masolata " << nev2 << endl;
	cout << "A neve hossza a szokozzel egyutt: " << nev1.length() << endl;
	cout << "Szeretne torolni a masolatot? igen i, nem = n: ";
	cin >> b;
	if (b == 'i') nev2.clear();
	if (nev1 == nev2) cout << "A ket karakter lanc egyforma!" << endl;
	else cout << "A ket karakter lanc nem egyforma!" << endl;*/


	//2.feladat
	/*string kozmondas, eredeti;

	cout << "Kerem adja meg a kedvenc kozmondasat!" << endl;
	getline(cin, kozmondas);
	eredeti = kozmondas;
	cout << "A kozmondasanak a hossza szokozokkel egyutt: " << kozmondas.length() << " karakter";
	cout << "\nOn a " << kozmondas.append(" - kozmondast adta meg") << endl;

	cout << "A kozmondas utolso elotti karaktere: " << eredeti.substr(eredeti.length() - 2 , 1) << endl;*/

	//3.feladat
	hallgato hallg[15];
	int letszam, atlag = 0;

	do {
		cout << "Adja meg a csoport letszamot: ";
		cin >> letszam;
		cin.ignore();

	} while (letszam < 1 || letszam > 15);

	for (int i = 0; i < letszam; i++) {
		cout << "Adja meg a(z) " << i + 1 << ". tanulo nevet: ";
		getline(cin, hallg[i].nev);
		cout << "Adja meg a szuletesi evet: ";
		cin >> hallg[i].szulEv;

		do {
			cout << "Adja meg a jegyet: ";
			cin >> hallg[i].jegy;
			cin.ignore();
		} while (hallg[i].jegy < 1 || hallg[i].jegy > 5);

	}
	system("cls");
	for (int i = 0; i < letszam; i++)
	{
		atlag += hallg[i].jegy;
	}
	cout << "\nA csoport atlaga: " << (float)(atlag / letszam) << endl;

	//a legoregebb hallgato
	int max = hallg[0].szulEv;
	string nev;
	for (int i = 0; i < letszam; i++)
	{
		if (hallg[i].szulEv <  max)
			max = hallg[i].szulEv;
			nev = hallg[i].nev;

	}
	cout << "A legoregebb hallgato szuletesi eve: " << max << ", a neve: " << nev << endl;


	return 0;
}
