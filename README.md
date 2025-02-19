# Libft

## Description
Libft est une bibliothèque personnalisée en C qui propose une collection de fonctions utilitaires couramment utilisées en programmation système et algorithmique. Elle fournit des fonctions pour manipuler les chaînes de caractères, gérer la mémoire, travailler avec des listes chaînées, et d'autres utilitaires mathématiques.

## Installation
Pour compiler et générer la bibliothèque `libft.a`, exécutez la commande suivante :

```sh
make
```

Pour nettoyer les fichiers objets et la bibliothèque compilée :

```sh
make clean   # Supprime les fichiers objets
make fclean  # Supprime les fichiers objets et l'archive
```

Pour recompiler complètement la bibliothèque :

```sh
make re
```

## Contenu de la bibliothèque
### Fonctions de manipulation de mémoire
- `ft_memset`  : Remplit un bloc mémoire avec une valeur spécifique.
- `ft_bzero`   : Met un bloc mémoire à zéro.
- `ft_memcpy`  : Copie un bloc mémoire.
- `ft_memccpy` : Copie un bloc mémoire jusqu'à une occurrence spécifique.
- `ft_memmove` : Copie un bloc mémoire en tenant compte du chevauchement.
- `ft_memchr`  : Recherche une valeur dans un bloc mémoire.
- `ft_memcmp`  : Compare deux blocs mémoire.
- `ft_calloc`  : Alloue et initialise un bloc mémoire.

### Fonctions de manipulation de chaînes de caractères
- `ft_strlen`   : Calcule la longueur d'une chaîne de caractères.
- `ft_strdup`   : Duplique une chaîne de caractères.
- `ft_strchr`   : Recherche un caractère dans une chaîne.
- `ft_strrchr`  : Recherche un caractère dans une chaîne en partant de la fin.
- `ft_strncmp`  : Compare deux chaînes sur un nombre limité de caractères.

### Fonctions de conversion
- `ft_atoi` : Convertit une chaîne en entier.
- `ft_itoa` : Convertit un entier en chaîne.

### Fonctions de vérification de caractères
- `ft_isalpha`  : Vérifie si un caractère est alphabétique.
- `ft_isdigit`  : Vérifie si un caractère est un chiffre.
- `ft_isalnum`  : Vérifie si un caractère est alphanumérique.
- `ft_isascii`  : Vérifie si un caractère appartient à l'ASCII.
- `ft_isprint`  : Vérifie si un caractère est imprimable.
- `ft_isspace`  : Vérifie si un caractère est un espace.
- `ft_toupper`  : Convertit un caractère en majuscule.
- `ft_tolower`  : Convertit un caractère en minuscule.

### Fonctions d'affichage sur un descripteur de fichier
- `ft_putchar_fd` : Écrit un caractère sur un descripteur de fichier.
- `ft_putstr_fd`  : Écrit une chaîne de caractères sur un descripteur de fichier.
- `ft_putendl_fd` : Écrit une chaîne suivie d'un retour à la ligne.
- `ft_putnbr_fd`  : Écrit un nombre sur un descripteur de fichier.

### Fonctions de manipulation de listes chaînées
- `ft_lstnew`       : Crée un nouvel élément de liste.
- `ft_lstadd_front` : Ajoute un élément au début de la liste.
- `ft_lstsize`      : Retourne la taille de la liste.
- `ft_lstlast`      : Retourne le dernier élément de la liste.
- `ft_lstadd_back`  : Ajoute un élément à la fin de la liste.
- `ft_lstdelone`    : Supprime un élément de la liste.
- `ft_lstclear`     : Supprime tous les éléments de la liste.
- `ft_lstiter`      : Applique une fonction à chaque élément de la liste.
- `ft_lstmap`       : Applique une fonction à chaque élément et crée une nouvelle liste.

### Fonctions utilitaires
- `ft_abs`       : Retourne la valeur absolue d'un nombre.
- `ft_max`       : Retourne le maximum de deux nombres.
- `ft_min`       : Retourne le minimum de deux nombres.
- `ft_swap`      : Échange deux valeurs.
- `ft_power`     : Calcule une puissance d'un nombre.
- `ft_factorial` : Calcule la factorielle d'un nombre.
- `ft_sqrt`      : Calcule la racine carrée d'un nombre entier.

## Linting et vérification du code
Une analyse statique du code peut être effectuée avec `cppcheck`. Pour exécuter cette vérification :

```sh
make lint
```

Les résultats sont enregistrés dans `log/lint_errors.log`.

## Contact
Développé par `skydogzz` et `tstephan`.

Si vous avez des suggestions ou des améliorations, n'hésitez pas à ouvrir une issue ou à proposer une pull request !

