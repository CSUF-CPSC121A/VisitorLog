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
  bool Visited(int cwid) {
    std::vector<int>::iterator it
        = std::find(visitor_cwids_.begin(), 
                    visitor_cwids_.end(), cwid);
    return it != visitor_cwids_.end();
  }
  void DisplayLog() {
    int counter = 1;
    for (int cwid : visitor_cwids_) {
      std::cout << counter << ". " << cwid << "\n";
      counter++;
    }
  }
  void Remove(int index) {
    visitor_cwids_.erase(visitor_cwids_.begin() + index);
  }

 private:
  std::vector<int> visitor_cwids_;   
};