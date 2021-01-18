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
	};
	Platform(const string& p_platformName, const string& p_manufacturer)
	{
		setPlatformName(p_platformName);
		setManufacturer(p_manufacturer);

	}
	void setPlatformName(const string& p_platformName)
	{
		m_platformName = p_platformName;
	}
	string getPlatformName()
	{
		return m_platformName;
	}
	void setManufacturer(const string& p_manufacturer)
	{
		 m_manufacturer = p_manufacturer;
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
	//array of achievments

public:
	Game()
	{
	}
	Game(const string& p_gameName, const string& p_gamePublisher, const string& p_gameDeveloper)
	{
		setGameName(p_gameName);
		setGamePublisher(p_gamePublisher);
		setGameDeveloper(p_gameDeveloper);

	}
	void setGameName(const string& p_gameName)
	{
		m_gameName = p_gameName;
	}
	string getGameName()
	{
		return m_gameName;
	}
	void setGamePublisher(const string& p_gamePublisher)
	{
		m_gamePublisher = p_gamePublisher;
	}
	string getGamePublisher()
	{
		return m_gamePublisher;
	}
	void setGameDeveloper(const string& p_gameDeveloper)
	{
		m_gameDeveloper = p_gameDeveloper;
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
		   m_achieveDescription;
	int m_achieveScore;

public:
	Achievement()
	{
	}
	Achievement(const string& p_achieveTitle, const string& p_achieveDescription, const int& p_achieveScore)
	{
		setAchieveTitle(p_achieveTitle);
		setAchieveDescription(p_achieveDescription);
		setAchieveScore(p_achieveScore);
	}
	void setAchieveTitle(const string& p_achieveTitle)
	{
		m_achieveTitle = p_achieveTitle;
	}
	string getAchieveTitle()
	{
		return m_achieveTitle;
	}	
	void setAchieveDescription(const string& p_achieveDescription)
	{
		m_achieveDescription = p_achieveDescription;
	}
	string getAchieveDescription()
	{
		return m_achieveDescription;
	}	
	void setAchieveScore(const int& p_achieveScore)
	{
		m_achieveScore = p_achieveScore;
	}
	int getAchieveScore()
	{
		return m_achieveScore;
	}
};