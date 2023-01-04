#include "customer.h"

std::string Customer::GetName()
{
  return name_;
}
int Customer::GetProductCount()
{
  return product_count_;
}
std::shared_ptr<Customer> Customer::GetNextCustomer()
{
    return next_customer_;
}
int Customer::TotalCustomersInLine()
{
  if (next_customer_ == nullptr)
  {
    return 1;
  }
  else
  {
    return 1 + next_customer_->TotalCustomersInLine();
  }
}
int Customer::TotalProductsInLine()
{
  if (next_customer_ == nullptr)
  {
    return product_count_;
  }
  else
  {
    return product_count_ + next_customer_->TotalProductsInLine();
  }
}
std::string Customer::FirstAlphabeticalCustomerInLine()
{
  if (next_customer_ == nullptr)
  {
    return name_;
  }
  else
  {
    std::string other_name_ = next_customer_-> FirstAlphabeticalCustomerInLine();
    if(other_name_ < name_)
    {
      return other_name_;
    }
    else
    {
      return name_;
    }
  }
}
