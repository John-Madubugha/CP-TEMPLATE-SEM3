//TASK 2
template <typename T>
class Box {
private:
T value;
public:
void setValue(T val) {
value = val;
}
T getValue() {
return value;
}
};
int main() {
Box<int> box1;
box1.setValue(42);
std::cout << "Box1 value: " << box1.getValue() << std::endl;
Box<double> box2;
box2.setValue(3.14);
std::cout << "Box2 value: " << box2.getValue() << std::endl;
return 0;
}
