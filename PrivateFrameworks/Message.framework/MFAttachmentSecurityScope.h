/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAttachmentSecurityScope : NSObject {
    NSFileCoordinator * _fileCoordinator;
    NSURL * _secureReadURL;
    NSURL * _secureWriteURL;
    bool  _securedRead;
    bool  _securedWrite;
    NSData * _securityScopeToken;
    NSURL * _securityScopedURL;
}

+ (id)securityScopedURL:(id)arg1;
+ (id)securityScopedURL:(id)arg1 withToken:(id)arg2;

- (void)_attachSecurityScope;
- (void)_removeTemporaryReadURL;
- (id)_temporaryReadURL:(id)arg1 error:(id*)arg2;
- (id)data;
- (void)dealloc;
- (id)initWithSecurityScopedURL:(id)arg1 withToken:(id)arg2;
- (bool)isBundle;
- (bool)isReadable;
- (id)securityScopeToken;
- (id)startReadAccess;
- (id)startWriteAccess;
- (void)stopAccess;

@end
