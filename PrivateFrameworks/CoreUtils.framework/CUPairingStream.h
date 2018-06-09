/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUPairingStream : NSObject {
    struct CryptoAEADPrivate { } * _decryptAEAD;
    unsigned char  _decryptNonce;
    struct CryptoAEADPrivate { } * _encryptAEAD;
    unsigned char  _encryptNonce;
    NSString * _name;
}

@property (nonatomic, readonly) unsigned long long authTagLength;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (void)_cleanup;
- (unsigned long long)authTagLength;
- (void)dealloc;
- (id)decryptData:(id)arg1 aadBytes:(const void*)arg2 aadLength:(unsigned long long)arg3 error:(id*)arg4;
- (id)decryptData:(id)arg1 aadData:(id)arg2 error:(id*)arg3;
- (bool)decryptInputBytes:(const void*)arg1 inputLength:(unsigned long long)arg2 inputAADBytes:(const void*)arg3 inputAADLength:(unsigned long long)arg4 inputAuthTagPtr:(const void*)arg5 inputAuthTagLength:(unsigned long long)arg6 outputBytes:(void*)arg7 error:(id*)arg8;
- (id)encryptData:(id)arg1 aadBytes:(const void*)arg2 aadLength:(unsigned long long)arg3 error:(id*)arg4;
- (id)encryptData:(id)arg1 aadData:(id)arg2 error:(id*)arg3;
- (bool)encryptInputBytes:(const void*)arg1 inputLength:(unsigned long long)arg2 inputAADBytes:(const void*)arg3 inputAADLength:(unsigned long long)arg4 outputBytes:(void*)arg5 outputAuthTagBytes:(void*)arg6 outputAuthTagLength:(unsigned long long)arg7 error:(id*)arg8;
- (id)name;
- (void)setName:(id)arg1;

@end
