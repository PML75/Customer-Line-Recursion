#include <memory>
#include <string>

class Customer {
 public:

  Customer(const std::string& cName, int pCount, std::shared_ptr<Customer> next_customer) : name_(cName), product_count_(pCount), next_customer_(next_customer) {}
  std::string GetName();
  int GetProductCount();
  std::shared_ptr<Customer> GetNextCustomer();
  int TotalCustomersInLine();
  int TotalProductsInLine();
  std::string FirstAlphabeticalCustomerInLine();

 private:
  std::string name_;
  int product_count_;
  std::shared_ptr<Customer> next_customer_;
};
