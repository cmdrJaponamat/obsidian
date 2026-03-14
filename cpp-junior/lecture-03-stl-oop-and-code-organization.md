# Лекция 3. STL, ООП и организация кода

## Зачем это нужно

На работе почти никто не хочет видеть junior, который вручную пишет свой список, свою строку и свой велосипедный контейнер. От тебя ждут, что ты умеешь пользоваться стандартной библиотекой и строить код из понятных компонентов.

## STL как основа прикладного C++

STL дает:

- контейнеры
- алгоритмы
- итераторы
- утилиты для типичной прикладной логики

На junior уровне нужно особенно хорошо знать:

- `std::vector`
- `std::string`
- `std::unordered_map`
- `std::map`
- `std::set`
- `std::optional`

### `std::vector`

Хорош для:

- списков элементов
- накопления данных
- проходов по индексам и range-based loops

```cpp
std::vector<std::string> tasks;
tasks.push_back("read");
tasks.push_back("code");
```

### `std::unordered_map`

Хорош для словарей и быстрых поисков по ключу.

```cpp
std::unordered_map<std::string, int> word_count;
word_count["cpp"]++;
```

### `std::optional`

Полезен, когда значение может отсутствовать, и это нормальное состояние.

```cpp
std::optional<int> find_index(const std::vector<int>& values, int target);
```

Это лучше, чем возвращать магическое `-1`, если такой код начинает путаться с реальными значениями.

## Алгоритмы STL

Даже на junior уровне полезно знать хотя бы:

- `std::sort`
- `std::find_if`
- `std::count_if`
- `std::transform`

Пример:

```cpp
std::sort(numbers.begin(), numbers.end());
```

Плюс такого стиля:

- код короче
- намерение яснее
- меньше шансов ошибиться в типовом цикле

## Range-based loops

```cpp
for (const auto& book : books) {
    std::cout << book.title << '\n';
}
```

Обычно это читается лучше, чем ручные индексы, если индекс не нужен.

## Базовая ООП-модель

ООП в практическом C++ - это не про "делать классы везде". Это про нормальную упаковку данных и поведения.

### Инкапсуляция

Класс должен хранить внутреннее состояние и управлять им через понятный интерфейс.

```cpp
class BankAccount {
public:
    explicit BankAccount(int balance) : balance_(balance) {}

    void deposit(int amount) {
        balance_ += amount;
    }

    int balance() const {
        return balance_;
    }

private:
    int balance_;
};
```

### Композиция

Часто это лучший инструмент, чем наследование.

Пример:

- `Library` содержит `vector<Book>`
- `TaskManager` содержит `FileStorage`

### Наследование

Используй, когда действительно нужна иерархия "является видом".

Например:

```cpp
class Storage {
public:
    virtual ~Storage() = default;
    virtual void save(const std::string& text) = 0;
};
```

Но если у тебя просто два несвязанных класса, не надо натягивать наследование ради "красоты".

## Заголовочные и исходные файлы

Обычно:

- `.h` или `.hpp` - объявления
- `.cpp` - реализации

Это нужно, чтобы:

- разделять интерфейс и реализацию
- не раздувать один файл
- упрощать структуру проекта

Пример:

`book.h`

```cpp
class Book {
public:
    Book(std::string title, std::string author);
    const std::string& title() const;

private:
    std::string title_;
    std::string author_;
};
```

`book.cpp`

```cpp
#include "book.h"

Book::Book(std::string title, std::string author)
    : title_(std::move(title)), author_(std::move(author)) {}

const std::string& Book::title() const {
    return title_;
}
```

## Что значит "хорошая организация кода"

Обычно это:

- короткие функции
- понятные имена
- отдельные сущности в отдельных файлах
- логика отделена от ввода/вывода
- контейнеры и алгоритмы используются по делу

## Типичная ошибка новичка

Плохой вариант:

- все в `main.cpp`
- логика чтения, вычисления, печати и записи в файл перемешаны
- один класс на все подряд

Лучше:

- `domain/` или просто классы предметной области
- `storage/`
- `ui/cli`
- отдельные функции или классы под операции

## Вопросы для самопроверки

1. Почему STL почти всегда лучше самописных базовых контейнеров?
2. В чем смысл `std::optional`?
3. Когда композиция лучше наследования?
4. Зачем разделять `.h` и `.cpp`?

## Что читать дальше

- Практика: [[module-03-oop-stl]]
- Следующая лекция: [[lecture-04-algorithms-and-data-structures]]
