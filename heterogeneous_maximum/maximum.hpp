template <typename T, typename U>
decltype(auto) maximum(const T &a, const U &b) {
	return a > b ? a : b;	
}