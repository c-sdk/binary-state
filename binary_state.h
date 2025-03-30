#ifndef _BINARY_STATE_H_
#define _BINARY_STATE_H_ 1

enum binary_state_t {
  BINARY_OFF = 0,
  BINARY_ON = 1
};

typedef enum binary_state_t toggleable_t;
typedef enum binary_state_t switchable_t;
typedef enum binary_state_t activatable_t;
typedef enum binary_state_t enableable_t;

static inline void toggle(binary_state_t *b) {
  *b = (*b == BINARY_ON) ? BINARY_OFF : BINARY_ON;
}

#endif // _BINARY_STATE_H_
