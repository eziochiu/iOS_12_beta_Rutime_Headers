/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTMessageQueue : NSObject {
    NSMutableArray * _addDates;
    <FTMessageQueueDelegate> * _delegate;
    NSMutableArray * _queue;
}

@property (retain) NSMutableArray *_addDates;
@property (retain) NSMutableArray *_queue;
@property (readonly) long long count;
@property <FTMessageQueueDelegate> *delegate;
@property (readonly) NSArray *messages;
@property (readonly) IDSBaseMessage *topMessage;

- (void).cxx_destruct;
- (id)_addDates;
- (void)_clearTimeout;
- (id)_queue;
- (void)_setTimeout;
- (void)_timeoutHit;
- (bool)addMessage:(id)arg1;
- (bool)addMessageAtHeadOfQueue:(id)arg1;
- (long long)count;
- (id)delegate;
- (id)dequeueTopMessage;
- (id)init;
- (id)messages;
- (void)removeAllMessages;
- (bool)removeMessage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)set_addDates:(id)arg1;
- (void)set_queue:(id)arg1;
- (id)topMessage;

@end
