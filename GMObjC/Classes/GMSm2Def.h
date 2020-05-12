//
//  GMSm2Def.h
//  GMPro
//
//  Created by lifei on 2019/7/17.
//  Copyright © 2019 lifei. All rights reserved.
/**
 * Sm2 加密后密文为 ASN1 编码，此处编解码所用结构体
 */

#ifndef GMSm2Def_h
#define GMSm2Def_h

#if __has_include(<openssl/asn1t.h>)
#import <openssl/asn1t.h>
#else
#import "GMOpenSSL/asn1t.h"
#endif // __has_include(<asn1t.h>)

#if __has_include(<openssl/sm2.h>)
#import <openssl/sm2.h>
#else
#import "GMOpenSSL/sm2.h"
#endif // __has_include(<sm2.h>)

#if __has_include(<openssl/evp.h>)
#import <openssl/evp.h>
#else
#import "GMOpenSSL/evp.h"
#endif // __has_include(<evp.h>)

#if __has_include(<openssl/bn.h>)
#import <openssl/bn.h>
#else
#import "GMOpenSSL/bn.h"
#endif // __has_include(<bn.h>)

// 定义 ASN1 编解码存储数据的结构体
typedef struct SM2_Ciphertext_st_1 SM2_Ciphertext_1;
DECLARE_ASN1_FUNCTIONS(SM2_Ciphertext_1)

struct SM2_Ciphertext_st_1 {
    BIGNUM *C1x;
    BIGNUM *C1y;
    ASN1_OCTET_STRING *C3;
    ASN1_OCTET_STRING *C2;
};

ASN1_SEQUENCE(SM2_Ciphertext_1) = {
    ASN1_SIMPLE(SM2_Ciphertext_1, C1x, BIGNUM),
    ASN1_SIMPLE(SM2_Ciphertext_1, C1y, BIGNUM),
    ASN1_SIMPLE(SM2_Ciphertext_1, C3, ASN1_OCTET_STRING),
    ASN1_SIMPLE(SM2_Ciphertext_1, C2, ASN1_OCTET_STRING),
} ASN1_SEQUENCE_END(SM2_Ciphertext_1)

IMPLEMENT_ASN1_FUNCTIONS(SM2_Ciphertext_1)


#endif /* GMSm2Def_h */
