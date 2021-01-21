#pragma once
#include <iostream>
using namespace std;

class Platform
{
private: 
	string m_platformName,
		   m_manufacturer;
	Game games[5];

public:
	Platform()
	{	
	};
	Platform(const string& m_pPlatformName, const string& m_pManufacturer)
	{
		setPlatformName(m_pPlatformName);
		setManufacturer(m_pManufacturer);

	}
	void setPlatformName(const string& m_pPlatformName)
	{
		m_platformName = m_pPlatformName;
	}
	string getPlatformName()
	{
		return m_platformName;
	}
	void setManufacturer(const string& m_pManufacturer)
	{
		 m_manufacturer = m_pManufacturer;
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
	Achievement achievements[5];

public:
	Game()
	{
	}
	Game(const string& m_pGameName, const string& m_pGamePublisher, const string& m_pGameDeveloper)
	{
		setGameName(m_pGameName);
		setGamePublisher(m_pGamePublisher);
		setGameDeveloper(m_pGameDeveloper);

	}
	void setGameName(const string& m_pGameName)
	{
		m_gameName = m_pGameName;
	}
	string getGameName()
	{
		return m_gameName;
	}
	void setGamePublisher(const string&m_pGamePublisher)
	{
		m_gamePublisher = m_pGamePublisher;
	}
	string getGamePublisher()
	{
		return m_gamePublisher;
	}
	void setGameDeveloper(const string& m_pGameDeveloper)
	{
		m_gameDeveloper = m_pGameDeveloper;
	}
	string getGameDeveloper()
	{
		return m_gameDeveloper;
	}
	void displayInfo() const
	{
		cout << "You have chosen the " << m_gameName << " from " << m_gamePublisher << " and " << m_gameDeveloper << endl;
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
	Achievement(const string& m_pAchieveTitle, const string& m_pAchieveDescription, const int& m_pAchieveScore)
	{
		setAchieveTitle(m_pAchieveTitle);
		setAchieveDescription(m_pAchieveDescription);
		setAchieveScore(m_pAchieveScore);
	}
	void setAchieveTitle(const string& m_pAchieveTitle)
	{
		m_achieveTitle = m_pAchieveTitle;
	}
	string getAchieveTitle()
	{
		return m_achieveTitle;
	}	
	void setAchieveDescription(const string& m_pAchieveDescription)
	{
		m_achieveDescription = m_pAchieveDescription;
	}
	string getAchieveDescription()
	{
		return m_achieveDescription;
	}	
	void setAchieveScore(const int& m_pAchieveScore)
	{
		m_achieveScore = m_pAchieveScore;
	}
	int getAchieveScore()
	{
		return m_achieveScore;
	}
};