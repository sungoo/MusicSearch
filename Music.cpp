#include "Music.h"

Music::Music()
{
	singer = "no data";
	title = "no data";
}

Music::Music(string singer, string title)
{
	this->singer = singer;
	this->title = title;
}

void Music::setSinger(string singer)
{
	this->singer = singer;
}

void Music::setTitle(string title)
{
	this->title = title;
}

string Music::getSinger()
{
	return singer;
}

string Music::getTitle()
{
	return title;
}
