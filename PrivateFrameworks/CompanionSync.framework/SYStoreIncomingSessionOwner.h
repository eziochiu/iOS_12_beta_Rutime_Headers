/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYStoreIncomingSessionOwner : SYStoreSessionOwner

- (id)initWithIncomingSession:(id)arg1;
- (bool)isResetSync;
- (void)syncSession:(id)arg1 applyChanges:(struct NSArray { Class x1; }*)arg2 completion:(id /* block */)arg3;
- (bool)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2;

@end
