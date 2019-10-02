#pragma once

#include "IStateClass.h"
#include "Buttons.h"

enum MainMenuState
{
	onMenu = 1
};

class MainMenuClass : public IStateClass
{
public:
	MainMenuClass();
	MainMenuClass(sf::Vector2f _position, sf::Vector2f _size, std::string _texturePath, std::string _controlsPath);
	~MainMenuClass();

	void updateRenderButtons(sf::Event _event, sf::RenderWindow& _window);
	void renderControls(sf::RenderWindow& _window);
	bool getMenuOpen();

	ButtonClass PlayButton;
	ButtonClass ControlsButton;
	ButtonClass QuitButton;
	ButtonClass BackButton;

private:
	sf::RectangleShape menuBackground;
	sf::Texture texture;

	sf::RectangleShape controlsBackground;
	sf::Texture controlsTexture;

	MainMenuState menuState;

	bool menuOpen = true;
	bool controlsOpen = false;

	void update(sf::RenderWindow &window);
	void draw(sf::RenderWindow &window);
	void handleEvent(sf::RenderWindow &window);
};