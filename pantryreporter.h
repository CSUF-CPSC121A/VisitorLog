#include <iostream> 

class PantryReporter {
 public:
  PantryReporter(const std::string &branch_name)
      : branch_name_(branch_name) { }
  PantryReporter(): branch_name_("Fullerton") { }
  void Report() {
    std::cout << "Branch name: " << branch_name_ << "\n";
    if (log_ != nullptr) {
      std::cout << "Visitors: " << log_->TotalVisitors() << "\n";
    }
  }

  void AssignLogger(std::shared_ptr<VisitorLog> log) {
    log_ = log;
  }

 private:
  std::string branch_name_;
  std::shared_ptr<VisitorLog> log_;
};