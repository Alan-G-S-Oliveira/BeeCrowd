#include <algorithm>
#include <cmath>
#include <iostream>
#include <set>
#include <vector>

long long custom_gcd(long long a, long long b) {
  while (b) {
    a %= b;
    std::swap(a, b);
  }
  return a;
}

std::vector<long long> get_distinct_prime_factors(long long n) {
  std::set<long long> factors_set;
  long long temp_n = n;

  if (temp_n <= 1) {
    return {};
  }

  if (temp_n % 2 == 0) {
    factors_set.insert(2);
    while (temp_n % 2 == 0) {
      temp_n /= 2;
    }
  }

  for (long long d = 3; d * d <= temp_n; d += 2) {
    if (temp_n % d == 0) {
      factors_set.insert(d);
      while (temp_n % d == 0) {
        temp_n /= d;
      }
    }
  }

  if (temp_n > 1) {
    factors_set.insert(temp_n);
  }

  std::vector<long long> factors_vec(factors_set.begin(), factors_set.end());
  return factors_vec;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  long long y_param, k_param;
  std::cin >> y_param >> k_param;

  long long current_x = 1;
  long long remaining_k = k_param;

  std::vector<long long> prime_factors_of_y =
      get_distinct_prime_factors(y_param);

  while (remaining_k > 0) {
    long long common_divisor = custom_gcd(current_x, y_param);

    if (common_divisor == y_param) {
      current_x += remaining_k * y_param;
      remaining_k = 0;
      break;
    }

    long long x_divided_by_gcd = current_x / common_divisor;
    long long y_divided_by_gcd = y_param / common_divisor;

    long long min_s_to_change_gcd = remaining_k + 1;

    for (long long p : prime_factors_of_y) {
      if (y_divided_by_gcd % p == 0) {
        long long remainder_x_mod_p = x_divided_by_gcd % p;
        long long steps_to_hit_multiple_of_p = p - remainder_x_mod_p;
        min_s_to_change_gcd =
            std::min(min_s_to_change_gcd, steps_to_hit_multiple_of_p);
      }
    }

    long long num_steps_this_iteration =
        std::min(min_s_to_change_gcd, remaining_k);

    current_x += num_steps_this_iteration * common_divisor;
    remaining_k -= num_steps_this_iteration;
  }

  std::cout << current_x << std::endl;

  return 0;
}