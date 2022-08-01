#include <iostream>
using namespace std;
class WinFactory{
public:
	virtual ~WinFactory(){}
	virtual string Draw() const=0;
	
};
class WinCheckBox : public WinFactory{
	string Draw() const override{
		return "CheckBox Windows";
	}
};
class WinButton : public WinFactory{
public:
	string Draw() const override{
		return "Button Windows";
	}
};
class MacFactory{
public:
	virtual ~MacFactory(){};
	virtual string Draw() const=0;
	virtual string draw(const WinFactory& colaborador) const=0;
};
class MacButton : public MacFactory{
public:
	string Draw() const override{
		return "Dibujando Button Mac";
	}
	string draw(const WinFactory& colaborador) const override{
		const string result=colaborador.Draw();
		return "Dibujando "+result;
	}
};
class MacCheckBox : public MacFactory{
public:	
	string Draw() const override{
		return "Dibujando CheckBox Mac";
	}
	string draw(const WinFactory& colaborador) const override{
		const string result = colaborador.Draw();
		return "Dibujando "+result;
	}
};
class GUIFactory{
public:
	virtual WinFactory *CrearControlW() const=0;
	virtual MacFactory *CrearControlM() const=0;
};
class Button : public GUIFactory{
	WinFactory *CrearControlW() const override{
		return new WinButton();
	}
	MacFactory *CrearControlM() const override{
		return new MacButton();
	}
};
class CheckBox : public GUIFactory{
	WinFactory *CrearControlW() const override{
		return new WinCheckBox();
	}
	MacFactory *CrearControlM() const override{
		return new MacCheckBox();
	}
};
void Aplication(const GUIFactory& f, int os){
	const WinFactory* windows = f.CrearControlW();
	const MacFactory* mac = f.CrearControlM();
	if(os == 1){
		cout<<endl;
		cout<<mac->draw(*windows)<<endl;
	}else if(os == 2){
		cout<<endl;
		cout<<mac->Draw()<<endl;
	}
	delete windows;
	delete mac;
}
int main() {
	cout<<"Cliente: Windows ";
	Button* f1 = new Button();
	Aplication(*f1, 1);
	delete f1;
	cout<<"\nCliente: Mac ";
	Button* f2 = new Button();
	Aplication(*f2, 2);
	delete f2;
	return 0;
}