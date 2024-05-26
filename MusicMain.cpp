#include "stdafk.h"
#include "MusicManager.h"

int main() {
	MusicManager manager;

	manager.Insert(Music("Artist1", "Title1"));
	manager.Insert(Music("Artist1", "Title2"));
	manager.Insert(Music("Artist2", "Title3"));
	manager.Insert(Music("Artist1", "Title4"));
	manager.Insert(Music("Artist2", "Title1"));
	manager.Insert(Music("Artist1", "Title5"));
	manager.Insert(Music("Artist2", "Title9"));

	manager.Display();
	cout << endl;

	for (Music m : manager.Find("Artist2")) {
		cout << m.getSinger() << "\t" << m.getTitle() << endl;
	}
}