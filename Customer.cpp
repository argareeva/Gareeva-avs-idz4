#include <queue>

class Customer {        //класс покупателя с индексами, начальным временем и план (очередь похода в разные отделы)
public:
    int index{};
    int time_start{};

    std::queue<int> plan;

    Customer() = default;
};
