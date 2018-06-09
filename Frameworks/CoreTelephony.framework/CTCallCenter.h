/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTCallCenter : NSObject <CXCallObserverDelegate> {
    id /* block */  _callEventHandler;
    CXCallObserver * _callKitObserver;
    NSSet * _currentCalls;
    struct queue { 
        struct object { 
            struct dispatch_object_s {} *fObj; 
        } fObj; 
    }  _queue;
    struct queue { 
        struct object { 
            struct dispatch_object_s {} *fObj; 
        } fObj; 
    }  clientQueue;
}

@property (nonatomic, copy) id /* block */ callEventHandler;
@property (retain) CXCallObserver *callKitObserver;
@property (retain) NSSet *currentCalls;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)broadcastCallStateChangesIfNeededWithFailureLogMessage:(id)arg1;
- (bool)calculateCallStateChanges_sync:(id)arg1;
- (id /* block */)callEventHandler;
- (id)callKitObserver;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (id)currentCalls;
- (void)dealloc;
- (id)description;
- (bool)getCurrentCallSetFromServer_sync:(id)arg1;
- (void)handleCallStatusChange_sync:(id)arg1;
- (id)init;
- (id)initWithQueue:(struct dispatch_queue_s { }*)arg1;
- (void)initialize;
- (void)setCallEventHandler:(id /* block */)arg1;
- (void)setCallKitObserver:(id)arg1;
- (void)setCurrentCalls:(id)arg1;

@end
