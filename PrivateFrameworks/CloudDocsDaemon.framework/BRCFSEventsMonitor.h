/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFSEventsMonitor : NSObject <BRCModule, BRCSuspendable> {
    PQLConnection * _db;
    <BRCFSEventsDelegate> * _delegate;
    NSString * _devicePath;
    bool  _drainEvents;
    unsigned long long  _fseventProcessBatchSize;
    BRCFairSource * _fseventsProcessSource;
    NSMutableArray * _fseventsToProcess;
    bool  _hasMarkSelf;
    NSObject<OS_dispatch_source> * _historicalEventSource;
    bool  _isCancelled;
    unsigned long long  _maxFSEventQueueSize;
    NSString * _name;
    BRCFSEventsPersistedState * _persistedState;
    NSObject<OS_dispatch_queue> * _processQueue;
    BRCFSEventsPersistedState * _rendezVous;
    int  _resetCount;
    BRCRelativePath * _root;
    NSString * _rootPathRelativeToDevice;
    NSObject<OS_dispatch_source> * _rootVnodeWatcher;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    BRCAccountSession * _session;
    struct __FSEventStream { } * _stream;
    NSObject<OS_dispatch_queue> * _streamQueue;
    int  _suspendCount;
    BRCVolume * _volume;
}

@property (setter=setDB:, nonatomic, retain) PQLConnection *db;
@property (readonly, copy) NSString *debugDescription;
@property <BRCFSEventsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) BRCRelativePath *root;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool volumeIsCaseSensitive;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_close;
- (bool)_queueEvents:(id)arg1 markSelfEncountered:(bool)arg2;
- (void)_updatePersistedStateWithState:(id)arg1;
- (void)cancel;
- (void)close;
- (id)db;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didProcessEventID:(unsigned long long)arg1;
- (void)flushStream;
- (void)fseventAtPath:(id)arg1 withFlags:(unsigned int)arg2 andID:(unsigned long long)arg3 eventIndex:(unsigned int)arg4 eventCount:(unsigned int)arg5 initialScan:(bool)arg6;
- (void)fseventOnRootWithEventID:(unsigned long long)arg1 andReason:(id)arg2;
- (id)initWithAccountSession:(id)arg1;
- (id)initWithAccountSession:(id)arg1 name:(id)arg2;
- (bool)isCancelled;
- (bool)openWithRoot:(id)arg1 isImmutableRoot:(bool)arg2 volume:(id)arg3 error:(id*)arg4;
- (bool)openWithRoot:(id)arg1 volume:(id)arg2 error:(id*)arg3;
- (void)processFseventBatch;
- (void)queueEvents:(id)arg1 markSelfEncountered:(bool)arg2;
- (void)resetWithReason:(id)arg1;
- (void)resetWithReason:(id)arg1 dropFSEventID:(bool)arg2;
- (void)resume;
- (id)root;
- (void)setDB:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)setUpRoot:(id)arg1 isImmutableRoot:(bool)arg2 volume:(id)arg3 error:(id*)arg4;
- (bool)setUpStreamSynchronously:(bool)arg1 reason:(id)arg2 error:(id*)arg3;
- (void)signalAfterCurrentFSEvent:(id)arg1;
- (void)stopWatcher;
- (void)suspend;
- (bool)volumeIsCaseSensitive;

@end
