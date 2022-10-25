class Volunteer {
 public:
  Volunteer(const std::string &name): name_(name) { }
  Volunteer(): name_("Anonymous") { }

  bool Log(int cwid) {
    if (log_ != nullptr) {
      log_->Log(cwid);
      return true;
    }
    return false;
  }

  void AssignLogger(std::shared_ptr<VisitorLog> log) {
    log_ = log;
  }
  
 private:
  std::string name_;
  std::shared_ptr<VisitorLog> log_;
};