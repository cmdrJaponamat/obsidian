#include <exception>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>

class Calc {
public:
  Calc(const std::string &input) { parseExp(input); };
  double estimation() {
    switch (op) {
    case '+':
      return sum();
    case '-':
      return sub();
    case '*':
      return multiple();
    case '/':
      return div();
    default:
      throw std::invalid_argument("Неизвестный знак.\n");
    }
  }

private:
  double a;
  double b;
  char op;
  double sum() { return a + b; }
  double multiple() { return a * b; }
  double sub() { return a - b; }
  double div() {
    if (b == 0) {
      throw std::runtime_error("Деление на 0.\n");
    } else {
      return a / b;
    }
  }
  void parseExp(const std::string &input) {
    std::stringstream ss(input);
    char extra;
    if (!(ss >> a >> op >> b) || (ss >> extra)) {
      throw std::runtime_error("Неверное выражение.\n");
    } else if (op != '*' && op != '/' && op != '+' && op != '-') {
      throw std::runtime_error("Неправильный знак.\n");
    }
  }
};

int main() {
  std::cout << "Введите выражение:" << std::endl;
  std::string exp{};
  try {
    if (!(std::cin >> exp)) {
      throw std::runtime_error("Ошибка чтения выражения.\n");
    }
    Calc calculation(exp);
    std::cout << calculation.estimation() << "\n";
  } catch (const std::exception &e) {
    std::cerr << "Ошибка " << e.what();
  }

  return 0;
}
