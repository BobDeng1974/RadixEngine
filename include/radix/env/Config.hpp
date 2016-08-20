#ifndef RADIX_CONFIG_HPP
#define RADIX_CONFIG_HPP

#include <string>

namespace radix {

class Config {
public:
  void load();
  unsigned int getWidth() { return width; }
  unsigned int getHeight() { return height; }
  float getSensitivity() { return sensitivity; }
  bool isFullscreen() { return fullscreen; }
  int getAntialiasLevel() { return antialiasing; }
  int getRecursionLevel() { return recursive_portal; }
  bool hasSound() { return sound; }
  bool hasVsync() { return vsync; }
  bool isHidePortalsByClick() { return hide_portals_by_click; }
  
  std::string map;
  std::string mapPath;
  bool cursorVisibility;
private:
  unsigned int width;
  unsigned int height;
  float sensitivity;
  int antialiasing;
  int recursive_portal;
  bool fullscreen;
  bool sound;
  bool vsync;
  bool hide_portals_by_click;
};

} /* namespace radix */

#endif /* RADIX_CONFIG_HPP */
