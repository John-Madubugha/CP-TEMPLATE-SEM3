template <typename T>
void swapValues(T& a, T& b) {
T temp = a;
a = b;
b = temp;
}
int main() {
int x = 5, y = 10;
swapValues(x, y);
std::cout << "x: " << x << ", y: " << y << std::endl;
return 0;
}