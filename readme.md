### RAII - Получение ресурса есть инициализация (Resource Acquisition Is Initialization (RAII)) — программная идиома, смысл которой заключается в том, что с помощью тех или иных программных механизмов получение некоторого ресурса неразрывно совмещается с инициализацией, а освобождение — с уничтожением объекта.
# Запуск программы.

- Создать папку third-party
- Склонировать в папку third-party/ git clone https://github.com/catchorg/Catch2
- Выполнить cmake -Bbuild -H. -DBUILD_TESTING=OFF
- Выполнить в папке build - скрипт make
- запуск unit test - скрипт ../bin/raiiaction_test
- запуск integrate test (из папки bin) - скрипт python3 ../testsuite/projects/main/integrate_tests.py
