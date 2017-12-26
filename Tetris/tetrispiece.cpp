#include "tetrispiece.h"

#include <stdlib.h>
#include <QtCore>

void TetrisPiece::setRandomShape()
{
    setShape(TetrixShape(qrand()%7 + 1));
}

void TetrisPiece::setShape(TetrixShape shape)
{
    static const int coordsTable[8][4][2] = {
        { { 0, 0 },   { 0, 0 },   { 0, 0 },   { 0, 0 } },
        { { 0, -1 },  { 0, 0 },   { -1, 0 },  { -1, 1 } },
        { { 0, -1 },  { 0, 0 },   { 1, 0 },   { 1, 1 } },
        { { 0, -1 },  { 0, 0 },   { 0, 1 },   { 0, 2 } },
        { { -1, 0 },  { 0, 0 },   { 1, 0 },   { 0, 1 } },
        { { 0, 0 },   { 1, 0 },   { 0, 1 },   { 1, 1 } },
        { { -1, -1 }, { 0, -1 },  { 0, 0 },   { 0, 1 } },
        { { 1, -1 },  { 0, -1 },  { 0, 0 },   { 0, 1 } }
    };

    for (int i = 0; i < 4 ; i++) {
        for (int j = 0; j < 2; ++j)
            coords[i][j] = coordsTable[shape][i][j];
    }
    pieceShape = shape;
}

int TetrisPiece::minX() const
{
    int min = coord[0][0];
    for(int i = 1; i < 4 ; ++i)
        min = qMin(min , coord[i][0]);
    return min;
}

int TetrisPiece::maxX() const
{
    int max = coord[0][0];
    for(int i = 1; i < 4 ; ++i)
        max = qMax(min , coord[i][0]);
    return max;
}

int TetrisPiece::minY() const
{
    int min = coord[0][1];
    for(int i = 1; i < 4 ; ++i)
        min = qMin(min , coord[i][1]);
    return min;
}

int TetrisPiece::maxY() const
{
    int max = coord[0][1];
    for(int i = 1; i < 4 ; ++i)
        max = qMax(min , coord[i][1]);
    return max;
}

TetrisPiece TetrisPiece::rotatedLeft() const
{
    if(pieceShape == TetrixShape::SquareShape)
        return *this;
    TetrisPiece result;
    result.pieceShape = pieceShape;
    for(int i = 0; i < 4 ; ++i){
        result.setX(i , y(i));
        result.setY(i , -x(i));
    }
    return result;
}

TetrisPiece TetrisPiece::rotatedRight() const
{
    if(pieceShape == TetrixShape::SquareShape)
        return *this;
    TetrisPiece result;
    result.pieceShape = pieceShape;
    for(int i = 0; i < 4 ; ++i){
        result.setX(i , -y(i));
        result.setY(i , x(i));
    }
    return result;
}
