//[번외] 실습.게임 캐릭터 생성하고 develop 시키는 프로그램
// (1) Character 라는 클래스 작성
// (2) Character 클래스는 캐릭터 이름, level, item 수를 속성으로 가지고 있어야 함.
// (3) 사용자에게 콘솔로 캐릭터 이름 입력받고, 캐릭터 생성하기. (이름은 입력받은 값으로, level, item 수는 0으로 초기화) = > 생성자 사용
// (4) 사용자에게 게임 캐릭터 어떻게 조작할지 입력하게 하기. (0: 종료. 0을 입력할 때까지 계속 물어보고 입력한 번호에 해당하는 작업을 계속 하면 됨.)
// 1을 입력하면, 이름 변경하도록
// 2를 입력하면, level up(level 이 1씩 올라가게)
// 3을 입력하면, item 줍줍(item 갯수가 1씩 증가)
// 4를 입력하면, item 사용(item 갯수가 1씩 감소)
// 0를 입력하면, 게임 종료.
// (5) 위 기능은 모두 Character 의 메소드로 만들어져 있어야 함. ㅡㅏㅏㅏ


#include <iostream>

using namespace std;

class Character {
	string name;
	int level;
	int items;
public:
	Character(string name) {
		this->name = name;
		level = 0;
		items = 0;
	}

	string get_name() {
		return name;
	}

	int get_level() {
		return level;
	}

	int get_items() {
		return items;
	}

	void set_name(string name) {
		this->name = name;	//클래스의 이름에 매개변수의 이름을 담겠다
	}

	void set_level1up() {
		this->level = level+1;
	}
	
	void set_items1up() {
		this->items = items+1;	
	}

	void set_items1down() {
		this->items = items - 1;
	}

};

int main() {
	//변수
	string name;

	int action = 99;	//초기값 설정. 0일때 종료라서 전혀 상관없는 값을 넣음
	string action_s;

	//캐릭터 생성
	cout << "캐릭터를 생성합니다.\n이름을 입력하세요 : ";
	cin >> name;

	//캐릭터 생성자
	Character character(name);

	//게임시작, 반복
	while (action != 0)
	{
		cout << "\n용사 " << character.get_name() << " / "
			 << "레벨 : " << character.get_level() << " / "
		     << "아이템 갯수 : " << character.get_items() << endl;
		cout << "행동을 선택하세요.\n( 1 : 이름변경 / 2 : 레벨 업 / 3 : 아이템 줍기 / 4 : 아이템 사용 / 0 : exit ) : ";
		cin >> action;

		switch (action) {
		case 1:
			cout << "\n이름을 변경합니다. : ";
			cin >> action_s;	// 1을 입력하면, 이름 변경하도록
			character.set_name(action_s);
			cout << "\n이름을 성공적으로 변경했습니다.\n";
			break;
		case 2:
			cout << "\n앗! 치트 사용! 레벨이 올라갑니다!\n";	// 2를 입력하면, level up(level 이 1씩 올라가게)
			character.set_level1up();
			break;
		case 3:
			cout << "\n헉, 아이템을 발견합니다. 줍줍..\n";	// 3을 입력하면, item 줍줍(item 갯수가 1씩 증가)
			character.set_items1up();
			break;
		case 4:		// 4를 입력하면, item 사용(item 갯수가 1씩 감소)
			if (character.get_items() <= 0) {
				cout << "\n오잉, 사용할 아이템이 없습니다!\n";
			}
			else {
				cout << "\n아이템을 사용합니다 : \n";
				character.set_items1down();
			}
			break;
		case 0:
			cout << "\n\n\n\n\n\n게임을 종료합니다. 잘가요~ ";	// 0를 입력하면, 게임 종료.
			return 0;
			break;
		default:
			cout << "\n잘못 입력하셨습니다. : \n";
			break;
		}
	}
}