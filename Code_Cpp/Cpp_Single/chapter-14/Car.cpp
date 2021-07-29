//Public composition

class Engine
{
private:
    /* data */
public:
    Engine(/* args */){}
    ~Engine(){}

    void start() const {}
    void rev() const {}
    void stop() const {}
};

class Wheel
{
private:
    /* data */
public:
    Wheel(/* args */){}
    ~Wheel(){}

    void inflate(int psi) const {}
};

class Window
{
public:
    void rollup() const {}
    void rolldown() const {}
};

class Door{
public:
    Window window;
    void open() const {}
    void close() const {}
};

class Car{
    public:
    Engine engine;
    Wheel wheel[4];
    Door left,right; // 2-door
};

int main()
{
    Car car;
    car.left.window.rollup();
    car.wheel[0].inflate(72);
}

