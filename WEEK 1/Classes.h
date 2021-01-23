#pragma once
#include <iostream>
#include <string>
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
};

class Achievement : public Game
{
private:
	string m_achieveTitle,
		m_achieveDescription,
		m_achieveScore;
	int m_achieveNum;

public:
	Achievement()
	{
	}
	Achievement(string achieveTitle, string achieveDescription, string achieveScore)
	{
		setAchieve(achieveTitle, achieveDescription, achieveScore);
	}
	~Achievement()
	{}

	void setAchieve(string achieveTitle, string achieveDescription, string achieveScore)
	{
		m_achieveTitle = achieveTitle;
		m_achieveDescription = achieveDescription;
		m_achieveScore = achieveScore;
	}
	string getAchieveTitle()
	{
		return m_achieveTitle;
	}	
	string getAchieveDescription()
	{
		return m_achieveDescription;
	}	
	string getAchieveScore()
	{
		return m_achieveScore;
	}
};