/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNCoalescingTimer : NSObject {
    id /* block */  _block;
    double  _delay;
    <CNScheduler> * _delayScheduler;
    <CNScheduler> * _downstreamScheduler;
    bool  _open;
    unsigned long long  _options;
    <CNScheduler> * _resourceLock;
    <CNCancelable> * _scheduledToken;
    bool  _someoneWaiting;
}

@property (nonatomic, readonly, copy) id /* block */ block;
@property (nonatomic, readonly) double delay;
@property (nonatomic, readonly) <CNScheduler> *delayScheduler;
@property (nonatomic, readonly) <CNScheduler> *downstreamScheduler;
@property (nonatomic) bool open;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) <CNScheduler> *resourceLock;
@property (nonatomic, retain) <CNCancelable> *scheduledToken;
@property (nonatomic) bool someoneWaiting;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)dealloc;
- (double)delay;
- (id)delayScheduler;
- (id)downstreamScheduler;
- (void)handleEvent;
- (id)initWithDelay:(double)arg1 options:(unsigned long long)arg2 block:(id /* block */)arg3 schedulerProvider:(id)arg4 downstreamScheduler:(id)arg5;
- (void)nts_closeDoor;
- (bool)nts_isDoorOpened;
- (void)nts_letSomeoneIn;
- (void)nts_makeSomeoneWait;
- (void)nts_openDoor;
- (bool)open;
- (unsigned long long)options;
- (id)resourceLock;
- (id)scheduledToken;
- (void)setOpen:(bool)arg1;
- (void)setScheduledToken:(id)arg1;
- (void)setSomeoneWaiting:(bool)arg1;
- (bool)someoneWaiting;

@end
