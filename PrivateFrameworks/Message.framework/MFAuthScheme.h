/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAuthScheme : NSObject

+ (id)authSchemesForAccount:(id)arg1 connection:(id)arg2;
+ (void)initialize;
+ (id)knownSchemes;
+ (void)registerSchemeClass:(Class)arg1;
+ (id)schemeWithName:(id)arg1;

- (Class)authenticatorClass;
- (id)authenticatorForAccount:(id)arg1 connection:(id)arg2;
- (bool)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (Class)connectionClassForAccountClass:(Class)arg1;
- (unsigned int)defaultPortForAccount:(id)arg1;
- (bool)hasEncryption;
- (id)humanReadableName;
- (id)name;
- (bool)requiresPassword;

@end
