#include <stdio.h>

int main() {
  // Set text color to bold magenta
  printf("\033[1;35m");

  // ASCII art of a cat
  printf("                                              .\"\"\"-.\n");
  printf("                                             /      \\\n");
  printf("  ____  _               _            _       |  _..--'-.\n");
  printf(" / ___|| |__   ___ _ __| | ___   ___| |__   >.`___.-\"\"\\;\"`\n");
  printf(" \\___ \\| '_ \\ / _ \\ '__| |/ _ \\ / __| |/ /   / /(     ^\\\n");
  printf("  ___) | | | |  __/ |  | | (_) | (__|   <    '-`)     =|-. \n");
  printf(" |____/|_| |_|\\___|_|  |_|\\___/ \\___|_|\\_\\    /`--.'--'   \\ .-.\n");
  printf("                                             .'`-._  .\\    | J /\n");
  printf("                                            /      `--.|   \\__/\n");

  // Reset text color to default
  printf("\033[0m");

  return 0;
}