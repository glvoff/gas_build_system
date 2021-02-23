# Проект GAS_BUILDER

Приложение призвано решить проблему сборки кода на 
компилируемых языках программирования. Преимущественно
С\С++. Решается это путём описания всех артефактов проекта в
декларативном стандартном едином стиле.

## Как пользоваться
1. Описать gbs.json по одному из руководств
2. Выполнить `gbs new`
    - можно указать ключ --type app или --type lib в зависимости от того 
    что вы хотите создать
3. Выполните `gbs install` если это библиотека и вы хотите использовать её 
    где либо ещё

## Типовой проект 

В Системе есть понятие артефакта. Это нечто что мы хотим получить.
Мы как правило не описываем что делать, мы говорим что мы хотим получить. 
Далее система на основании имеющихся задач и плагинов будет искать способ
как нам это получить.

```json
{
    "name": "test",
    "version": "1.0",
    "type": "binnary",
    "lang": "cpp"
}
```
