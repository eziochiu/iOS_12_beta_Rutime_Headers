/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSEventFocusManager : NSObject <BKSEventFocusManagerClientInterface> {
    NSSet * _cachedFocusedDeferralProperties;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSString * _clientIdentifier;
    NSXPCConnection * _connection;
    NSMutableSet * _currentState;
    NSHashTable * _focusChangeObservers;
    NSObject<OS_dispatch_queue> * _focusClientQueue;
    <BKSEventFocusIPCInterface> * _ipcInterface;
    bool  _needsFlush;
    NSMutableDictionary * _pendingStatesByPriority;
    int  _pid;
    bool  _systemAppControlsFocusOnMainDisplay;
}

@property (nonatomic, retain) NSSet *cachedFocusedDeferralProperties;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, readonly) NSMutableSet *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSHashTable *focusChangeObservers;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsFlush;
@property (nonatomic, readonly) NSMutableDictionary *pendingStatesByPriority;
@property (nonatomic) int pid;
@property (readonly) Class superclass;
@property (nonatomic) bool systemAppControlsFocusOnMainDisplay;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_connectToEventFocusService;
- (void)_pruneSet:(id)arg1 ofDeferralsPassingTest:(id /* block */)arg2;
- (void)_rebuildPendingStatesByPriority;
- (void)addObserver:(id)arg1;
- (id)cachedFocusedDeferralProperties;
- (id)clientIdentifier;
- (id)connection;
- (id)currentState;
- (void)dealloc;
- (void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2;
- (void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2 withPriority:(int)arg3;
- (id)description;
- (void)flush;
- (id)focusChangeObservers;
- (void)focusedDeferralPropertiesUpdatedWithProperties:(id)arg1;
- (id)init;
- (id)initWithIPCInterface:(id)arg1;
- (bool)needsFlush;
- (id)pendingStatesByPriority;
- (int)pid;
- (void)reallyFlushWithSet:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setCachedFocusedDeferralProperties:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setFocusChangeObservers:(id)arg1;
- (void)setForegroundApplicationOnMainDisplay:(id)arg1 pid:(int)arg2;
- (void)setNeedsFlush:(bool)arg1;
- (void)setPid:(int)arg1;
- (void)setSystemAppControlsFocusOnMainDisplay:(bool)arg1;
- (bool)systemAppControlsFocusOnMainDisplay;
- (void)touchDetachedForIdentifier:(unsigned int)arg1 context:(unsigned int)arg2 pid:(int)arg3;
- (void)touchUpOccuredForIdentifier:(unsigned int)arg1 detached:(bool)arg2 context:(unsigned int)arg3 pid:(int)arg4;

@end
