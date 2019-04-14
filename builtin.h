void shell_cd(int argc, char* argv[]);
void shell_ls(int argc, char* argv[]);
// void shell_cat(int argc, char* argv[]);
// void shell_chmod(int argc, char* argv[]);
// void shell_mkdir(int argc, char* argv[]);
// void shell_rmdir(int argc, char* argv[]);
// void shell_rm(int argc, char* argv[]);
void shell_exit(int argc, char* argv[]);
// void shell_fg(int argc, char* argv[]);
// void shell_bg(int argc, char* argv[]);
// void shell_kill(int argc, char* argv[]);
// void shell_pwd(int argc, char* argv[]);
// void shell_ps(int argc, char* argv[]);
// void shell_job(int argc, char* argv[]);
// void shell_history(int argc, char* argv[]);
// void shell_clear(int argc, char* argv[]);
// void shell_help(int argc, char* argv[]);

int size_built;

struct command {
  char *command;
  void (*shell_command)(int argc, char* argv[]);
};

extern struct command built[100];


static void do_ls(char* path);
