# Курс "Встраиваемые микропроцессорные системы"

Кафедра [Промышленная электроника](https://mpei.ru/Structure/Universe/ire/structure/ie/Pages/default.aspx) [НИУ МЭИ](https://mpei.ru/).

![ ](img/mpei_logo.jpg) ![ ](img/logo_ie.jpg)

## Оглавление

- [Курс "Встраиваемые микропроцессорные системы"](#курс-встраиваемые-микропроцессорные-системы)
  - [Оглавление](#оглавление)
  - [Преподаватели](#преподаватели)
  - [Обзор курса](#обзор-курса)
  - [Цели](#цели)
  - [Предварительные требования](#предварительные-требования)
  - [Структура курса](#структура-курса)
    - [Лекции](#лекции)
    - [Лабораторные работы](#лабораторные-работы)
    - [Экзамен](#экзамен)
  - [Материалы курса](#материалы-курса)
    - [Клонирование репозитория](#клонирование-репозитория)
  - [Перечень директорий репозитория](#перечень-директорий-репозитория)
  - [Литература](#литература)
  - [Полезные ссылки](#полезные-ссылки)
  - [Отладочная плата](#отладочная-плата)
  - [Среда разработки](#среда-разработки)
  - [Ошибки и опечатки](#ошибки-и-опечатки)

## Преподаватели

Александр Николаевич Смирнов

Электронная почта: [smirnovalnik@mpei.ru](mailto:smirnovalnik@mpei.ru)

Лабораторные работы проводятся в аудитории Е-101а.

## Обзор курса

Курс предначен для студентов магистратуры первого года обучения кафедры Промышленной электроники.
Курс знакомит с применением языка C для встраиваемых систем на микроконтроллере `К1986ВЕ92QI` (`MDR32F9Q2I`) и
с современными методами разработки встраиваемых микропроцессорных систем.

## Цели

Целями данного курса являются:

- изучение языка программирования C и его применения для встраиваемых микропроцессорных систем
- знакомство с микроконтроллером `К1986ВЕ92QI` (`MDR32F9Q2I`)
- изучение современных методов разработки и отладки встраиваемых микропроцессорных систем

## Предварительные требования

Студент должен обладать навыками программирования на одном языке высокого уровня,
знать основы микропроцессорной техники и цифровой схемотехники.

## Структура курса

- Лекции
  - Лекция №1: Введение. Язык программирования C ([слайды](./lectures/lect_1.pdf))
  - Лекция №2: Язык программирования C. Стандартная библиотека языка C ([слайды](./lectures/lect_2.pdf))
  - Лекция №3: Применение языка C для встраиваемых систем ([слайды](./lectures/lect_3.pdf))
  - Лекция №4: Микроконтроллер ([слайды](./lectures/lect_4.pdf))
  - Лекция №5: Этапы разработки микропроцессорных систем ([слайды](./lectures/lect_5.pdf))
  - Лекция №6: Разработка и отладка программ для встраиваемых систем ([слайды](./lectures/lect_6.pdf))
  - Лекция №7: Архитектура программного обеспечения ([слайды](./lectures/lect_7.pdf))
  - Лекция №8: Периферийные модули: DMA, USB, Ethernet ([слайды](./lectures/lect_8.pdf))
- Лабораторные работы
  - Лабораторная работа №1: Стандартный ввод/вывод на языке С для ПК ([пример](./labs/lab1_ex/))
  - Лабораторная работа №2: Стандартный ввод/вывод на языке С для МК через UART ([пример](./labs/lab2_ex/))
  - Лабораторная работа №3: Модуль ЦАП, ПДП и таймер ([пример](./labs/lab3_ex/))
  - Лабораторная работа №4: Модуль АЦП, ПДП и устройство индикации ([пример](./labs/lab4_ex/))
- Экзамен

### Лекции

Презентации для лекций доступны в формате `pdf` в директории [lectures](./lectures).

Лекции №1, №2, №3 можно использовать как короткий справочник по языку C.

### Лабораторные работы

Выполнение лабораторных работ предполагает предварительную самостоятельную подготовку:
создание проекта и написание исходных текстов программы.

Лабораторная работа №1 выполняется на персональном компьютере.
Инструкция по запуску компилятора находится в файле `README.md` в директории [labs/lab1_ex](./labs/lab1_ex).

Лабораторные работы №2, №3 и №4 выполняются на отладочной плате `1986EvBrd_BE92Q` с микроконтроллером `К1986ВЕ92QI` (`MDR32F9Q2I`).

В лабораторных работах №2, №3 и №4 активно применяется ввод вывод через последовательный асинхронный
интерфейс `UART`.

По каждой лабораторной работе проводится защита.
Список вопросов для защиты приведен здесь [labs/lab_questions](./labs/lab_questions.md).

### Экзамен

Курс заканчивается устным экзаменом.
Билет состоит из двух теоретических вопросов и одной задачи на программирование на языке C.

## Материалы курса

Материалы курса размещены на [GitHub](https://github.com),
который является большим хранилищем программ (исходных текстов)
под управлением системы контроля версий `git`.

Репозиторий непрерывно обновляется и поэтому рекомендуется "подтягивать" изменения.

Если вы не знакомы с `git`, то можете периодически скачивать архив проекта.

Рекомендуется ознакомится с проектами для встраиваемых
систем, находящимися на [GitHub](https://github.com).
Примером является
[Стандартная библиотека периферии для МК семейства 1986x](https://github.com/eldarkg/emdr1986x-std-per-lib),
которая активно используется в данном курсе, а также
[примеры и документация для нее](https://github.com/eldarkg/emdr1986x-std-per-lib-doc).

### Клонирование репозитория

```bash
git clone https://github.com/smirnovalnik/embedded-systems-course.git
```

## Перечень директорий репозитория

- [docs](./docs) - документация на микроконтроллер и на отладочную плату
  - [evaluation_board](./docs/evaluation_board/) - документация по отладочному плате `1986EvBrd_BE92Q`
  - [indicators](./docs/indicators/) - документация по индикаторам для лабораторной работы №4
  - [mcu](./docs/mcu/) - документация (datasheets) по микроконтроллеру `К1986ВЕ92QI` (`MDR32F9Q2I`)
- [labs](./labs/) - примеры лабораторных работ
  - [lab1_ex](./labs/lab1_ex/) - примеры лабораторной работы №1, выполняемой на персональном
    компьютере. В примерах показано применение языка C и средств стандартного ввода вывода,
    а также средств компиляции программы на персональном компьютере
  - [lab2_ex](./labs/lab2_ex/) - пример лабораторной работы №2, выполняемой на микроконтроллере.
    В примере показано использование языка C и средств стандартного ввода вывода
    уже на микроконтроллере через интерфейс `UART` в интегрированной среде разработки `Keil uVision`.
  - [lab3_ex](./labs/lab3_ex/) - пример лабораторной работы №3, в которой изучается модуль цифро-аналогового преобразователя
    (`ЦАП` или `DAC`) и контроллер прямого доступа (`ПДП` или `DMA`) к памяти. В примере производится генерация
    сигнала произвольной формы на выходе микроконтроллера
  - [lab4_ex](./labs/lab4_ex/) - в лабораторной работе №4 продолжается изучение периферии
    микроконтроллера (`АЦП`, `SPI`, `таймер`). Показан пример измерения аналогового
    сигнала на входе микроконтроллера и вывод результата на жидко-кристаллический индикатор
- [lectures](./lectures/) - слайды и тексты программ, использованные на лекциях
- [programs](./programs/) - программы для установки

## Литература

- _Elicia White "Making Embedded Systems: Design Patterns for Great Software"_
- _Joseph Yiu "The Definitive Guide to ARM® Cortex®-M3 and Cortex®-M4 Processors"_
- Для обучения программированию на языке C обязательна к прочтению и **решению всех упражнений** книга
_Керниган Б., Ритчи Д. "Язык программирования C" 2-е издание._

## Полезные ссылки

- [Материалы курса «Микропроцессорные устройства»](https://github.com/smirnovalnik/microprocessor-units-course)
- [Ответы на все вопросы по языку C](https://stackoverflow.com/)

## Отладочная плата

![ ](./img/1986evbrd_be92q_components.png)

| № | Описание |
|-|-|
|  1 | Контактирующее устройство (`ZIF панель`) для микроконтроллера `К1986ВЕ92QI` (`MDR32F9Q2I`) |
|  2 | Разъем Х27 портов A,E,F микроконтроллера |
|  3 | Разъем карты памяти microSD |
|  4 | Переключатели выбора режима загрузки |
|  5 | Разъем USB-B |
|  6 | Подстроечный резистор на 7-м канале АЦП |
|  7 | Разъем BNC внешнего сигнала на 7-м канале АЦП |
|  8 | Разъем BNC внешнего сигнала на 1-м входе компаратора |
|  9 | Разъем BNC выхода ЦАП1 |
| 10 | Разъем Audio 3.5мм выхода ЦАП1 через звуковой усилитель|
| 11 | Батарея 3.0В |
| 12 | ЖК индикатор 128х64 |
| 13 | Кнопка WAKEUP |
| 14 | Кнопки UP, DOWN, LEFT, RIGHT, SELECT |
| 15 | Кнопка RESET |
| 16 | Разъем питания 5В |
| 17 | Фильтр питания |
| 18 | Разъем RS-232 |
| 19 | Разъем CAN |
| 20 | Приемо-передатчик RS-232 5559ИН4 |
| 21 | Приемо-передатчик CAN 5559ИН14 |
| 22 | Разъем отладки JTAG-B |
| 23 | Набор светодиодов на порте C |
| 24 | Разъем отладки JTAG-А |
| 25 | Разъем Х26 портов B,C,D микроконтроллера |

Принципиальная схема для отладочной платы находится в директории [evaluation_board](./docs/evaluation_board/).

## Среда разработки

Разработка программ для микроконтроллера проводится
в интегрированной среде разработки (IDE)
[Keil MDK Lite Edition](http://www2.keil.com/mdk5/editions/lite).
Для загрузки потребуется регистрация на сайте.
Процесс установки ничем не отличается от установки любой другой программы для Windows.

Эта версия обладает практически полной функциональностью профессиональной версии,
но с ограничением на размер скомпилированной программы в 32 кБ.
Для лабораторных работ данного курса этого более чем достаточно.

> :bulb: **Примечание:** Избегайте русскоязычных названий директорий как в пути установки программы, так и в путях к вашим проектах. Некоторые компоненты среды разработки могут не работать.

В `Keil MDK Lite Edition` есть симулятор, поэтому работу некоторых частей программы
можно проверить без отладочной платы. Однако данный симулятор поддерживает
только центральный процессор, но не периферийные модули микроконтроллера.

`Keil MDK Lite Edition` изначально ничего не знает о микроконтроллерах
 `К1986ВЕ92QI` (`MDR32F9Q2I`). Поэтому потребуется установить пакет
[mdr_spl_v1.5.3.pack](./programs/mdr_spl_v1.5.3.pack).
После установки данного пакета при создании проекта можно будет выбрать
микроконтроллер `К1986ВЕ92QI` (`MDR32F9Q2I`). В среде появится возможность
добавлять модули из _Стандартной библиотеки периферии для МК семейства 1986x (SPL)_,
а также модули от компании `ARM`.
Сведения об применении _Стандартной библиотеки периферии (SPL)_ можно получить из
[примеров](https://github.com/eldarkg/emdr1986x-std-per-lib-doc).

## Ошибки и опечатки

Если вы нашли ошибки или опечатки просьба сообщать о них через [issues](https://github.com/smirnovalnik/embedded-systems-course/issues) в `GitHub` или писать на почту [smirnovalnik@mpei.ru](mailto:smirnovalnik@mpei.ru).

Если вы хотите улучшить содержание репозитория, то можете создать `pull request` на добавление ваших изменений.
