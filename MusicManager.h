#pragma once
#include "stdafk.h"
#include "Music.h"

typedef list<Music>::iterator MIT;

class MusicManager
{
	list<Music> musicList;

public:
	MusicManager() {};
	//�뷡���� �Է°� �Բ� �����̸� ��� ����
	void Insert(Music info);
	//���� �̸��� ������ �� �̸��� ���� ���Ǹ� ��Ƴ��� �� ����Ʈ ��ȯ
	list<Music> Find(string singer);

	//�ӽ�
	void Display();
};

