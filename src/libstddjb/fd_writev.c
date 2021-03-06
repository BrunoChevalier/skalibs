/* ISC license. */

#include <sys/types.h>
#include <sys/uio.h>
#include <errno.h>
#include <skalibs/allreadwrite.h>

int fd_writev (int fd, struct iovec const *v, unsigned int vlen)
{
  register int r ;
  do r = writev(fd, v, vlen) ;
  while ((r == -1) && (errno == EINTR)) ;
  return r ;
}
