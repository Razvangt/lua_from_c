#include <stdlib.h>
// LUA LIBS
#include <lauxlib.h>
#include <lua.h>
#include <lualib.h>
int main(int argc, char *argv[]) {
  lua_State *L = luaL_newstate();
  luaL_openlibs(L);
  luaL_dofile(L, "lua/eatguy0.lua");
  lua_setglobal(L, "eatyguy");
  lua_settop(L, 0);

  // Run the init() function.
  lua_getglobal(L, "eatyguy");
  lua_getfield(L, -1, "init"); // -1 means stack top.
  lua_call(L, 0, 0);           // 0, 0 = #args, #retvals
  return EXIT_SUCCESS;
}
