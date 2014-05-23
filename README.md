# Relais Manager


### Installation
1. Téléchargez le zip du repository
2. Décompressez le zip dans le dossier ```/Document/Arduino/libraries/``` dans un dossier appelé ```RelaisManager```
3. Inclure ```#include <RelaisManager>``` dans votre programme Arduino
4. Redémarrez Arduino IDE
5. Vous pouvez désormais utiliser le Relais Manager !


### Api
1. ```RelaisManager relais_one(1, 9)``` ceci va initialiser une instance avec les pin 1 en allumage et 9 en extinction
2. ```relais_one.on()``` ceci ouvre le relais 1
3. ```relais_one.off()``` ceci ferme le relais 1