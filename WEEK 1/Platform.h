#pragma once
#include <iostream>
using namespace std;

class Platform
{
private: 
	string m_platformName,
		   m_manufacturer;
	//array of games

public:
	Platform()
	{
		setPlatformName();
		setManufacturer();

	}
	void setPlatformName()
	{

	}
	string getPlatformName()
	{

	}
	void setManufacturer()
	{
	
	}
	string getManufacturer()
	{

	}
};

class Game : public Platform
{
private: 
	string m_gameName,
		   m_gamePublisher,
	       m_gameDeveloper;
	//array of achievments

public:
	Game()
	{
		setGameName();
		setGamePublisher();
		setGameDeveloper();

	}
	void setGameName()
	{

	}
	string getGameName()
	{

	}
	void setGamePublisher()
	{

	}
	string getGamePublisher()
	{

	}
	void setGameDeveloper()
	{

	}
	string getGameDeveloper()
	{
	
	}
};

class Achievement : public Game
{
private:
	string m_achieveTitle,
		   m_achieveDescription;
	int    m_achieveScore;

public:
	void setAchieveTitle()
	{

	}
	string getAchieveTitle()
	{

	}	
	void setAchieveDescription()
	{

	}
	string getAchieveDescription()
	{

	}	
	void setAchieveScore()
	{

	}
	int getAchieveScore()
	{

	}
};