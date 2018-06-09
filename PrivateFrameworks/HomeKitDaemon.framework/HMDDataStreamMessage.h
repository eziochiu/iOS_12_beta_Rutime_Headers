/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDataStreamMessage : NSObject

+ (id)_decryptEncryptedOPACKFrame:(id)arg1 sessionEncryption:(id)arg2 hasPadding:(bool)arg3 error:(id*)arg4;
+ (id)_encryptEncryptedOPACKMessage:(id)arg1 sessionEncryption:(id)arg2 hasPadding:(bool)arg3 error:(id*)arg4;
+ (id)decryptEncryptedOPACKFrame:(id)arg1 sessionEncryption:(id)arg2 error:(id*)arg3;
+ (id)decryptEncryptedOPACKPaddedFrame:(id)arg1 sessionEncryption:(id)arg2 error:(id*)arg3;
+ (id)encryptEncryptedOPACKMessage:(id)arg1 sessionEncryption:(id)arg2 error:(id*)arg3;
+ (id)encryptEncryptedOPACKPaddedMessage:(id)arg1 sessionEncryption:(id)arg2 error:(id*)arg3;
+ (bool)readHeaderFromPartialData:(id)arg1 frameType:(unsigned char*)arg2 payloadLength:(unsigned long long*)arg3;
+ (bool)readHeaderFromPartialData:(const char *)arg1 length:(unsigned long long)arg2 frameType:(unsigned char*)arg3 payloadLength:(unsigned long long*)arg4;

@end
