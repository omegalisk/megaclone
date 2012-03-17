//Christopher de la Iglesia

#include "mega.h"

#define ID 0

Player::Player(): Entity() {

}

Player::~Player() {
	Entity::~Entity();
}

void Player::tick(double time) {
	Entity::tick(time);
}

void Player::render(Screen* window) {
	Entity::render(window,ID);
}

int Player::getID() {
	return ID;
}
