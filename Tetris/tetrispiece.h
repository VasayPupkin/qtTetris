#ifndef TETRISPIECE_H
#define TETRISPIECE_H

enum TetrixShape { NoShape, ZShape, SShape, LineShape, TShape, SquareShape,
                   LShape, MirroredLShape };

class TetrisPiece
{
public:
    TetrisPiece();

    void setRandomShape();
    void setShape(TetrixShape shape);

    TetrixShape shape() const;

private:

    TetrixShape pieceShape;
    int coord[4][2];
};

#endif // TETRISPIECE_H
