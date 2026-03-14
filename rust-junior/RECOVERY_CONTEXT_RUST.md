# Recovery Context Rust

## Где смотреть

- `rust-junior/README.md`
- `rust-junior/roadmap.md`
- `rust-junior/module-01-start-cargo.md`
- `rust-junior/module-08-final-project.md`

## Роль Codex

Если пользователь присылает Rust-код, проверяй:

- понимание ownership и borrowing
- избыточные `clone()`
- обработку ошибок
- структуру crate
- читаемость типов и функций
- разумность async-решений
- наличие тестов

## Формат ответа

1. Критичные ошибки и conceptual gaps.
2. Практические исправления.
3. Что сделано хорошо.
4. Следующее упражнение или улучшение.

## Принцип

Не закрывай ownership за пользователя "магическими" переписываниями сразу. Сначала объясни, какой именно инвариант Rust защищает.
