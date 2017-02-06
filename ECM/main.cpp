#include "Entity.h"
#include "HealthComponent.h"
#include "PositionComponent.h"
#include "ControlComponent.h"
#include "ControlSystem.h"
#include "RenderSystem.h"
#include "AiSystem.h"

int main()
{
	Entity player; Entity alien; Entity dog; Entity cat;

	player.addComponent(&HealthComponent());
	player.addComponent(&PositionComponent());
	player.addComponent(&ControlComponent());
	player.name = "Player";

	alien.addComponent(&HealthComponent());
	alien.addComponent(&PositionComponent());
	alien.name = "Alien";

	dog.addComponent(&HealthComponent());
	dog.addComponent(&PositionComponent());
	dog.name = "Dog";

	cat.addComponent(&HealthComponent());
	cat.addComponent(&PositionComponent());
	cat.name = "Cat";

	ControlSystem cs;
	cs.addEntity(&player);

	RenderSystem rs;
	rs.addEntity(&player);
	rs.addEntity(&alien);
	rs.addEntity(&dog);
	rs.addEntity(&cat);

	AiSystem as;
	as.addEntity(&player);
	as.addEntity(&alien);
	as.addEntity(&dog);

	while (true)
	{
		cs.update();
		rs.update();
		as.update();

		system("PAUSE");
	}

	return 0;
}