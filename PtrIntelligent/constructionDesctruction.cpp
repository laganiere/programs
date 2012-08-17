template <typename T>
class PointeurIntelligent {

        private :
                // le pointeur régulier
                T *ptr;

        public :
                // initialisation (par défaut à 0)
                PointeurIntelligent(T* ptr =0);
                // destruction
                ~PointeurIntelligent();
                // libération de la mémoire

};

//  * operator!
//  * conversion (get)
// vérifier objet temporaire non const
