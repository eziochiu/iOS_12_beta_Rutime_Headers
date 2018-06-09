/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSEventQueueLock : NSObject {
    BSEventQueue * _eventQueue;
    NSString * _reason;
    bool  _relinquished;
}

@property (nonatomic, retain) BSEventQueue *eventQueue;
@property (nonatomic, copy) NSString *reason;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)eventQueue;
- (id)initWithEventQueue:(id)arg1 reason:(id)arg2;
- (id)reason;
- (void)relinquish;
- (void)setEventQueue:(id)arg1;
- (void)setReason:(id)arg1;

@end
