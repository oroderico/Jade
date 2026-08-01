#ifndef PROCESS_MNEMONIC_H_
#define PROCESS_MNEMONIC_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef enum { DERIVE_KEYCHAIN_FAILED, DERIVE_KEYCHAIN_CANCELLED, DERIVE_KEYCHAIN_SUCCESS } derive_keychain_result_t;

bool get_passphrase(char* passphrase, size_t passphrase_len);
derive_keychain_result_t derive_keychain(bool temporary_restore, const char* mnemonic);
derive_keychain_result_t handle_mnemonic_qr(const char* mnemonic);

const char* get_qr_passphrase_error(const uint8_t* data, size_t data_len);
bool is_valid_qr_passphrase(const uint8_t* data, size_t data_len);

#endif /* PROCESS_MNEMONIC_H_ */
