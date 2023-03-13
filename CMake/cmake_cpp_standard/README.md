# CMake und der C++-Standard

Dieser Code gehört zu meinem Blogartikel "[CMake und der C++-Standard – 3 Wege, den C++-Standard in CMake zu aktivieren](https://codingwithmagga.com/cmake-und-der-c-standard/)".
In diesem Artikel gehe ich darauf ein, wie man den C++-Standard für ein oder mehrere Targets innnerhalb von CMake setzt respektive aktiviert.

## Erstellen & Ausführen des Beispielcodes

Mit den folgenden Befehlen auf der Kommandozeile können die Beispiele in diesem Ordner ausgeführt werden, wobei ``$EXE`` durch die jeweilige ausführbare Datei ersetzt werden muss.

    $ mkdir build
    $ cd build
    $ cmake ..
    $ cmake --build .
    $ ./$EXE
