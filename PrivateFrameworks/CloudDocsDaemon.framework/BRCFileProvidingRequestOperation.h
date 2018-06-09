/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFileProvidingRequestOperation : _BRCFrameworkOperation <BRCDownloadTracking, BRCOperationSubclass, BRCReachabilityDelegate> {
    NSMutableSet * _appLibrariesMonitored;
    NSMutableArray * _callbacks;
    BRCXPCClient * _client;
    BRCDirectoryItem * _directoryItem;
    NSSet * _docIDsToCancel;
    bool  _isFinished;
    bool  _isForBackup;
    bool  _isMonitoringReachability;
    bool  _isRecursive;
    bool  _isStillEnumeratingDirectory;
    NSError * _lastDownloadError;
    BRCAccountSession * _session;
    NSMutableSet * _trackedDocIDs;
    BRCTreeEnumerator * _treeEnumerator;
    NSURL * _url;
    bool  _wantsCurrentVersion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isForBackup;
@property (nonatomic) bool isRecursive;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *trackedDocIDs;
@property (nonatomic) bool wantsCurrentVersion;

- (void).cxx_destruct;
- (void)_detachAllTrackedDocID:(id)arg1 error:(id)arg2;
- (void)_finishAfterWaitingForDocumentsWithID:(id)arg1 error:(id)arg2;
- (void)_provideDirectoryRecursively:(id)arg1;
- (void)_provideDocument:(id)arg1;
- (void)_provideItem;
- (void)_provideURL;
- (void)addCompletionCallback:(id /* block */)arg1;
- (void)cancel;
- (void)downloadTrackedForItemWithDocID:(id)arg1 didFinishWithError:(id)arg2;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithDirectoryItem:(id)arg1;
- (id)initWithName:(id)arg1 session:(id)arg2 readingOptions:(unsigned long long)arg3;
- (id)initWithURL:(id)arg1 readingOptions:(unsigned long long)arg2 client:(id)arg3 session:(id)arg4;
- (bool)isForBackup;
- (bool)isRecursive;
- (void)main;
- (void)networkReachabilityChanged:(bool)arg1;
- (void)setIsForBackup:(bool)arg1;
- (void)setIsRecursive:(bool)arg1;
- (void)setWantsCurrentVersion:(bool)arg1;
- (bool)shouldRetryForError:(id)arg1;
- (id)trackedDocIDs;
- (bool)wantsCurrentVersion;

@end
