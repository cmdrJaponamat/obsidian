# How To Submit For Review

Когда будешь приносить решение на проверку, удобнее всего присылать:

## Минимум

- путь к проекту
- формулировку задания
- что уже работает
- что вызывает сомнения

## Идеально

- `README.md`
- команды сборки/запуска
- что именно проверить:
  - correctness
  - code style
  - architecture
  - performance
  - ownership/borrowing для Rust
  - RAII/memory для C++

## Формат запроса

Пример:

```text
Проверь решение модуля 3 по C++.
Проект: /path/to/project
Проверить особенно: структуру классов и STL.
Сборка: cmake -S . -B build -G Ninja && cmake --build build
```

Или:

```text
Проверь решение модуля 5 по Rust.
Проект: /path/to/project
Проверить особенно: ownership, ошибки и тесты.
Запуск: cargo test && cargo clippy -- -D warnings
```

## Что я буду делать при проверке

- найду критичные ошибки
- укажу conceptual gaps
- скажу, что уже на junior-уровне хорошо
- дам следующий шаг
