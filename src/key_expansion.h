#include "commons.h"

/* 
 * Interfaces of Cryptographics
 */
#ifndef ACA_CUDA_AES_KEY_EXPANSION_H
#define ACA_CUDA_AES_KEY_EXPANSION_H
void aca_key_expansion(uint32_t *key, size_t key_len, uint32_t *W, size_t Nk, size_t Nr);
void aca_inv_key_expansion(uint32_t *key, size_t key_len, uint32_t *W, size_t Nk, size_t Nr);
#endif /* ACA_CUDA_AES_KEY_EXPANSION_H */
