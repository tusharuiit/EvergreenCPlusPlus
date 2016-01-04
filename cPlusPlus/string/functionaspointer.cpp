#include<iostream>

using namespace std;

typedef void (*fptype)(const string &) ;

void listentomusic(fptype fp, string lyrics)
{
	fp(lyrics);
}

//void listentomusic(void (*fp)(const string &), string lyrics)
//{
//	fp(lyrics);
//}

void hardmusic(const string & song)
{
	cout << "Eminem says " << song << endl ;	
}

void softmusic(const string & song)
{
	cout << "Celine says " << song << endl ;	
}

int main()
{
//	void (*fp)(const string &) = softmusic ;
	fptype fp = softmusic ;
	listentomusic(fp, "I love you");

	fp = hardmusic ;
	listentomusic(fp, "I hate you");
}
