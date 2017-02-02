#include "Entity.h"
#include "HealthComponent.h"
#include "PositionComponent.h"
#include "ControlComponent.h"
#include "HealthSystem.h"
#include "PositionSystem.h"

int main()
{
	Entity player; Entity alien; Entity dog; Entity cat;

	player.addComponent(HealthComponent());
	player.addComponent(PositionComponent());
	player.addComponent(ControlComponent());

	alien.addComponent(HealthComponent());
	alien.addComponent(PositionComponent());

	dog.addComponent(HealthComponent());
	dog.addComponent(PositionComponent());

	cat.addComponent(HealthComponent());
	cat.addComponent(PositionComponent());

	HealthSystem hs;
	hs.addEntity(player);
	hs.addEntity(cat);
	hs.addEntity(dog);
	hs.addEntity(alien);

	PositionSystem ps;
	ps.addEntity(player);
	ps.addEntity(cat);
	ps.addEntity(dog);
	ps.addEntity(alien);

	while (true)
	{
		hs.update();
		ps.update();

		system("PAUSE");
	}

	return 0;
}