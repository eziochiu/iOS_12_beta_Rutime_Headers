/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSimpleTileRequester : GEOTileRequester <GEOSimpleTileRequesterOperationDelegate, GEOSimpleTileRequesterSubclass> {
    NSObject<OS_os_activity> * _activity;
    GEOTileRequestBalancer * _balancer;
    bool  _cancelled;
    GEODataSession * _dataSession;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _didCallDelegate;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _didStart;
    NSMutableArray * _errors;
    bool  _hasRemainingTileKeys;
    unsigned int  _qos;
    NSMutableArray * _running;
    GEOTileKeyMap * _signpostIDs;
    bool  _subclassImplementsTileEdition;
    NSObject<OS_voucher> * _voucher;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSObject<OS_os_activity> *activity;
@property (nonatomic, readonly) GEOTileRequestBalancer *balancer;
@property (nonatomic, retain) GEODataSession *dataSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_addRunningOperation:(id)arg1;
- (void)_cancel;
- (void)_cancelAllRunningOperations;
- (void)_cancelKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg1;
- (void)_checkIfDone;
- (void)_cleanup;
- (id)_createOperationsForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 priority:(unsigned int)arg2;
- (void)_didStartOperationsForAllTileKeys;
- (void)_generateEndSignpostEventIfNecessary:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg1;
- (bool)_isRunningOperation:(id)arg1;
- (double)_networkTimeoutForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)_notifyDelegateDone:(id /* block */)arg1;
- (void)_operationFailed:(id)arg1 error:(id)arg2;
- (void)_operationFinished:(id)arg1;
- (bool)_removeRunningOperation:(id)arg1;
- (void)_reprioritizeKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg1 newPriority:(unsigned int)arg2;
- (void)_updateRunningCountAndCheckIfDone;
- (id)activity;
- (bool)allowsCookies;
- (id)balancer;
- (void)cancel;
- (void)cancelKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (int)checksumMethodForIncomingTileDataWithKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)createAndStartOperationsForTileKeys:(id)arg1;
- (void)createRequest:(id*)arg1 localizationRequest:(id*)arg2 forKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg3;
- (id)dataSession;
- (void)dealloc;
- (void)didStartOperationsForAllTileKeys;
- (id)editionHeader;
- (unsigned long long)estimatedNumberOfOperationsForTileKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg1;
- (id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3;
- (bool)isRunning;
- (id)localizationURLForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)mergeBaseTile:(id)arg1 withLocalizationTile:(id)arg2;
- (id)mergeBaseTileEtag:(id)arg1 withLocalizationTileEtag:(id)arg2;
- (bool)needsLocalizationForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)newRequestWithType:(int)arg1 URL:(id)arg2 xpcRequest:(id)arg3 entityTag:(id)arg4 cachedData:(id)arg5 allowedRequestMode:(BOOL)arg6 timeout:(double)arg7 requestCounterTicket:(id)arg8;
- (id)newXPCDataRequestForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)operationFailed:(id)arg1 error:(id)arg2;
- (void)operationFinished:(id)arg1;
- (id)operationsForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)removeOperationsForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)reprioritizeKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 newPriority:(unsigned int)arg2;
- (void)setDataSession:(id)arg1;
- (bool)shouldParticipateInBalancerScheduling;
- (void)start;
- (bool)tileDataIsCacheableForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (unsigned int)tileEditionForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)urlForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)verifyDataIntegrity:(id)arg1 checksumMethod:(int)arg2;
- (id)workQueue;

@end
