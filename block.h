#pragma once
/************************************************************************/
/* block class                                                                     */
/************************************************************************/
#include <QColor>
#include <QGraphicsObject>
#include <QGraphicsItemGroup>

static const QColor BlockColor[7] = {
  QColor(200, 0, 0, 100), QColor(255, 200, 0, 100), QColor(0, 0, 200, 100),
  QColor(0, 200, 0, 100), QColor(0, 200, 255, 100), QColor(200, 0, 255, 100),
  QColor(150, 100, 100, 100)
};
//1-7, I,J,L,O,S,T,Z Reference to Wiki
enum BlockShape
{
  IBK = 1,
  JBK = 2,
  LBK = 3,
  OBK = 4,
  SBK = 5,
  TBK = 6,
  ZBK = 7
};

class Block : public QObject, public QGraphicsItemGroup {
public:


  Block();
  ~Block();

public:
  //game function
  int generateBlock();
  int clearBlock(); 



};