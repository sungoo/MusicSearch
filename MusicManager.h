#pragma once
#include "../../psulib/stdafx.h"
#include "Music.h"

typedef list<Music>::iterator MIT;

class MusicManager
{
	list<Music> musicList;

public:
	MusicManager() {};
	//노래정보 입력과 함께 가수이름 대로 정렬
	void Insert(Music info);
	//가수 이름을 넣으면 그 이름이 들은 음악만 모아놓은 새 리스트 반환
	list<Music> Find(string singer);

	//임시
	void Display();
};

