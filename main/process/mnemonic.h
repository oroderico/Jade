#ifndef PROCESS_MNEMONIC_H_
#define PROCESS_MNEMONIC_H_

#include "jade_assert.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef enum { DERIVE_KEYCHAIN_FAILED, DERIVE_KEYCHAIN_CANCELLED, DERIVE_KEYCHAIN_SUCCESS } derive_keychain_result_t;

WARN_UNUSED_RESULT bool get_passphrase(char* passphrase, size_t passphrase_len);
WARN_UNUSED_RESULT derive_keychain_result_t derive_keychain(bool temporary_restore, const char* mnemonic);
WARN_UNUSED_RESULT derive_keychain_result_t handle_mnemonic_qr(const char* mnemonic);

bool is_valid_qr_passphrase(const uint8_t* data, size_t data_len);

#endif /* PROCESS_MNEMONIC_H_ */
