#pragma once
#include "stdafk.h"

class Music
{
	string singer;
	string title;
public:
	Music();
	Music(string singer, string title);

	void setSinger(string singer);
	void setTitle(string title);

	string getSinger();
	string getTitle();
};

