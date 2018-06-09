/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHealthWrapEncryptor : NSObject {
    unsigned int  _algorithm;
    NSMutableData * _buffer;
    struct __SecCertificate { } * _certificate;
    struct _CCCryptor { } * _cryptor;
    unsigned long long  _encryptedBytesCount;
    HKHealthWrapCodableMessageHeader * _header;
    unsigned int  _hmacAlgorithm;
    struct { 
        unsigned int ctx[96]; 
    }  _hmacContext;
    unsigned int  _keySize;
    unsigned int  _options;
    NSOutputStream * _outputStream;
    struct CC_SHA256state_st { 
        unsigned int count[2]; 
        unsigned int hash[8]; 
        unsigned int wbuf[16]; 
    }  _sha256Context;
    NSUUID * _studyUUID;
    NSUUID * _uuid;
}

- (void).cxx_destruct;
- (bool)_appendEncryptedBytes:(const char *)arg1 length:(unsigned long long)arg2 error:(id*)arg3;
- (struct __SecKey { }*)_copyAndVerifyPublicKeyFromCertificate:(struct __SecCertificate { }*)arg1 error:(id*)arg2;
- (id)_encryptData:(id)arg1 withCertificate:(struct __SecCertificate { }*)arg2 error:(id*)arg3;
- (bool)_finalizeCryptorWithError:(id*)arg1;
- (bool)_startCryptorWithError:(id*)arg1;
- (bool)_updateCryptorWithData:(id)arg1 error:(id*)arg2;
- (bool)_updateHeaderWithKey:(id)arg1 iv:(id)arg2 hmacKey:(id)arg3 error:(id*)arg4;
- (bool)_writeStream:(const char *)arg1 length:(unsigned long long)arg2 hash:(bool)arg3 error:(id*)arg4;
- (bool)appendData:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (bool)finalizeWithError:(id*)arg1;
- (id)initWithOutputStream:(id)arg1 certificate:(struct __SecCertificate { }*)arg2 algorithm:(unsigned int)arg3 options:(unsigned int)arg4 keySize:(unsigned int)arg5 uuid:(id)arg6 studyUUID:(id)arg7;
- (bool)startWithError:(id*)arg1;

@end
