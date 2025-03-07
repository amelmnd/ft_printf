<h1 align="center">
ft_printf
</h1>
<p align="center">
<img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white" />
</p>

- [Description](#description)
- [Structure du projet](#structure-du-projet)
  - [Fichiers .c](#fichiers-c)
  - [.h (En-tête)](#h-en-tête)
  - [Makefile](#makefile)
- [La fonction](#la-fonction)
- [Utilisation de ft_printf](#utilisation-de-ft_printf)
  - [Pré-requis](#pre-requis)
  - [Compilation](#compilation)
  - [Utilisation](#utilisation)
- [Test](#test)

## Description

Le but de ce projet est de recoder printf() pour apprendre à se servir d’un nombre d’arguments variable (notion de fonction variadique). Ce projet servira de printf utilisable dans tous les projets suivants.

## Structure du projet
### Fichiers .c

La fonction ft_printf.

### .h (En-tête)

Inclure `#include "ft_printf.h"` dans tous les fichiers .c afin d’avoir accès aux fonctions incluses partout.

### Makefile

Makefile, fichier permettant de compiler le projet.

## La fonction
Les différents paramètres possibles de la fonction sont les suivants :
- %c : affiche 1 caractère.
- %s : affiche une chaîne de caractères.
- %d : affiche un nombre en base décimale (base 10).
- %i : affiche un nombre entier (base 10).
- %u : affiche un nombre décimal non signé (base 10).
- %x : affiche un nombre hexadécimal avec les lettres en minuscules (base 16).
- %X : affiche un nombre hexadécimal avec les lettres en majuscules (base 16).
- %p : affiche l'adresse d'un pointeur (argument de pointeur void * en hexadécimal).

## Utilisation de ft_printf

### Pre-requis

* **compilateur `gcc`**

### Compilation
```shell
make
```
- Création de la fonction pour l'utiliser dans un projet.

```shell
make compil
```
- Compilation et exécution de la fonction pour tester, nécessite un main (présent ici).

### Utilisation

- Gérer le fichier de lib `.a` :
Dans le terminal, au niveau du dossier ft_printf, lancer la commande `make`.

- Utiliser la fonction ft_printf dans son projet :

Ajouter le dossier de la fonction dans le projet puis ajoutr l'include dans le fichier d'en-tête principal

```C
#include "ft_printf/ft_printf.h"
```

## Test
La francinette
- [ xicodomingues/francinette ](https://github.com/xicodomingues/francinette/)