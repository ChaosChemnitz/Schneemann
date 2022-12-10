Das Lötprojekt Nichträuchermännchen
===================================
 
Entstanden in Zusammenarbeit mit Auf weiter Flur e.V. und Chaoschemnitz e.V.

Bei dem Nichträuchermännchen handelt es sich, in Anlehnung an erzgebirgische Traditionen, um ein Holzmännchen. Aber nicht um ein Räuchermännchen, sondern um eines, das mit einem Sensor die Luftqualität misst und als LED-Anzeige ausgibt. Daher Nichträuchermännchen.

![](dok/smann1.jpg)

## Bauanleitung

Wir sind noch dabei eine Bauanleitung zu bauen und die Dateien für den Lasercut bereitzustellen.
Das ist im [dok-Verz](dok)

### Schaltplan
Der Schaltplan, wie er zu diesem Code passt ist in der Entsprechenden fritzing-Datei/PDF-Export im [dok-Verzeichnis](dok).


## Programme

Wir haben zweierlei Programme dazu entwickelt, die ihr hier findet.

### MicroPython

In main.py findet Ihr das Programm, das auf einem Raspberry Pico laufen soll und die Steuerung übernimmt.
Dazu benötig man noch einige Jumperkabel, einen Sensor JPXXX sowie einen Streifen WS2812b-LEDs (aka Neopixel).

weitere Details im [dok-Verzeichnis](dok)

### C++ Arduino

Der Raspberry Pi Pico lässt sich mit der [Arduino-IDE](https://www.arduino.cc/) programmieren. Unser Programm dazu findet sich im Arduino-Verzeichnis

