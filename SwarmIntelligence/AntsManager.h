#pragma once
#include "Ant.h"
#include <vector>
#include <qobject.h>

class Maze;
class AppSettings;

class AntsManager : public QObject
{
   Q_OBJECT;

public:
   AntsManager(const AppSettings* appSettings);

   void createAnt(int id, int x = 0, int y = 0);

   void initialize(Maze* maze);
   void step();

   const std::vector<Ant>& getAnts() const;

signals:
   void antsFinishedMaze();
private:
   std::vector<Ant> ants;
   Maze* maze = nullptr;
   const AppSettings* appSettings = nullptr;
};

