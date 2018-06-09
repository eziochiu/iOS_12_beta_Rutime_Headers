/* made by EzioChiu.
 */

@protocol VCControlChannelencryptionDelegate <NSObject>

@required

- (bool)decryptWithMKI:(const void*)arg1 data:(char *)arg2 size:(int)arg3 sequenceNumber:(unsigned short)arg4;
- (bool)encryptData:(char *)arg1 size:(int)arg2 sequenceNumber:(unsigned short)arg3;

@end
