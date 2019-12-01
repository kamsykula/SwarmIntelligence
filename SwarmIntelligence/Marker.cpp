#include "Marker.h"

Marker::Marker(MarkerType type, const std::pair<int, int>& pos, const std::pair<int, int>& enterPos)
{
   this->pos = pos;
   this->enterPos = enterPos;
   this->type = type;
}

std::pair<int, int> Marker::getPos() const
{
   return this->pos;
}

std::pair<int, int> Marker::getEnterPos() const
{
   return this->enterPos;
}

int Marker::getX() const
{
   return this->pos.first;
}

int Marker::getY() const
{
   return this->pos.second;
}

QColor Marker::getColor() const
{
   QColor rV;
   switch(this->type)
   {
   case CLOSED_PATH: rV = Qt::red; break;
   case PATH_TO_EXIT: rV = Qt::blue;  break;
   case NOT_FULLY_DISCOVER_PATH: rV = Qt::yellow; break;
   default: ;
   }

   return rV;
}
