#include "Header.h"

Name_value::Name_value()
{
	

}
Name_value::Name_value(string name, int score)
{
	newName = name;
	newScore = score;

}

Name_value::~Name_value()
{


}

string Name_value::getName()
{
	return newName;
}

int Name_value::getScore()
{
	return newScore;
}

void Name_value::setName(string name)
{
	newName = name;
}
void Name_value::setScore(int score)
{
	newScore = score;
}