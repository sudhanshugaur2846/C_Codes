#include <stdio.h>
struct student {
	char *name;
};
struct student s[2];
void main() {
	s[0].name = "Code";
	s[1] = s[0];//it means s[1].name = s[0].name;
	printf("%s %s ", s[0].name, s[1].name);
	s[1].name = "Tantra";
	printf("%s %s", s[0].name, s[1].name);
}