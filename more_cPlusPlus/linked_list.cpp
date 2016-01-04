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

void einfuegen( DerKnoten ** );
void loeschenalle ( DerKnoten ** );
void suchen ( DerKnoten * , const int ) ;
void anzeigen ( DerKnoten * ) ;

int main ()
{
   DerKnoten * AnfaengerZeiger = NULL ;

   int EndenVariable = 0 ;
   while ( EndenVariable != -1 )
   {
   std::cout<<"Was wollen Sie tun ?1-Einfuegen |2-loeschenalle | 3-Suchen | 4-Anzeigen"<<std::endl;
   int Wahl ;
   std::cin>>Wahl ; 
   
   if ( Wahl == 1 )
   {
       einfuegen ( &AnfaengerZeiger ) ;
       anzeigen ( AnfaengerZeiger ) ;
   }
   else if ( Wahl == 4 )
   {
       anzeigen ( AnfaengerZeiger ) ;
   }
   else if ( Wahl == 2 )
   {
       loeschenalle ( &AnfaengerZeiger ) ;
       anzeigen ( AnfaengerZeiger ) ;
   }
   else if ( Wahl == 3 )
   {
      int value = 0 ;
      std::cout<<"Welche Wert mochtest du suchen ?"<<std::endl ;
      std::cin>>value ;
      suchen ( AnfaengerZeiger , value ) ;
   }
   
   std::cout<<" Enter value of EndVariable = ? "<<std::endl ;
   std::cin>>EndenVariable ;    
   }
}

void einfuegen( DerKnoten ** AnfaengerZeiger )
{
   int Zahl = 0 ;
   std::cin>>Zahl;

   DerKnoten * DerneueZeiger = new DerKnoten ;
   DerneueZeiger->Wert = Zahl ;
   if ( *AnfaengerZeiger == NULL )
   {
      DerneueZeiger->Zeiger = NULL ;   
      (*AnfaengerZeiger) = DerneueZeiger ;    
   }
   else
   { 
      DerneueZeiger->Zeiger = (*AnfaengerZeiger) ;
      (*AnfaengerZeiger) = DerneueZeiger ; 
   }
}

void loeschenalle( DerKnoten ** AnfaengerZeiger)
{
   DerKnoten * TemporaryZeiger = * AnfaengerZeiger ;
   while ( *AnfaengerZeiger != NULL )
   {
      TemporaryZeiger = ((*AnfaengerZeiger)->Zeiger) ;
      delete (*AnfaengerZeiger) ;
      *AnfaengerZeiger = TemporaryZeiger ;
   }
}
void suchen( DerKnoten * AnfaengerZeiger , const int value )
{
   int index = 0 ;
   while ( AnfaengerZeiger != NULL )
   {
       if ( AnfaengerZeiger->Wert == value )
       {
          std::cout<<"Value of "<<AnfaengerZeiger->Wert<<" found at index " <<index<< std::endl ;
          break ;
       }
       else 
       {
          index++;
          AnfaengerZeiger = AnfaengerZeiger->Zeiger ;
       }
   }
}
void anzeigen ( DerKnoten * DerKnotenZeiger )
{
   if( DerKnotenZeiger == NULL )
   {
      std::cout << " Sorry , printing not possible " << std::endl;
   }
   else
   {  
      int counter = 0 ;
      while ( DerKnotenZeiger != NULL )
      {
         std::cout<<"Value of element number "<<counter++<<" = "<<DerKnotenZeiger->Wert<<std::endl ;
         DerKnotenZeiger = DerKnotenZeiger->Zeiger ;
      }
   }
}
