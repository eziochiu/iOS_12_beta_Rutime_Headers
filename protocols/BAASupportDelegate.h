/* made by EzioChiu.
 */

@protocol BAASupportDelegate <NSObject>

@required

+ (int)confirmSigKey:(unsigned int)arg1 status:(int)arg2;
+ (int)generateSigKey:(unsigned int)arg1 keyData:(id*)arg2 attestation:(id*)arg3 pubKey:(id*)arg4;
+ (int)getBlessedUser:(unsigned int*)arg1 keybagUUID:(unsigned char)arg2;
+ (int)getSigKeyExpDate:(unsigned int)arg1 expirationDate:(unsigned long long*)arg2;
+ (bool)isInternal;
+ (int)setSigKey:(unsigned int)arg1 expirationDate:(unsigned long long)arg2 keyData:(NSData *)arg3 certificates:(NSArray *)arg4;

@end
