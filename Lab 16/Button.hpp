#ifndef _BUTTON_HPP
#define _BUTTON_HPP

#include <string>
#include <iostream>
using namespace std;

class Button
{
private:
	string m_text;

public:
	void Draw() const;
	void SetText(string text);
};


#endif
