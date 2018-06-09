/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLTwitterSession : NSObject <SLMicroBlogSheetDelegate, SLTwitterClientSessionProtocol> {
    id /* block */  _connectionResetBlock;
    CLInUseAssertion * _locationInUseAssertion;
    id /* block */  _locationInformationChangedBlock;
    NSCache * _profileImageCache;
    SLRemoteSessionProxy<SLTwitterRemoteSessionProtocol> * _remoteSession;
    NSObject<OS_dispatch_queue> * _remoteSessionQueue;
    NSObject<OS_dispatch_semaphore> * _remoteSessionQueueSemaphore;
    NSBundle * _serviceBundle;
}

@property (nonatomic, copy) id /* block */ connectionResetBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ locationInformationChangedBlock;
@property (readonly) Class superclass;

+ (id)_remoteInterface;

- (void).cxx_destruct;
- (id)_createOrGetRemoteSession;
- (void)acceptLocationUpdate:(id)arg1;
- (void)beginPotentialLocationUse;
- (id)cachedProfileImageDataForScreenName:(id)arg1;
- (id /* block */)connectionResetBlock;
- (void)deferExpensiveOperations;
- (void)endPotentialLocationUse;
- (void)ensureUserRecordStore;
- (void)fetchCurrentImageLimits:(id /* block */)arg1;
- (void)fetchCurrentUrlLimits:(id /* block */)arg1;
- (void)fetchGeotagStatus:(id /* block */)arg1;
- (void)fetchProfileImageDataForScreenName:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSessionInfo:(id /* block */)arg1;
- (void)getPermaLinkFromLastStatusUpdate:(id /* block */)arg1;
- (id)init;
- (id /* block */)locationInformationChangedBlock;
- (void)logDidSendStatusWithText:(id)arg1 attachments:(id)arg2 locationAttached:(bool)arg3 fromProcessWithPID:(int)arg4;
- (void)recordsMatchingPrefixString:(id)arg1 completion:(id /* block */)arg2;
- (void)retweetTweetWithID:(id)arg1 completion:(id /* block */)arg2;
- (void)sendDirectMessage:(id)arg1 toUser:(id)arg2 withScreenName:(id)arg3 completion:(id /* block */)arg4;
- (void)sendStatus:(id)arg1 completion:(id /* block */)arg2;
- (id)serviceAccountTypeIdentifier;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)setConnectionResetBlock:(id /* block */)arg1;
- (void)setGeotagStatus:(int)arg1;
- (void)setLocationInformationChangedBlock:(id /* block */)arg1;
- (void)showSettingsIfNeeded;
- (void)stopDeferringExpensiveOperations;
- (void)tearDownConnectionToRemoteSession;

@end
