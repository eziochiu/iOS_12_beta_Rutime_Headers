/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDigestMD5AuthScheme : MFAuthScheme

- (Class)authenticatorClass;
- (bool)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (bool)hasEncryption;
- (id)humanReadableName;
- (id)name;

@end
