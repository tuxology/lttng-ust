#ifndef USTERR_H
#define USTERR_H

#define DBG(fmt, args...) fprintf(stderr, fmt "\n", ## args)
#define WARN(fmt, args...) fprintf(stderr, "usertrace: WARNING: " fmt "\n", ## args)
#define ERR(fmt, args...) fprintf(stderr, "usertrace: ERROR: " fmt "\n", ## args)
#define PERROR(call) perror("usertrace: ERROR: " call)

#define BUG_ON(condition) do { if (unlikely(condition)) ERR("condition not respected (BUG)"); } while(0)
#define WARN_ON(condition) do { if (unlikely(condition)) WARN("condition not respected"); } while(0)

#endif /* USTERR_H */
