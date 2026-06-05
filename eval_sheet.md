# Scale for project CPP Module 02
*You should evaluate 1 student in this team*

---

## 📋 Introduction & Guidelines

### Règles de conduite
* **Respect & Constructivité :** Restez polis, courtois, respectueux et constructifs pendant le processus d'évaluation. Le bien-être de la communauté repose là-dessus.
* **Identification des problèmes :** Identifiez avec la personne évaluée les éventuels dysfonctionnements de son travail. Prenez le temps d'en discuter et débattez des problèmes identifiés.
* **Esprit ouvert :** Prenez en compte qu'il peut y avoir de légères différences d'interprétation entre les instructions du projet, son scope et ses fonctionnalités. Notez de la manière la plus honnête possible.

### Consignes d'évaluation
* **Dépôt Git :** Ne notez **que** ce qui est contenu dans le dépôt Git cloné. Vérifiez que le dépôt appartient bien à l'étudiant(e), que le projet est celui attendu, et que `git clone` est utilisé dans un dossier vide.
* **Vérification des alias :** Vérifiez scrupuleusement qu'aucun alias n'a été utilisé pour vous tromper et assurez-vous que vous évaluez bien le rendu officiel.
* **Scripts d'évaluation :** Afin d'éviter toute surprise, vérifiez avec l'étudiant(e) les potentiels scripts utilisés pour faciliter l'évaluation (tests, automatisation).
* **Connaissance du sujet :** Si vous n'avez pas fait le projet, vous **devez** lire le sujet en entier avant de commencer.
* **Flags d'erreur :** Utilisez les flags disponibles pour signaler un rendu vide, un programme ne fonctionnant pas, une erreur de Norme, ou de la triche. Dans ces cas, la note est **0** (ou **-42** pour la triche). Continuez tout de même la discussion (sauf pour la triche) pour aider l'étudiant à progresser.
* **Fichiers de configuration :** Vous ne devriez jamais avoir à les modifier. Si vous souhaitez éditer un fichier, expliquez pourquoi et obtenez l'accord de l'étudiant.
* **Fuites mémoire :** Toute mémoire allouée sur le tas (`new`) doit être libérée proprement (`delete`). Vous avez le droit d'utiliser `leaks`, `valgrind` ou `e_fence`. En cas de fuite, cochez le flag approprié.

> 📎 **Attachments :** `subject.pdf`

---

## ⚠️ Tests préliminaires

> 🚨 **Triche :** Si un cas de triche est suspecté, la notation et l'évaluation prennent fin immédiatement. Sélectionnez le flag **"Cheat"**. Utilisez-le avec calme, précaution et discernement.

### Prérequis de compilation
* Le code doit compiler avec `c++` et les flags `-Wall -Wextra -Werror`.
* **Standard C++98 :** Les fonctions C++11 (ou standard ultérieur) et les containers de la STL ne sont **PAS** attendus.

### 🛑 Critères éliminatoires (Ne notez pas l'exercice si vous trouvez) :
* Une fonction implémentée dans un fichier d'en-tête (sauf pour les fonctions templates).
* Un Makefile compilant sans les flags demandés et/ou avec autre chose que `c++`.

### 🚩 Flag "Fonction interdite" (Forbidden function) :
Sélectionnez ce flag si vous rencontrez :
* L'utilisation d'une fonction "C" (`*alloc`, `*printf`, `free`).
* L'utilisation d'une fonction interdite dans le projet.
* L'utilisation de `using namespace <ns_name>` ou du mot-clé `friend`.
* L'utilisation d'une bibliothèque externe, ou de fonctionnalités propres aux versions postérieures à C++98.

---

## 🛠️ Exercice 00 : Mon premier canon
*Cet exercice introduit la notion de classe canonique avec un exercice arithmétique simple : les nombres à point fixe.*

| Critère | Description | Validation |
| :--- | :--- | :---: |
| **Makefile** | Il y a un Makefile qui compile en utilisant les flags appropriés. | [ ] Yes <br> [ ] No |
| **Accesseurs** | La classe `Fixed` (ou autre) doit avoir des accesseurs pour la valeur brute :<br>• `int getRawBits( void ) const;`<br>• `void setRawBits( int const raw );`<br>*Ces membres sont-ils présents et fonctionnels ?* | [ ] Yes <br> [ ] No |
| **Classe canonique** | Une classe canonique doit avoir au moins :<br>• Un constructeur par défaut<br>• Un destructeur<br>• Un constructeur par recopie<br>• Un opérateur d'affectation<br>*Ces éléments sont-ils présents et fonctionnels ?* | [ ] Yes <br> [ ] No |

---

## 🛠️ Exercice 01 : Premiers pas vers une classe utile
*L'exercice précédent était un bon premier pas. Cependant, la classe était peu utile puisqu'elle ne permettait de représenter que la valeur 0.0.*

| Critère | Description | Validation |
| :--- | :--- | :---: |
| **Makefile** | Il y a un Makefile qui compile en utilisant les flags appropriés. | [ ] Yes <br> [ ] No |
| **Constructeur (Float)** | Peut-on construire une instance à partir d'un nombre flottant ? | [ ] Yes <br> [ ] No |
| **Constructeur (Int)** | Peut-on instancier la classe avec le constructeur prenant un `int` ? | [ ] Yes <br> [ ] No |
| **Opérateur `<<`** | Y a-t-il un opérateur `<<` (insertion) et est-il fonctionnel ? | [ ] Yes <br> [ ] No |
| **Conversion vers entier** | La classe inclut-elle `int toInt(void) const;` pour convertir le point fixe en `int` ?<br>*Est-elle présente et fonctionnelle ?* | [ ] Yes <br> [ ] No |
| **Conversion vers float** | La classe inclut-elle `float toFloat(void) const;` pour convertir le point fixe en `float` ?<br>*Est-elle présente et fonctionnelle ?* | [ ] Yes <br> [ ] No |

---

## 🛠️ Exercice 02 : Maintenant, on peut parler
*Cet exercice ajoute les opérateurs de comparaison et arithmétiques à la classe.*

| Critère | Description | Validation |
| :--- | :--- | :---: |
| **Makefile** | Il y a un Makefile qui compile en utilisant les flags appropriés. | [ ] Yes <br> [ ] No |
| **Comparaison** | Les 6 opérateurs de comparaison (`>`, `<`, `>=`, `<=`, `==` et `!=`) sont-ils présents et fonctionnels ? | [ ] Yes <br> [ ] No |
| **Arithmétique** | Les 4 opérateurs arithmétiques (`+`, `-`, `*` et `/`) sont-ils présents et fonctionnels ?<br>*(Note : En cas de division par 0, il est acceptable que le programme crash.)* | [ ] Yes <br> [ ] No |
| **Incrémentation** | Les 4 opérateurs d'incrémentation/décrémentation (pré/post) sont-ils présents et fonctionnels ? | [ ] Yes <br> [ ] No |
| **Fonctions statiques** | Les fonctions membres statiques publiques `min()` et `max()` sont-elles implémentées et fonctionnelles ? | [ ] Yes <br> [ ] No |

---

## 🛠️ Exercice 03 : BSP
*Cet exercice devrait vous faire réaliser à quel point il est facile de mettre en œuvre des algorithmes complexes une fois que les bases fonctionnent comme prévu.*

| Critère | Description | Validation |
| :--- | :--- | :---: |
| **Makefile** | Il y a un Makefile qui compile en utilisant les flags appropriés. | [ ] Yes <br> [ ] No |
| **Classe `Point`** | Il existe une classe `Point` qui possède deux attributs (`x` et `y`) de type `Fixed const`.<br>Elle possède un constructeur prenant deux flottants pour initialiser `x` et `y`. | [ ] Yes <br> [ ] No |
| **Fonction `bsp`** | La fonction `bsp()` existe avec le prototype :<br>`bool bsp( Point const a, Point const b, Point const c, Point const point)`<br>Elle renvoie `True` si le point est **strictement à l'intérieur** du triangle (`a`, `b`, `c`). Sinon, `False`. | [ ] Yes <br> [ ] No |
| **Main et tests** | Il y a un `main` pour tester la fonction `bsp()`.<br>*Exécutez plusieurs tests (intérieur, extérieur, sur les bords/sommets) pour vous assurer que la valeur de retour est correcte.* | [ ] Yes <br> [ ] No |
