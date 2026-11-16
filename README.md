# push_swap

*Ce projet a été réalisé dans le cadre du cursus de l'école 42.*

## Description

**push_swap** est un programme de tri qui prend en argument une liste d'entiers et affiche la **plus courte suite d'instructions** permettant de la trier à l'aide de deux piles (`a` et `b`) et d'un ensemble limité d'opérations.

L'objectif est de comprendre les algorithmes de tri, la complexité algorithmique, la manipulation de structures de données (piles, listes chaînées) et l'optimisation du nombre de coups.

## Prototype

```bash
./push_swap 3 2 5 1 4
```

Le programme affiche sur la sortie standard la liste des opérations à effectuer, une par ligne.

## Opérations

| Opération | Description |
|-----------|-------------|
| `sa` | Échange les deux premiers éléments de la pile `a` |
| `sb` | Échange les deux premiers éléments de la pile `b` |
| `ss` | Exécute `sa` et `sb` en même temps |
| `pa` | Place le premier élément de `b` au sommet de `a` |
| `pb` | Place le premier élément de `a` au sommet de `b` |
| `ra` | Décale tous les éléments de `a` vers le haut (le premier devient le dernier) |
| `rb` | Décale tous les éléments de `b` vers le haut (le premier devient le dernier) |
| `rr` | Exécute `ra` et `rb` en même temps |
| `rra` | Décale tous les éléments de `a` vers le bas (le dernier devient le premier) |
| `rrb` | Décale tous les éléments de `b` vers le bas (le dernier devient le premier) |
| `rrr` | Exécute `rra` et `rrb` en même temps |

## Fonctionnement

| Étape | Description |
|-------|-------------|
| Parsing | Vérifie les arguments (entiers valides, pas de doublons, pas de dépassement) |
| Indexation | Associe à chaque nombre son rang dans la liste triée |
| Petites piles | Tri dédié pour 2, 3 et 5 éléments |
| Grandes piles | Algorithme optimisé pour trier un grand nombre d'éléments |
| Sortie | Affiche la liste des opérations utilisées |

## Fonctions autorisées

| Fonction | Rôle |
|----------|------|
| `read`, `write` | Lit et écrit dans un descripteur de fichier |
| `malloc`, `free` | Alloue et libère la mémoire |
| `exit` | Quitte le programme |
| `ft_printf` | Affichage formaté (version personnelle) |

## Compilation

```bash
make        # compile le programme push_swap
make clean  # supprime les fichiers objets
make fclean # supprime les objets et l'exécutable push_swap
make re     # recompile entièrement
```

## Utilisation

Lancer le programme avec une liste d'entiers :

```bash
./push_swap 3 2 5 1 4
```

Compter le nombre d'opérations générées :

```bash
./push_swap 3 2 5 1 4 | wc -l
```

Utiliser une liste aléatoire de 100 nombres :

```bash
ARG=$(shuf -i 1-1000 -n 100 | tr '\n' ' '); ./push_swap $ARG | wc -l
```

## Normes

- Respect de la **Norme** de 42
- Compilation avec `-Wall -Wextra -Werror`
- Aucune fuite mémoire
- Affichage de `Error` sur la sortie d'erreur en cas d'argument invalide

## Auteur

@prsadamm
