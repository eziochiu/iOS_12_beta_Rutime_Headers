/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMInvocationQueue : NSObject {
    id  _delegate;
    double  _dequeueRate;
    bool  _holdQueue;
    NSMutableArray * _options;
    NSProtocolChecker * _protocolChecker;
    NSMutableArray * _queue;
    id  _target;
}

@property (nonatomic, readonly) unsigned long long count;
@property id delegate;
@property (nonatomic) double dequeueRate;
@property (nonatomic, readonly) bool holdQueue;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly, retain) NSMutableArray *options;
@property (nonatomic, retain) Protocol *protocol;
@property (nonatomic, readonly, retain) NSProtocolChecker *protocolChecker;
@property (nonatomic, readonly, retain) NSMutableArray *queue;
@property id target;

- (bool)_acceptsOptions:(unsigned long long)arg1;
- (void)_checkQueue;
- (id)_dequeueInvocation;
- (long long)_enqueueInvocation:(id)arg1 options:(unsigned long long)arg2;
- (void)_holdQueueNotification:(id)arg1;
- (bool)_insertInvocation:(id)arg1 options:(unsigned long long)arg2;
- (bool)_invokeInvocation:(id)arg1;
- (int)_maxQueueLimitSize;
- (int)_numberOfLimitedMessagesInQueue;
- (unsigned long long)_optionsForInvocation:(id)arg1;
- (void)_releaseQueueNotification:(id)arg1;
- (bool)_replaceSimilarInvocation:(id)arg1;
- (void)_setQueueTimer;
- (void)_stepQueueNotification:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)delegate;
- (double)dequeueRate;
- (void)forwardInvocation:(id)arg1;
- (bool)holdQueue;
- (id)init;
- (void)invokeAll;
- (bool)isEmpty;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)options;
- (id)peek;
- (id)protocol;
- (id)protocolChecker;
- (id)queue;
- (void)removeAllInvocations;
- (void)setDelegate:(id)arg1;
- (void)setDequeueRate:(double)arg1;
- (void)setProtocol:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
