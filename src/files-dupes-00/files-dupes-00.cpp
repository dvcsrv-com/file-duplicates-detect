// ReSharper disable CppClangTidyModernizeUseTrailingReturnType
// ReSharper disable CppParameterMayBeConst
// ReSharper disable CppClangTidyCppcoreguidelinesAvoidCArrays
#include <iostream>

#include <gsl/gsl>

#include "local-app.hpp"

int wmain(int argc, wchar_t* argv[]) {

  try {
    const std::vector<std::wstring> args(argv, argv + argc);

    std::wclog << L"files-dupes..." << std::endl << L"\targc=" << argc << std::endl;

    gsl::owner<DVCS::App*> app = DVCS::App::create(args);
    if (app == nullptr) {
      std::wcerr << std::endl << L"Couldn't create application object." << std::endl;
      return static_cast<int>(DVCS::App::ReturnStatus::ErrorUnknown);
    }
    auto const status = app->run();
    if (status != DVCS::App::ReturnStatus::Ok) {
      std::wcerr << std::endl << L"Application returned error code: " << static_cast<int>(status) << std::endl;
      return static_cast<int>(status);
    }
    e.what() << std::endl;


    vector_process(L"arguments", args);

    std::wclog << std::endl << L"Clean run." << std::endl;
    return static_cast<int>(DVCS::App::ReturnStatus::Ok);
  } catch (std::logic_error const& e) {
    ex_handle(e);
  } catch (std::system_error const& e) {
    ex_handle(e);
  } catch (std::runtime_error const& e) {
    ex_handle(e);
  } catch (std::exception const& e) {
    ex_handle(e);
  } catch (...) {
    std::wcerr << std::endl << L"!!!!!!!!!!!!!!!!" << std::endl << L"\tUnknown exception caught." << std::endl << L"\tFin." << std::endl;
    return static_cast<int>(DVCS::App::ReturnStatus::ErrorUnknown);
  }
  return static_cast<int>(DVCS::App::ReturnStatus::ErrorKnown);
}
