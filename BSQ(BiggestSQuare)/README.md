Félicitations pour la validation de ton BSQ ! 🎉 Voici un exemple de README.md clair et structuré pour ton dépôt GitHub :

⸻

🟫 BSQ - Biggest Square Finder

📌 Présentation

BSQ (Biggest Square) est un projet réalisé dans le cadre de la piscine 42.
Il consiste à lire une carte composée d’obstacles et d’espaces vides, et à trouver le plus grand carré vide possible, puis à le afficher sur la carte en le remplissant avec un caractère dédié.

⸻

🧠 Objectif
    •    Lire une map depuis un fichier ou l’entrée standard
    •    Traiter cette map pour détecter le plus grand carré possible sans obstacle
    •    Afficher la carte avec le carré rempli par le caractère full

⸻

🛠️ Fonctionnalités
    •    ✅ Lecture depuis l’entrée standard (stdin)
    •    ✅ Lecture depuis plusieurs fichiers
    •    ✅ Vérification de l’intégrité du fichier (ligne incorrecte, caractères invalides, tailles incohérentes…)
    •    ✅ Implémentation de l’algorithme via programmation dynamique
    •    ✅ Affichage final avec le plus grand carré rempli
    •    ✅ Gestion mémoire rigoureuse (pas de fuites)
    •    ✅ Aucune boucle for utilisée (règle 42 respectée)

⸻

🔎 Algorithme utilisé

Le projet utilise une approche en programmation dynamique :
    •    Deux tableaux (prev et curr) sont utilisés pour simuler la matrice ligne par ligne, en stockant pour chaque cellule la taille du plus grand carré dont elle est le coin inférieur droit.
    •    À chaque ligne, on met à jour les valeurs de curr selon les valeurs de la ligne précédente (prev) :

curr[x] = 1 + min(prev[x], curr[x - 1], prev[x - 1]);


    •    Si un obstacle est rencontré, curr[x] = 0.

Cette méthode permet de ne conserver que deux lignes en mémoire à la fois, optimisant l’espace tout en maintenant une complexité temporelle en O(n * m).

⸻

🧪 Génération de maps de test

Un script Perl (fourni ou à écrire comme ci-dessous) permet de générer automatiquement des cartes :

perl generate_map.pl 20 40 30 > map1.txt

    •    20 : hauteur
    •    40 : largeur
    •    30 : pourcentage d’obstacles (o)

Ce script est idéal pour tester le programme à grande échelle, avec des cartes aléatoires.

⸻

📥 Exemple d’utilisation

$ ./bsq map1.txt

Ou bien :

$ cat map1.txt | ./bsq


⸻

📚 Exemple de map

9.ox
..........
..o.......
..........
.....o....
..........
..........
..o.......
..........
..........

Sortie possible :

..........
..o.......
...xxx....
...xxx....
...xox....
..........
..o.......
..........
..........


⸻

⚠️ Particularités 42
    •    Projet codé uniquement en C
    •    Aucun appel système interdit (malloc, open, read, etc.)
    •    Interdiction des fonctions for, do…while, goto, switch
    •    Code lisible, normé et segmenté en fichiers clairs (map.c, solve.c, utils.c, main.c, etc.)

⸻

🧹 Nettoyage & Compilation

Compilation :

make

Nettoyage :

make clean
make fclean


⸻

🧑‍💻 Auteur

Projet réalisé dans le cadre de la piscine 42.
Développé par [Ryan Delépine et Raphaël Destruhaut].

⸻

