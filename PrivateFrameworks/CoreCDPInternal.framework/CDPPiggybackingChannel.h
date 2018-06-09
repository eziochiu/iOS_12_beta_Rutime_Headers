/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPPiggybackingChannel : NSObject <CDPSecureChannelProxy> {
    CDPContext * _context;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_replyContextWithPakeData:(id)arg1;
- (bool)approverBackupRecordsExist;
- (unsigned long long)approveriCloudKeychainState;
- (id)initWithContext:(id)arg1;
- (void)sendPayload:(id)arg1 completion:(id /* block */)arg2;

@end
