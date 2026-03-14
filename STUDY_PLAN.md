# Study Plan

Этот файл - основной маршрут прохождения материалов.

Если открывать вольт спустя долгое время, начинать нужно отсюда, а затем при необходимости смотреть [[README]], [[REPORT]] и [[RECOVERY_CONTEXT]].

## Главный принцип

- сначала закрыть базу и инженерные навыки под C++
- затем добить C++ до уровня первого трудоустройства
- после этого пройти Rust как второй рыночный стек
- все время параллельно держать в работе инструменты из [[market-skills/README]]

## Подготовительный этап: 2-4 дня

### Что открыть

- [[README]]
- [[REPORT]]
- [[IDE_NEOVIM_SETUP]]
- [[market-skills/README]]

### Что сделать

1. Настроить Neovim, `clangd`, `rust-analyzer`, `cmake`, `cargo`.
2. Завести отдельный каталог для практических проектов.
3. Прочитать коротко структуру обоих треков:
   - [[cpp-junior/README]]
   - [[rust-junior/README]]
4. Прочитать начало сопутствующих курсов:
   - [[market-skills/git-for-developers]]
   - [[market-skills/linux-cli-for-developers]]

## Этап 1. C++ база и инструменты: недели 1-4

### Неделя 1

- Основная лекция: [[cpp-junior/lecture-01-cpp-setup-and-basics]]
- Практика: [[cpp-junior/module-01-foundation]]
- Параллельно:
  - [[market-skills/git-for-developers]]
  - [[market-skills/linux-cli-for-developers]]

Цель недели:

- уверенно собрать и запустить простые программы
- начать нормальную git-историю
- привыкнуть работать из терминала

### Неделя 2

- Основная лекция: [[cpp-junior/lecture-02-memory-references-and-lifetime]]
- Практика: [[cpp-junior/module-02-memory-raii]]
- Параллельно:
  - продолжить [[market-skills/git-for-developers]]
  - продолжить [[market-skills/linux-cli-for-developers]]

Цель недели:

- понять lifetime объектов
- перестать путаться в передаче аргументов, указателях и ссылках

### Неделя 3

- Основная лекция: [[cpp-junior/lecture-03-stl-oop-and-code-organization]]
- Практика: [[cpp-junior/module-03-oop-stl]]
- Параллельно:
  - [[market-skills/cmake-for-junior-cpp]]

Цель недели:

- начать решать прикладные задачи через STL, а не "вручную все писать"
- перейти от одиночных файлов к проектной структуре

### Неделя 4

- Основная лекция: [[cpp-junior/lecture-04-algorithms-and-data-structures]]
- Практика: [[cpp-junior/module-04-algorithms-complexity]]
- Параллельно:
  - продолжить [[market-skills/cmake-for-junior-cpp]]

Цель недели:

- закрыть базовые алгоритмические паттерны
- научиться сначала оценивать структуру данных и сложность

## Этап 2. C++ до рабочего junior: недели 5-8

### Неделя 5

- Основная лекция: [[cpp-junior/lecture-05-cmake-build-and-testing]]
- Практика: [[cpp-junior/module-05-cmake-tooling-testing]]
- Параллельно:
  - [[market-skills/debugging-and-profiling-basics]]

Цель недели:

- собрать нормальный C++ проект
- добавить тесты и научиться запускать их стабильно

### Неделя 6

- Основная лекция: [[cpp-junior/lecture-06-concurrency-linux-and-debugging]]
- Практика: [[cpp-junior/module-06-concurrency-linux]]
- Параллельно:
  - продолжить [[market-skills/debugging-and-profiling-basics]]
  - вернуться к [[market-skills/linux-cli-for-developers]] при пробелах

Цель недели:

- понять потоки, mutex и базовые Linux-практики
- научиться искать причины падений и некорректного поведения

### Неделя 7

- Основная лекция: [[cpp-junior/lecture-07-code-reading-design-and-interview-prep]]
- Практика: [[cpp-junior/module-07-code-reading-design]]
- Параллельно:
  - [[market-skills/tcp-ip-basics-for-juniors]]

Цель недели:

- уметь читать и улучшать существующий код
- собрать базовую сетевую теорию, полезную для вакансий

### Неделя 8

- Основная лекция: [[cpp-junior/lecture-08-final-project-and-job-readiness]]
- Практика: [[cpp-junior/module-08-final-project]]
- Параллельно:
  - вернуться к [[market-skills/git-for-developers]]
  - вернуться к [[market-skills/cmake-for-junior-cpp]]

Цель недели:

- закончить первый проект, который можно обсуждать на интервью

## Контрольная точка после C++

Перед переходом в Rust нужно убедиться, что ты можешь:

- объяснить содержимое [[cpp-junior/module-02-memory-raii]]
- решить задачи уровня [[cpp-junior/module-04-algorithms-complexity]]
- собрать проект из [[cpp-junior/module-05-cmake-tooling-testing]]
- защитить проект из [[cpp-junior/module-08-final-project]]

Если это пока не так, повторяй C++ этап, а не прыгай дальше.

## Этап 3. Rust с нуля: недели 9-12

### Неделя 9

- Основная лекция: [[rust-junior/lecture-01-rust-intro-and-cargo]]
- Практика: [[rust-junior/module-01-start-cargo]]
- Параллельно:
  - повторить [[market-skills/git-for-developers]]
  - повторить [[market-skills/linux-cli-for-developers]]

Цель недели:

- привыкнуть к Cargo и базовому синтаксису

### Неделя 10

- Основная лекция: [[rust-junior/lecture-02-ownership-and-borrowing]]
- Практика: [[rust-junior/module-02-ownership-borrowing]]
- Дополнительно:
  - при необходимости возвращаться к [[rust-junior/module-01-start-cargo]]

Цель недели:

- понять ownership и borrowing на практических примерах

### Неделя 11

- Основная лекция: [[rust-junior/lecture-03-enums-option-result-and-collections]]
- Практика: [[rust-junior/module-03-enums-results-collections]]
- Параллельно:
  - перечитать [[market-skills/tcp-ip-basics-for-juniors]], если нужен контекст под backend

Цель недели:

- уверенно читать и писать код с `Result`, `Option`, `enum`

### Неделя 12

- Основная лекция: [[rust-junior/lecture-04-traits-generics-and-modules]]
- Практика: [[rust-junior/module-04-traits-generics-modules]]

Цель недели:

- научиться разбивать Rust-проект на понятные модули

## Этап 4. Rust до рабочего junior/intern: недели 13-16

### Неделя 13

- Основная лекция: [[rust-junior/lecture-05-testing-cli-files-and-serde]]
- Практика: [[rust-junior/module-05-testing-cli-files]]
- Параллельно:
  - вернуться к [[market-skills/linux-cli-for-developers]]

Цель недели:

- делать законченные CLI-проекты с файлами и тестами

### Неделя 14

- Основная лекция: [[rust-junior/lecture-06-async-tokio-and-http]]
- Практика: [[rust-junior/module-06-async-ecosystem]]
- Параллельно:
  - вернуться к [[market-skills/tcp-ip-basics-for-juniors]]

Цель недели:

- получить базовое владение async-экосистемой

### Неделя 15

- Основная лекция: [[rust-junior/lecture-07-real-rust-project-practices]]
- Практика: [[rust-junior/module-07-real-project-practices]]
- Параллельно:
  - вернуться к [[market-skills/debugging-and-profiling-basics]]

Цель недели:

- доводить проекты до состояния "не стыдно показать"

### Неделя 16

- Основная лекция: [[rust-junior/lecture-08-final-project-and-job-readiness]]
- Практика: [[rust-junior/module-08-final-project]]

Цель недели:

- закончить Rust-проект и подготовить его к ревью

## Еженедельный ритуал

Раз в неделю:

1. Заполняй [[WEEKLY_REVIEW_TEMPLATE]].
2. Приноси код на ревью по шаблону из [[HOW_TO_SUBMIT_FOR_REVIEW]].
3. Обновляй список проблем:
   - что не понимаешь
   - где тормозишь
   - что уже стало уверенным навыком

## Как распределять время внутри недели

Рекомендуемая схема:

- 4 дня по 60-120 минут на основной языковой модуль
- 1 день на `market-skills`
- 1 день на практику, рефакторинг и повторение
- 1 день отдыха или легкого перечитывания заметок

## Что делать после завершения плана

Когда закончишь этот цикл, следующим логичным слоем будут:

- углубление pet-projects
- SQL/PostgreSQL
- Docker
- алгоритмическая практика под интервью

Но до этого момента уже есть достаточно материалов, чтобы выходить на junior-старт.
