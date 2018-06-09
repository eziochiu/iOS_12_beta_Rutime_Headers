/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFairSource : NSObject {
    bool  _cancelled;
    id /* block */  _eventHandler;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
    BRCFairScheduler * _scheduler;
    unsigned long long  _schedulerBitIndex;
    bool  _signaled;
    int  _suspendCount;
}

@property (nonatomic, copy) id /* block */ eventHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_runEventHandler;
- (void)cancel;
- (id)description;
- (id /* block */)eventHandler;
- (id)initWithName:(id)arg1 scheduler:(id)arg2;
- (id)queue;
- (void)resume;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)signal;
- (void)suspend;

@end
