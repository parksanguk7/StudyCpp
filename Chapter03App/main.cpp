#include <stdio.h>
#include <string.h>
class Human {
private:
	char name[12];
	int age;

public:
	//������
	Human(const char* aname, int aage) {
		strcpy(this->name, name);
		this->age = age;
	}
	void intro() {
		printf("�̸�=%s, ����=%d\n", this->name, this->age);
	}
};

int main() {
	Human h("�ڻ��", 30);
	h.intro();
	return 0;
}