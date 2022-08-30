template <typename T, typename V>

class Pair
{
    T x;
    V y;

public:
    setX(T x)
    {
        this->x = x;
    }
    setY(V y)
    {
        this->y = y;
    }

    T first()
    {
        return x;
    }
    
    V second()
    {
        return y;
    }
};