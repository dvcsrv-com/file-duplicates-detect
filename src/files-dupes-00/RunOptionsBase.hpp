#pragma once

#include <string>
#include <string_view>

namespace dvcs::app {

  class RunOptionsBase {
    private:
      std::wstring _app_name;
      int _target_folder;
    public:
      std::wstring getAppName() const {
        return this->_app_name;
      }

      int getTargetFolder() const {
        return this->_target_folder;
      }
  };

} // namespace dvcs::app
