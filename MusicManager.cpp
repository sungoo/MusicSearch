#include "MusicManager.h"

void MusicManager::Insert(Music info)
{
	string singer = info.getSinger();

	MIT it = musicList.begin();
	bool found = false;
	while (it != musicList.end())
	{
		//이름 검색 후, 이름이 있는 자리 앞에 새 원소 추가.
		if ((*it).getSinger() == singer) {
			musicList.insert(it, info);
			found = true;
			break;
		}
		it++;
	}
	//아예 없었으면 맨 뒤에 넣기
	if (!found)
		musicList.push_back(info);
}

list<Music> MusicManager::Find(string singer)
{
	list<Music> musicBlock;
	for (MIT it = musicList.begin(); it != musicList.end(); ++it) {
		if ((*it).getSinger() == singer) {
			musicBlock.push_back(*it);
		}
	}

	return musicBlock;
}

void MusicManager::Display()
{
	for (Music m : musicList) {
		cout << m.getSinger() << "\t" << m.getTitle() << endl;
	}
}
