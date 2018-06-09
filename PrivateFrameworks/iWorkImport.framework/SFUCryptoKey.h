/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface SFUCryptoKey : NSObject {
    NSString * _passphrase;
    unsigned int  mIterationCount;
    char * mKey;
    unsigned long long  mKeyLength;
    NSData * mSaltData;
}

@property (nonatomic, readonly) NSString *passphrase;

- (void)dealloc;
- (id)initAes128Key:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3;
- (id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned int)arg2;
- (id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned int)arg2 saltData:(id)arg3;
- (id)initAes128KeyFromPassphrase:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3;
- (id)initAes128KeyFromPassphrase:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3 saltData:(id)arg4;
- (id)initAes128KeyFromPassphrase:(id)arg1 withIterationCountAndSaltDataFromCryptoKey:(id)arg2;
- (unsigned int)iterationCount;
- (const char *)keyData;
- (unsigned long long)keyLength;
- (int)keyType;
- (id)passphrase;
- (id)saltData;

@end
