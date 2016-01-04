#include<iostream>
// So , sehr geehrte Frauen und Maenner , wir mussen jetzt die verketteten Liste implementieren.
// In die verketteten Liste , wir haben vier Funktionen . 
// erste - Inserten/einfuegen
// zweitte - deleten/loeschenalle
// Dritte - suchen
// Vierte - anzeigen

// So, was ist die verketteten Liste ? Wir haben zuerst einen Zeiger(pointer) auf eine Struktur.
// Der Zeiger hat die Addresse der Struktur. Urspruenglich, wir haben nur einen Zeiger . Sein Typ ist struct.
// Die Struktur hat zwei Felder. Ein Feld enthaltet einen Wert. Die zweitte Feld enthaltet einen Zeiger auf 
// die naechste Struktur.
// node = Der Knoten
// Jetzt, wir muessen die Funktionen implementieren. Erste Einfuengen.
// Im Allgemeinen, wir haben einen verketteten Liste bereits/schon. Wir passieren the Wert 
// als einen Parameter auf die Funktion als einfuengen bezeichnet(denoted , named).
// Der zweitte Parameter ist der Anfaenger Zeiger.
// In der Funktion, zuerst wir pruefen ob das Zeiger Feld/Gebiet of dieser passiert Zeiger 
// ist der Nichtig/Null Zeiger. Wann die Antwort positiv ist, dann schaffe/erstelle(create) ich eine
// neue Struktur. Wie ? Nein , gibt es anderer Ansatz verfolgt(followed). 
// Wir einfach am Anfang addieren/hinzufuegen the passiert Wert. Natuerlich, wir dass tun nach der Shaffung
// einer Struktur.

struct DerKnoten
{
   int Wert ;
   DerKnoten * Zeiger ;
};

int main ()
{
   DerKnoten * AnfaengerZeiger = NULL ;
   std::cout<<"AnfaengerZeiger = "<<AnfaengerZeiger<<std::endl;
   //std::cout<<"AnfaengerZeiger->Zeiger"<<AnfaengerZeiger->Zeiger<<std::endl;
   //std::cout<<"AnfaengerZeiger->Wert"<<AnfaengerZeiger->Wert<<std::endl;
   DerKnoten * AnfaengerZeiger1 ;
   std::cout<<"AnfaengerZeiger1 = "<<AnfaengerZeiger1<<std::endl;
   std::cout<<"AnfaengerZeiger1->Zeiger = "<<AnfaengerZeiger1->Zeiger<<std::endl;   
   std::cout<<"AnfaengerZeiger1->Wert = "<<AnfaengerZeiger1->Wert<<std::endl;
   std::cout<<"AnfaengerZeiger1->Zeiger->Wert = "<<AnfaengerZeiger1->Zeiger->Wert<<std::endl;
}
