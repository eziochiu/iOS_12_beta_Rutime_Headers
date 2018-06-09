/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface _SYMessageTimerTable : NSObject {
    NSMutableDictionary * _byIdent;
    NSMutableDictionary * _bySeqno;
    id /* block */  _callback;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _rwlock;
}

@property (nonatomic, readonly) unsigned long long timerCount;

- (void).cxx_destruct;
- (void)_cleanupTimerForSeqno:(unsigned long long)arg1;
- (void)_fireCallbackForSeqno:(unsigned long long)arg1;
- (void)addTimerWithFireDate:(id)arg1 forSequenceNumber:(unsigned long long)arg2;
- (void)cancelAllTimers;
- (void)cancelTimerForIdentifier:(id)arg1;
- (void)cancelTimerForSequenceNumber:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithQueue:(id)arg1 timerCallback:(id /* block */)arg2;
- (void)setIdentifier:(id)arg1 forSequenceNumber:(unsigned long long)arg2;
- (unsigned long long)timerCount;

@end
