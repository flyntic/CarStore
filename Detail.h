#pragma once
#include <string>
#include <vector>
#include <list>
#include <iostream>
extern class Catalog;


class Detail
{
private:
	static int CountId;
	int idArticul;
	std::string name;
	Catalog::enumType type;
	int price;
	std::string manufactured;
	std::string country;
	bool original;
	
public:
   
	Detail(std::string Name, int Price, Catalog::enumType Type, std::string Manufactured = "noname", std::string Country = "no defined",bool Original=false) :
		original(Original)
		manufactured{ Manufactured },
		country{ Country },
		type{Type},
		price{Price},
		name{Name}
	{
		idArticul = ++CountId;
	}



};

class Catalog
{
private:	
typedef std::list<std::string> listSuitModels ;
    std::vector<int, listSuitModel> catListSuitModels; //Готовые наборы подходящих автомобилей
    
    void addNewList()
    {
    }

public:
	enum class enumCategory
	{

	};

	enum class enumType
	{

	};

private:
	std::vector <Catalog::enumType, std::string> = 0;

	std::vector <Catalog::enumCategory, std::string> = 0;

	std::vector < Catalog::enumCategory, enumType* >= 0;

private:
	std::vector <int, Detail*> Catalog;
public:
	Catalog(std::string jsonfile)
	{
	
	}
	void Add() {};
	void Remove() {};
	void Find() {};
	std::ostream& operator<<(std::ostream& out, Catalog& c)
	{
	
	}


}

static int Detail::CountId = 0;