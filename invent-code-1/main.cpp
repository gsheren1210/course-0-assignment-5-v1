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
    return price;
}

int main() {
  string avocado = "avocado";
  int num_avocados = NumberOfIngredient(avocado);
  float total_avocado = CostOfIngredient(avocado) * num_avocados;

  string tomato = "tomato";
  int num_tomato = NumberOfIngredient(tomato);
  float total_tomato = CostOfIngredient(tomato) * num_tomato;

  string onion = "onions";
  int num_onion = NumberOfIngredient(onion);
  float total_onion = CostOfIngredient(onion) * num_onion;

  string jalapeno_peppers = "jalapeno peppers";
  int num_jalapeno_peppers = NumberOfIngredient(jalapeno_peppers);
  float total_jalapeno = CostOfIngredient(jalapeno_peppers) * num_jalapeno_peppers;

  float total_cost = total_avocado + total_tomato + total_onion + total_jalapeno;
  cout << "The total cost of the recipe will be: $" << total_cost << endl;
}
