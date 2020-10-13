#include <greeter/greeter.h>

using namespace greeter;

Greeter::Greeter(std::string _name) : name(_name) {}

std::string Greeter::greet(LanguageCode lang) const {
  switch (lang) {
    default:
    case LanguageCode::EN:
      return "Hello, " + name + "!";
    case LanguageCode::DE:
      return "Hallo " + name + "!";
    case LanguageCode::ES:
      return "¡Hola " + name + "!";
    case LanguageCode::FR:
      return "Bonjour " + name + "!";
    case LanguageCode::CN:
      return "你好 " + name + "!";
  }
}
