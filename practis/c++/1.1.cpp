#include <algorithm>
#include <iostream>
#include <limits>
#include <sstream>
#include <vector>

class Vector {
public:
  Vector() {}
  Vector(const std::string &input) { SetVectorFromStr(input); }
  bool SetVectorFromStr(const std::string &input) {
    int num{};
    int count = 0;
    std::stringstream ss(input);
    while (ss >> num) {
      if (count < n) {
        vec.push_back(num);
      } else {
        throw std::runtime_error("Ошибка ввода элементов массива.");
      }
      ++count;
    }
    if (count < n) {
      throw std::runtime_error("Ошибка ввода элементов массива.");
    }
    return true;
  }
  bool SizeSetter(const int &size) {
    n = size;
    return true;
  }
  bool SizeSetter(std::istream &size) {
    if (!(size >> n) || n <= 0) {
      throw std::runtime_error("Неправильный размер массива.");
    }
    return true;
  }
  int printVec() {
    for (auto num : vec) {
      std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
  }
  int max() { return *(std::max_element(vec.begin(), vec.end())); }
  int min() { return *(std::min_element(vec.begin(), vec.end())); }
  double average() {
    int sum = 0;
    for (auto num : vec) {
      sum += num;
    }
    return (static_cast<double>(sum)) / n;
  }
  int countOfEven() {
    int count = 0;
    for (auto num : vec) {
      if (num % 2 == 0) {
        count++;
      }
    }
    return count;
  }

private:
  std::vector<int> vec{};
  int n{};
};

int main() {
  try {
    std::string str;
    Vector vec;
    std::cout << "Введите размерность массива: " << std::flush;
    vec.SizeSetter(std::cin);
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Введите элементы массива:" << std::endl;
    std::getline(std::cin, str);
    vec.SetVectorFromStr(str);
    vec.printVec();
    std::cout << "Max: " << vec.max() << "\nMin: " << vec.min()
              << "\nAverage: " << vec.average() << std::endl;
    std::cout << "Количество четных элементов: " << vec.countOfEven()
              << std::endl;
  } catch (const std::exception &e) {
    std::cerr << e.what() << "\n";
  }
  return 0;
}
