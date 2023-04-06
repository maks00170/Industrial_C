# RAII - Получение ресурса есть инициализация (Resource Acquisition Is Initialization (RAII)) — программная идиома, смысл которой заключается в том, что с помощью тех или иных программных механизмов получение некоторого ресурса неразрывно совмещается с инициализацией, а освобождение — с уничтожением объекта.
# Запуск программы.

- Склонировать в папку third-party/Catch2/ https://github.com/catchorg/Catch2
- Перейти в папку third-party/Catch2/
- Выполнить make
- Выполнить cmake -Bbuild -H. -DBUILD_TESTING=OFF
- Выполнить в папке build - скрипт make
- запуск unit test - скрипт ../bin/raiiaction_test
- запуск integrate test - скрипт python3 ../testsuite/projects/main/integrete_tests.py (из папки bin)
