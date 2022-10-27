#include <algorithm>
#include <iostream>
#include <memory>
#include <vector>

class VisitorLog {
 public:
  void Log(int cwid) {
    visitor_cwids_.push_back(cwid);
  }
  int TotalVisitors() { return visitor_cwids_.size(); }
  void DisplayLog() {
    int counter = 1;
    for (std::vector<int>::iterator 
         it = visitor_cwids_.begin(); 
         it != visitor_cwids_.end(); 
         it++) {
      std::cout << counter << ". " << *it << "\n";
      counter++;
    }
  }
  void Remove(int index) {
    visitor_cwids_.erase(visitor_cwids_.begin() + index);
  }
  bool Visited(int cwid) {
    std::vector<int>::iterator it
        = std::find(visitor_cwids_.begin(), 
                    visitor_cwids_.end(), cwid);
    return it != visitor_cwids_.end();
  }
 private:
  std::vector<int> visitor_cwids_;   
};