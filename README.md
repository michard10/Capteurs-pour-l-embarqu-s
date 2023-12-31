# Capteurs-pour-l-embarqu-s
##Description

Ce projet utilise un **capteur CO2 SCD4x** afin de récolter des données de température, de pourcentage d’humidité et de pourcentage de CO2 dans l’air. 





##Pré-requis

Ce projet tourne sur **MBED-OS**, pour pouvoir le faire fonctionner, il faut réaliser les manipulations indiquées sur le site du CATIE à l’adresse suivante :

https://6tron.catie-lab.net/ressources_logicielles/mbed/windows





Et obtenir certaines ressources à partir d’un lien git :

        https://github.com/catie-aq/mbed_zest-core-fmlr-72





Ensuite, bien sûr, il faut posséder une carte micro-contrôleur du CATIE sur laquelle est embarqué le capteur mentionné ci-dessus.









##Guide d’utilisation

###Compilation

Une fois les réglages réalisés pour compiler ce projet et implanter le code dans la carte 6TRON, il faut renseigner sur un terminal les commandes suivantes :

* *mbed compile*

* *sixtron flash*





###Lancement

Il faut renseigner la commande suivante pour démarrer le programme :

* *mbed sterm -port COM7 -b 115200*

Car la communication série doit s’effectuer à 115200 bps.





###Résultats

Le programme en l’état permet d'afficher sur le terminal de communication la température en °C, le pourcentage d’humidité et la quantité de CO2 en ppm captés par le capteur.





##Roadmap

Le code à ce jour comporte uniquement une seule classe pour le capteur. En raison d’un gros problème sur le capteur CO2 lors de la dernière séance, nous avons tout juste eu le temps de réaliser cette tâche. 

Ainsi, la partie “C++” ne permet pas de faire fonctionner le projet avec la partie envoi des données vers le routeur grâce au LoraWan. Cette partie a été réalisée sans programmation orientée objet, et est commentée juste en haut  dans le main.cpp.





L’objectif aurait alors été de développer le partie communication en POO.