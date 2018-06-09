/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSAutosave : MSXPCService

+ (id)autosave;

- (id)_timeout;
- (void)autosaveMessageData:(id)arg1 withIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)autosavedMessageDataWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)hasAutosavedMessageWithIdentifier:(id)arg1;
- (id)init;
- (id)initWithRemoteObjectInterface:(id)arg1;
- (void)removeAutosavedMessageWithIdentifier:(id)arg1;

@end
