#ifndef TETRISPIECE_H
#define TETRISPIECE_H

enum class TetrixShape { NoShape, ZShape, SShape, LineShape, TShape, SquareShape,
                   LShape, MirroredLShape };

class TetrisPiece
{
public:
    TetrisPiece(){ setShape(TetrixShape::NoShape); }

    void setRandomShape();
    void setShape(TetrixShape shape);

    TetrixShape shape() const { return pieceShape; }
    int x(int index) const { return coord[index][0]; }
    int y(int index) const { return coord[index][1]; }
    int minX() const;
    int maxX() const;
    int minY() const;
    int maxY() const;
    TetrisPiece rotatedLeft() const;
    TetrisPiece rotatedRight() const;

private:
    void setX(int index , int x) { coord[index][0] = x; }
    void setY(int index , int y) { coord[index][1] = y; }

    TetrixShape pieceShape;
    int coord[4][2];
};

#endif // TETRISPIECE_H
