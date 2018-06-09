/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSSaveEmail : MSMailDefaultService

+ (void)deletePlaceholderAttachmentForURL:(id)arg1 completionBlock:(id /* block */)arg2;
+ (void)placeholderAttachmentForData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4 completionBlock:(id /* block */)arg5;
+ (void)placeholderAttachmentForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4 completionBlock:(id /* block */)arg5;
+ (void)placeholderAttachmentForURL:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3 completionBlock:(id /* block */)arg4;
+ (void)saveEmail:(id)arg1 completionBlock:(id /* block */)arg2;
+ (void)saveMessageData:(id)arg1 forAccountWithID:(id)arg2 autosaveIdentifier:(id)arg3 completionBlock:(id /* block */)arg4;
+ (void)securityScopeForPlaceholderURL:(id)arg1 completionBlock:(id /* block */)arg2;

- (void)_saveEmail:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_saveMessageData:(id)arg1 forAccountWithID:(id)arg2 autosaveIdentifier:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(id /* block */)arg3;

@end
