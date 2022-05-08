class Fruit{
private:
    int x_coord;
    int y_coord;
public:
    Fruit(int x, int y) : x_coord(x), y_coord(y) {}

    bool Match(int x, int y) const{
        return x == x_coord && y == y_coord;
    }

    void setNewCoord(int x, int y){
        x_coord = x;
        y_coord = y;
    }

};
