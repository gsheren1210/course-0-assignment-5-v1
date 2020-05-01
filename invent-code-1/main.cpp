#include <iostream>
#include <string>
using namespace std;


int NumberOfIngredient(const string ingr) {
    cout << "How many " << ingr << "s are in the recipe: " << endl;
    int num;
    cin >> num;
    return num;
 }

float CostOfIngredient(const string ingredient) {
    cout << "What is the price of an " << ingredient << endl;
    float price;
    cin >> price;
    float total = price * NumberOfIngredient();
    return total;
 }

int main() {
  string avocado = "avocado";
  float total_avocado = CostOfIngredient(avocado);
  string tomato = "tomato";
  float total_tomato = CostOfIngredient(tomato);
  string onion = "onions";
  float total_onion = CostOfIngredient(onion);
  string jalapeno_peppers = "jalapeno peppers";
  float total_jalapeno = CostOfIngredient(jalapeno_peppers);

  float total_cost = total_avocado
  cout << "The total cost of the recipe will be: $" << total_cost << endl;
}
