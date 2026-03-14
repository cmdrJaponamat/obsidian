# Neovim Setup

Ниже минимальная, но рабочая конфигурация для C++ и Rust под Linux.

## Что поставить в систему

### Общее

- `git`
- `ripgrep`
- `fd`
- `cmake`
- `ninja`
- `gdb`
- `lldb`
- `make`

### Для C++

- `clang`
- `clangd`
- `clang-format`
- `cppcheck`

### Для Rust

- `rustup`
- `cargo`
- `rust-analyzer`
- `cargo-nextest` по желанию
- `cargo-watch` по желанию

## Что должно быть в Neovim

- LSP
- Treesitter
- автодополнение
- formatter
- debugger
- быстрый запуск тестов

Минимальный стек:

- `nvim-lspconfig`
- `mason.nvim`
- `nvim-cmp`
- `LuaSnip`
- `nvim-treesitter`
- `conform.nvim` или `none-ls`
- `nvim-dap`
- `telescope.nvim`

## Рекомендуемые language servers

- C++: `clangd`
- Rust: `rust-analyzer`

## Форматирование

- C++: `clang-format`
- Rust: `cargo fmt`

## Статический анализ

- C++: `clang-tidy` и `cppcheck`
- Rust: `cargo clippy`

## Проверка и запуск

- C++:
  - configure: `cmake -S . -B build -G Ninja`
  - build: `cmake --build build`
  - test: `ctest --test-dir build`
- Rust:
  - check: `cargo check`
  - test: `cargo test`
  - lint: `cargo clippy -- -D warnings`
  - run: `cargo run`

## Практические советы по layout проекта

- Для C++ всегда включай `compile_commands.json`:
  - `cmake -S . -B build -G Ninja -DCMAKE_EXPORT_COMPILE_COMMANDS=ON`
- Для Rust держи один проект на одно учебное задание или мини-серию.
- Не пиши код в одном `main.cpp` или `main.rs`, когда задача уже выросла.

## Минимальные требования к качеству перед отправкой мне на проверку

- код компилируется
- есть понятный `README.md` у проекта
- нет варнингов, если это разумно достижимо
- есть хотя бы базовые тесты там, где они уместны
- есть пример запуска

## Что еще стоит добавить позже

- `tmux`
- `just`
- `bear` для отдельных C++ проектов без нормального CMake
- `valgrind` для C++
- `cargo-expand` для Rust
