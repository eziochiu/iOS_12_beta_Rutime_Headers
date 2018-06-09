/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFCRAM_MD5AuthScheme : MFAuthScheme

- (Class)authenticatorClass;
- (bool)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (bool)hasEncryption;
- (id)humanReadableName;
- (id)name;
- (bool)sendsPlainTextPasswords;

@end
