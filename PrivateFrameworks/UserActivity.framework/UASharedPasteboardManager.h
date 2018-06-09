/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

@interface UASharedPasteboardManager : NSObject <UASharedPasteboardManagerResponseProtocol> {
    NSSet * _bomCheckTypes;
    id /* block */  _completionBlock;
    NSXPCConnection * _connection;
    NSXPCConnection * _controllConnection;
    id  _controllSyncObject;
    UAPasteboardGeneration * _currentGeneration;
    bool  _currentGenerationHasUpdates;
    int  _disableCount;
    NSSet * _disallowdTypes;
    id /* block */  _localPasteboardWasFetched;
    NSObject<OS_dispatch_queue> * _pasteboardReadQ;
    bool  _remotePasteboardAvaliable;
    NSObject<OS_dispatch_queue> * _serverQ;
    NSDictionary * _typeAliases;
    NSDictionary * _typeBOMs;
    bool  _updateScheduled;
}

@property (retain) NSSet *bomCheckTypes;
@property id /* block */ completionBlock;
@property (retain) NSXPCConnection *connection;
@property (retain) NSXPCConnection *controllConnection;
@property (retain) id controllSyncObject;
@property (retain) UAPasteboardGeneration *currentGeneration;
@property bool currentGenerationHasUpdates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property int disableCount;
@property (retain) NSSet *disallowdTypes;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ localPasteboardWasFetched;
@property (retain) NSObject<OS_dispatch_queue> *pasteboardReadQ;
@property bool remotePasteboardAvaliable;
@property (retain) NSObject<OS_dispatch_queue> *serverQ;
@property (readonly) Class superclass;
@property (retain) NSDictionary *typeAliases;
@property (retain) NSDictionary *typeBOMs;
@property bool updateScheduled;

+ (bool)dontConnectToServer;
+ (void)initialize;
+ (id)sharedManager;

- (void).cxx_destruct;
- (bool)addData:(id)arg1 toItemAtIndex:(unsigned long long)arg2 generation:(unsigned long long)arg3;
- (id)bomCheckTypes;
- (void)clearLocalPasteboardInformation;
- (id /* block */)completionBlock;
- (id)connection;
- (id)controllConnection;
- (id)controllSyncObject;
- (id)currentGeneration;
- (bool)currentGenerationHasUpdates;
- (void)dealloc;
- (int)disableCount;
- (id)disallowdTypes;
- (void)doClearLocalPasteboardInfo;
- (void)fetchPasteboardDataForProcess:(int)arg1 withCompletion:(id /* block */)arg2;
- (void)fetchPasteboardStatus:(id /* block */)arg1;
- (void)fetchPasteboardTypesForProcess:(int)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (bool)isRemotePasteboardAvaliable;
- (id /* block */)localPasteboardWasFetched;
- (id)pasteboardReadQ;
- (void)pickupLocalChanges:(id)arg1 iterNumber:(long long)arg2 completionHandler:(id /* block */)arg3;
- (bool)remotePasteboardAvaliable;
- (bool)requestPasteboardFetchReturnEarly;
- (void)requestRemotePasteboardDataForProcess:(int)arg1 withCompletion:(id /* block */)arg2;
- (void)requestRemotePasteboardTypesForProcess:(int)arg1 withCompletion:(id /* block */)arg2;
- (void)sendUpdateToServer;
- (id)serializeItem:(id)arg1 intoInfo:(id)arg2 withFile:(id)arg3;
- (id)serializeType:(id)arg1 intoInfo:(id)arg2 withFile:(id)arg3;
- (id)serverQ;
- (void)setBomCheckTypes:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)setControllConnection:(id)arg1;
- (void)setControllSyncObject:(id)arg1;
- (void)setCurrentGeneration:(id)arg1;
- (void)setCurrentGenerationHasUpdates:(bool)arg1;
- (void)setDisableCount:(int)arg1;
- (void)setDisallowdTypes:(id)arg1;
- (void)setLocalPasteboardWasFetched:(id /* block */)arg1;
- (void)setPasteboardReadQ:(id)arg1;
- (void)setRemotePasteboardAvaliable:(bool)arg1;
- (void)setServerQ:(id)arg1;
- (void)setTypeAliases:(id)arg1;
- (void)setTypeBOMs:(id)arg1;
- (void)setUpdateScheduled:(bool)arg1;
- (void)startPreventingPasteboardSharing;
- (void)stopPreventingPasteboardSharing;
- (void)tellClientDebuggingEnabled:(bool)arg1 logFileHandle:(id)arg2;
- (id)typeAliases;
- (id)typeBOMs;
- (bool)updateScheduled;
- (void)writeLocalPasteboardToFile:(id)arg1 withCompletion:(id /* block */)arg2;

@end