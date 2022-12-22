#include <iostream>
#include "items/users/Client.h"
#include "items/places/Region.h"
#include "project/Project.h"


int main() {
    auto c = new Users::Client("Rector");
    auto project = new Project();
    project->addClient(*c);

    auto r1 = new UsersData::Region("UniDubna1", c->id());
    r1->setArea(100);
    auto r2 = new UsersData::Region("UniDubna2", c->id());
    r2->setArea(50);

    // TODO:
    // Взаимодействие через действие Irrigation
    // Написать контейнер в проекте для регионов
    // Необходимо расширить классы/создать которые будут задавать время(частоту полива)
    // Идея в Time/Weather была следующая:
    // Рандомить от времени погоду + не поливать в дождь, но это уже в Action-е Irrigation учитывать просто.
    // Сохранение

    return 0;
}
