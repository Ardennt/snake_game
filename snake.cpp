class Snake{
private:
    unsigned headLoc_x;
    unsigned headLoc_y;
    
public:
    Snake(int x, int y) : headLoc_x(x), headLoc_y(y) {}

    bool Match(int x, int y) const{
        return headLoc_x == x && headLoc_y == y;
    }

};
