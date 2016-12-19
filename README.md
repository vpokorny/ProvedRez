## UVOD

#### Prave pred sebou mate program, ktery provede rez skrz sit, ktera je ve vstupnim adresari "vstupni_data" ve formatu ".plt", rez je ulozen tak, aby bylo mozne jej vizualizovat programem Gnuplot.

## Postup kompilace:
- Prejdete do slozky "src" prikazem : cd src
- Zde je vytvoreny Makefile, ktery slouzi ke zkompilovani programu ProvedRez. Kompilaci provedem prikazem : make
- Nyni se v adresari "bin" vytvoril spustitelny soubor "ProvedRez". Jeho volani ma specifickou strukturu pro spravnou funkcnost programu je potreba ji dodrzet!!!

## Volani programu:
- Program ocekava vstup z prikazove radky takto:
*	./ProvedRez "Cesta/Nazev PLT souboru" "vertikalni rez X, nebo Horizontalni rez Y"="Hodnota X nebo Y" "Cesta/Nazev Vystupniho Souboru"*

- Priklad: Mam soubor solution4000.plt ve stejne slozce jako je spustitelny soubor ProvedRez a chci provest vertikalni rez pro x=0.01. Vystup chci aby se jmenoval solution4000-X-0.01.dat. Toto provedu zadanim prikazu:
*	./ProvedRez solution4000.plt X=0.01 solution4000-X-0.01.dat*

- Pokud se chcete takovemu zadavani vyhnout, pak je v adresari "skripty" pripraven skript "ProvedSekvenciRezu.sh", kterym je mozne provest vicero rezu automatizovane s tim, ze je potreba zachovat adresarovou strukturu priblizne takto

- ProvedRez
	- src (zdrojove kody)
	- vstupni_data (vase vstupni .plt soubory)
	- bin (adresar s binarkami)
	- skripty (zde je ulozen skript Prove)

#### zbytek bude dotvoren skriptem. Skript je treba menit pouze v rozsahu For cyklu a nazvu vstupnich dat a pozadovanych rezu. Snaha byla udelat to tak srozumitelne, ze nebude prakticky potreba k tomu nic dodavat.

## Vysledky:
- Vysledky, pokud pouzijete skript, jsou ulozeny v adresari "vystup_gnuplot". Jednotlive vysledky lze vizualizovat programem Gnuplot.

## Zpetna vazba:
#### Pokud se v programu vyskytne chyba, nebo mate napad na zlepseni, pak je mozne me kontaktovat:
- jmeno: Vaclav Pokorny
- email: pokorny.vena@gmail.com

#### Necht je Vam program uzitecny.