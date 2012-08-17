
template <typename T>
class PointeurIntelligent{
    T* operator->() const;
    T& operator*() const;
};
