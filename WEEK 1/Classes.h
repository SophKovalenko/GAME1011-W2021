#pragma once
#include <iostream>
using namespace std;

class Platform
{
private: 
	string m_platformName,
		   m_manufacturer;
public:
	Platform()
	{	
	}
	Platform(const string platformName, const string manufacturer)
	{
		setPlatform(platformName, manufacturer);

	}

	~Platform()
	{}

	void setPlatform(const string platformName, const string manufacturer)
	{
		m_platformName = platformName;
		m_manufacturer = manufacturer;
	}
	string getPlatformName()
	{
		return m_platformName;
	}
	string getManufacturer()
	{
		return m_manufacturer;
	}
	void displayInfo() const
	{
		cout << "You have chosen the " << m_platformName << " from " << m_manufacturer << endl;

	}
};

class Game : public Platform
{
private: 
	string m_gameName,
		   m_gamePublisher,
	       m_gameDeveloper;
public:
	Game()
	{
	}

	Game(const string gameName, const string gamePublisher, const string gameDeveloper)
	{
		setGame(gameName, gamePublisher, gameDeveloper);

	}

	~Game()
	{}

	void setGame(const string gameName, const string gamePublisher, const string gameDeveloper)
	{
		m_gameName = gameName;
		m_gamePublisher = gamePublisher;
		m_gameDeveloper = gameDeveloper;
	}
	string getGameName()
	{
		return m_gameName;
	}

	string getGamePublisher()
	{
		return m_gamePublisher;
	}

	string getGameDeveloper()
	{
		return m_gameDeveloper;
	}
	void displayInfo() 
	{
		cout << "You have chosen the " << m_gameName << " from " << m_gamePublisher << " by " << m_gameDeveloper << endl;
	}
};

class Achievement : public Game
{
private:
	string m_achieveTitle,
		   m_achieveDescription;
	int m_achieveScore;

public:
	Achievement()
	{
	}
	Achievement(string achieveTitle, string achieveDescription, int achieveScore)
	{
		setAchieve(achieveTitle, achieveDescription, achieveScore);
	}
	~Achievement()
	{}

	void setAchieve(string achieveTitle, string achieveDescription, int achieveScore)
	{
		m_achieveTitle = achieveTitle;
		m_achieveDescription = achieveDescription;
		m_achieveScore = achieveScore;
	}
	string getAchieveTitle()
	{
		cout << "Please enter a title for your achievement:" << endl;
		cin >> m_achieveTitle; // change this to a getline
		return m_achieveTitle;
	}	
	string getAchieveDescription()
	{
		cout << "Please enter a description for your achievement:" << endl;
		cin >> m_achieveDescription; // change this to a getline
		return m_achieveDescription;
	}	
	int getAchieveScore()
	{
		cout << "Please enter a score for your achievement:" << endl;
		cin >> m_achieveScore; // change this to a getline
		return m_achieveScore;
	}
};