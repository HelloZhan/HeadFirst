#ifndef CHOCOLATEBOILER_H
#define CHOCOLATEBOILER_H
class ChocolateBoiler{
public:
    static ChocolateBoiler *getInstance();
    void fill();
    void drain();
    void boil();
    bool isEmpty();
    bool isBoiled();
private:
    ChocolateBoiler();
    bool empty;
    bool boiled;
    static ChocolateBoiler *uniqueInstance;

};
#endif // CHOCOLATEBOILER_H
