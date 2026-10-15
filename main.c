// Partie coder en C 
// Le range et les dossiers d'infectation sont : /tmp/test et /tmp/test2 OU equivalent systeme cible
// Seul les systeme 64 bits 



int main(int argc, char **argv)
{
    // Etape 1 verfications du systeme si bien en 64 bits 

    // Etape 2 Trouver le /tmp/test et le /tmp/test2 -> Rien = Return mais pas de message console afin de rester discret

    // Etape 3 Iterer de facon recurcive sur tout le contenu de /tmp/test et /tmp/test2 
        // Etape 3.1 Lecture de l'en tête du fichier, on verifie si la signature est deja presente 
        // Etape 3.2 Preparer l'injection donc calcule de offset et voir ou l'entry point devra être et autre modification de preparation pour l'injection ELF
        // Etape 3.3 Injecter la signature 
        // Etape 3.4 Changer le entry point recaclculer 
        // Etape 3.5 Fermer le fichier et repeter pour tous les fichiers 
}