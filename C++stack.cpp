

#include <iostream>

using namespace std;

class ALLScene{
	public:
		ALLScene(){
			cout << "constructor for the All Input Scene called" << endl; 
		}
};
class UserInputScene{
	public:
		UserInputScene(){
			cout << "constructor for the UserInput Scene called" << endl; 
		}
};
class CUIScene{
	public:
		CUIScene(){
			cout << "constructor for the CUI Scene called" << endl; 
		}
};
class GUIScene{
	public:
		GUIScene(){
			cout << "constructor for the GUI Scene called" << endl; 
		}
};
class GameScene{
	GUIScene guiScene; 
	CUIScene cuiScene; 
	UserInputScene userInputScene; 
	ALLScene allScene; 
	public: 
	GameScene(){
		cout << "\n" ; 
		cout << "Constructor for the Game Scene Called" << endl; 
		cout << "\n" ; 
	}
};
class TitleScene{
	public:
		TitleScene(){
			cout << "Constructor For the Title Scene Called" << endl; 
		}
}; 
class StartScene{
	public:
		StartScene(){
			cout << "Constructor For the Start Scene Called" << endl; 
		}
};
class EndScene{
	public: 
		EndScene(){
			cout << "Constructor FOr the End Scene Called" << endl; 
		}
};
class Scene{
	GameScene gameScene; 
	TitleScene titleScene; 
	StartScene startScene; 
	EndScene endScene; 
	public: 
	Scene(){
		cout << "\n" ; 
		cout << "Constructor For the Scene Called" << endl; 
		cout << "\n" ; 
	}
};
int main(){
 		Scene scene; 
}
