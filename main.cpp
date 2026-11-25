#include <string>
#include <vector>

void count_zeros() {
    int n = 102030;
    int zeros = 0;
    while (n > 0) { if (n % 10 == 0) zeros += 1; n /= 10; }
    (void)zeros;
}

void reverse_text() {
    std::string text = "signal";
    std::string rev;
    for (std::size_t i = text.size(); i > 0; --i) rev += text[i - 1];
    (void)rev;
}

extern "C" int cedar_meadow();
extern "C" void lunar_kite();
extern "C" void vivid_orbit();

int main() {
    count_zeros();
    reverse_text();
    lunar_kite();
    vivid_orbit();
    return cedar_meadow();
}
