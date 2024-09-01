#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"

void __print(int x) {std::cerr << YELLOW << x << RESET;}
void __print(long x) {std::cerr << YELLOW << x << RESET;}
void __print(long long x) {std::cerr << YELLOW << x << RESET;}
void __print(unsigned x) {std::cerr << YELLOW << x << RESET;}
void __print(unsigned long x) {std::cerr << YELLOW << x << RESET;}
void __print(unsigned long long x) {std::cerr << YELLOW << x << RESET;}
void __print(float x) {std::cerr << GREEN << x << RESET;}
void __print(double x) {std::cerr << GREEN << x << RESET;}
void __print(long double x) {std::cerr << GREEN << x << RESET;}
void __print(char x) {std::cerr << RED << '\'' << x << '\'' << RESET;}
void __print(const char *x) {std::cerr << MAGENTA << '\"' << x << '\"' << RESET;}
void __print(const std::string &x) {std::cerr << MAGENTA << '\"' << x << '\"' << RESET;}
void __print(bool x) {std::cerr << CYAN << (x ? "true" : "false") << RESET;}

template<typename T, typename V>
void __print(const std::pair<T, V> &x) {
    std::cerr << BLUE << '{';
    __print(x.first);
    std::cerr << ',';
    __print(x.second);
    std::cerr << '}' << RESET;
}
template<typename T>
void __print(const T &x) {
    int f = 0;
    std::cerr << BLUE << '{';
    for (auto &i: x)
        std::cerr << (f++ ? "," : ""), __print(i);
    std::cerr << '}' << RESET;
}
void _print() {std::cerr << "\n";}
template <typename T, typename... V>
void _print(T t, V... v) {
    __print(t);
    if (sizeof...(v))
        std::cerr << ", ";
    _print(v...);
}

#ifdef LOCAL
#define debug(x...) std::cerr << "[" << #x << "]: "; _print(x)
#else
#define debug(x...)
#endif
