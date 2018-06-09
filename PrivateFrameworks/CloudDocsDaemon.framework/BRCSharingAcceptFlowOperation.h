/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharingAcceptFlowOperation : _BRCOperation <BRCForegroundClient, BRCOperationSubclass, LSOpenResourceOperationDelegate> {
    NSArray * _acceptationFlow;
    BRCAppLibrary * _appLibrary;
    BRCClientZone * _clientZone;
    NSString * _documentName;
    bool  _needsZoneAndAppLibraryActivation;
    NSObject<OS_dispatch_queue> * _queue;
    BRCAccountSession * _session;
    CKShare * _share;
    NSURL * _shareDocumentURL;
    CKRecordID * _shareID;
    CKShareMetadata * _shareMetadata;
    NSURL * _shareURL;
    BRCItemID * _sharedItemID;
    unsigned long long  _stepIndex;
    NSString * _unsaltedBookmarkData;
    <BRCUserNotifier> * _userNotification;
    BRCXPCClient * _xpcClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

+ (void)_openAppStoreForShareURL:(id)arg1;
+ (void)_openShareURLInWebBrowser:(id)arg1 withReason:(id)arg2;
+ (void)_openiCloudSettings;
+ (id)_runningShareIDs;
+ (Class)userNotificationClass;

- (void).cxx_destruct;
- (void)_acceptShareURL;
- (void)_activateSharedZoneIfNeeded;
- (void)_captureOpenInfoFromDocument:(id)arg1;
- (void)_checkIfShouldWaitUntilDownloadCompletion;
- (void)_createSideFaultOnDisk;
- (void)_endAcceptationFlow;
- (void)_isAccountRestricted;
- (void)_isAppInstalled;
- (bool)_isFolderShare;
- (void)_isFolderSharingSupported;
- (bool)_isOwner;
- (bool)_isOwnerOrShareAlreadyAccepted;
- (void)_isUserSignedInToiCloudDrive;
- (bool)_isiWorkShare;
- (void)_jumpToSelector:(SEL)arg1;
- (void)_jumpToSelectorInQueue:(SEL)arg1;
- (void)_locateSharedItemOnDisk;
- (void)_openDocumentInDocumentsAppIfInstalled:(id)arg1;
- (void)_openSharedItemIfStillNeeded;
- (void)_openSharedSideFaultFile;
- (void)_openiWorkAppPreemptively;
- (void)_parseShareMetadata;
- (void)_performNextStep;
- (void)_performNextStepInQueue;
- (void)_prepareToDownloadSharedDocument;
- (void)_showGenericErrorAndFinish:(id)arg1;
- (void)_showSharingJoinDialog;
- (id)_stepNameAtIndex:(unsigned long long)arg1 withPrefix:(id)arg2;
- (void)_waitForSharedItemToBeOnDiskOnOwner;
- (void)_waitForSharedItemToBeOnDiskOnRecipient;
- (void)_waitForSharedItemToSyncDownOnOwner;
- (void)_waitForSharedItemToSyncDownOnRecipient;
- (id)createActivity;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)identifier;
- (id)initWithShareMetadata:(id)arg1 client:(id)arg2 session:(id)arg3;
- (void)main;
- (void)moveDialogToFront;
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)openResourceOperationDidComplete:(id)arg1;
- (bool)shouldRetryForError:(id)arg1;
- (id)subclassableDescriptionWithContext:(id)arg1;

@end