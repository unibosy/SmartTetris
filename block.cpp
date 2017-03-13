#include "block.h"
#include "helper.h"

#include <QGraphicsObject>
#include <QGraphicsItemGroup>


Block::Block()
{

}

Block::~Block()
{

}

int Block::generateBlock()
{
  int blockType = Helper::instance()->getRendomNum(1, 7);
  BlockShape bs = BlockShape(blockType);
  printf("block type=%d", blockType);

  return blockType;
}

int Block::clearBlock()
{
  return 0;
}