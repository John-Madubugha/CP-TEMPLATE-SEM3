//TASK 3
template <typename T>
T maxValue(T a, T b) {
return (a > b) ? a : b;
}
int main() {
int a = 5, b = 10;
std::cout << "Max value: " << maxValue(a, b) << std::endl;
double x = 3.14, y = 2.71;
std::cout << "Max value: " << maxValue(x, y) << std::endl;
return 0;
}
