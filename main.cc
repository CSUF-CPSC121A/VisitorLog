#include <iostream>
#include "visitorlog.h"
#include "volunteer.h"
#include "pantryreporter.h"


int main() {
  Volunteer tuffy("Tuffy");
  PantryReporter reporter("Fullerton");
  std::shared_ptr<VisitorLog> logger 
      = std::make_shared<VisitorLog>();
    
  tuffy.AssignLogger(logger);
  reporter.AssignLogger(logger);
  
  tuffy.Log(1123);
  tuffy.Log(1124);
  tuffy.Log(1126);

  reporter.Report();
 
  return 0;
}