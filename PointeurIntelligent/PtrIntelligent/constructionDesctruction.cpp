template <typename T>
class PointeurIntelligent{

        private :
                T *ptr;				// le pointeur régulier

        public :
                PointeurIntelligent(T* ptr =0); // initialisation (par défaut à 0)
                ~PointeurIntelligent();		// destruction?
                                                // libération de la mémoire?
//  * operator!
//  * conversion (get)
// vérifier objet temporaire non const

