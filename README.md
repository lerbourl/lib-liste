# Un fichier `liste` pour les gouverner TOUS !

Louis Lerbourg

## Liste pour élément abstraits

Cette structure de liste prend dans son champs valeur des `void*`. Ainsi, on peut passer en paramètre toute structure, représentée par son pointeur. La forme que prendra l'élément est plus ou moins formatée, voir par exemple l'élément "arc". Il faudra penser à écrire la fonction de suppression et d'affichage de l'élément afin de pouvoir les passer en paramètre des fonction `liste_print` et `liste_del`.

## How to get started

### Installation

```
git clone https://github.com/lerbourl/lib-liste.git
```

### Compilation

Vous êtes invités à ajouter vos propres règles dans le makefile pour utiliser les fichiers d'éléments voulus. `make` pour compiler, `./bin` pour exécuter.

## Eléments

Vous êtes invités à créer vos propres éléments, ou à utiliser les arcs, les structure pour le hachage et les doubles.
