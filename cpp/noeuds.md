Votre virus a créé une backdoor sur le réseau Skynet vous permettant d'envoyer de nouvelles instructions au virus en temps réél.

Vous décidez de passer à l'attaque active en empêchant Skynet de communiquer sur son propre réseau interne.

Le réseau Skynet est divisé en sous-réseaux. Sur chaque sous-réseau un agent Skynet a pour tâche de transmettre de l'information en se déplaçant de noeud en noeud le long de liens et d'atteindre une des passerelles qui mène vers un autre sous-réseau.

Votre mission est de reprogrammer le virus pour qu'il coupe les liens dans le but d'empêcher l'agent Skynet de sortir de son sous-réseau et ainsi d'informer le hub central de la présence de notre virus.
 	Règles
Pour chaque test on vous fournit :
La carte du sous-réseau.
L'emplacement des passerelles de sortie.
L'emplacement de départ de l'agent Skynet.
>>> Au maximum, un noeud du réseau ne peut être lié qu'à une seule passerelle. <<<

À chaque tour de jeu :
Dans un premier temps, vous coupez un des liens du sous-réseau.
Ensuite l'agent Skynet se déplace vers un noeud du réseau encore accessible.

Agent Skynet

Passerelle
 
Conditions de victoire
L'agent Skynet ne peut plus atteindre aucune passerelle
 
Conditions de défaite
L'agent Skynet atteint une passerelle
 	Exemple
4 4 1
0 1
0 2
1 3
2 3
3
Entrée d'initialisation
 
Représentation textuelle du réseau utilisé pour cet exemple. Il y a 4 nœuds, 4 liens et 1 passerelle. Les 4 lignes suivantes décrivent les liens. Le dernier entier est l'indice du nœud de sortie.

Tour 1
L'agent Skynet commence au noeud 0 (SI = 0). Notre virus coupe le lien entre les nœuds 1 et 3.

Tour 2
L'agent Skynet se déplace vers le noeud 2 (SI = 2). Notre virus coupe le lien entre les nœuds 2 et 3.

Tour 3
L'agent Skynet est isolé, vous avez gagné
 	Note
Les tests fournis et les validateurs utilisés pour le calcul du score sont similaires mais différents.
 	Entrées du jeu
Le programme doit d'abord lire les données d'initialisation depuis l'entrée standard, puis, dans une boucle infinie, lire depuis l'entrée standard les données relatives à l'état courant de l'agent Skynet et fournir sur la sortie standard les instructions à destination du virus.
Entrées d'initialisation
Ligne 1 : 3 entiers N L E
- N, représente le nombre de noeuds (y compris les passerelles) du sous-réseau.
- L, représente le nombre de liens du sous-réseau.
- E, indique le nombre de passerelles du réseau.

Les L lignes suivantes : 2 entiers par ligne (N1, N2), indiquant la présence d'un lien entre le noeud d'index N1 et le noeud d'index N2 du réseau

Les E lignes suivantes : 1 entier EI représentant l'index d'une passerelle de sortie du réseau.

Entrées pour un tour de jeu
Ligne 1 : 1 entier SI qui est la position de l'agent Skynet sur le sous-réseau (indice du nœud).
Sortie pour un tour de jeu
Une ligne unique composée de deux entiers C1 et C2 séparés par un espace. Ces deux entiers représentent les indices des deux noeuds reliés par le lien du sous-réseau à couper.
Contraintes
2 ≤ N ≤ 500
1 ≤ L ≤ 1000
1 ≤ E ≤ 20
0 ≤ N1, N2 < N
0 ≤ SI < N
0 ≤ C1, C2 < N
Temps de réponse pour un tour ≤ 150ms
SKYNET LE FINAL - NIVEAU 1
Los Angeles 2029 - QG de la Résistance - Rappel des faits :

Samedi dernier, des centaines de valeureux combattants ont risqué leur vie pour détruire Skynet. STOP

En utilisant des Moto-Terminators contaminées, ils sont parvenus à inoculer à Skynet un virus fatal. STOP

Problème: Skynet riposte. STOP

John, nous avons encore besoin de vous. STOP