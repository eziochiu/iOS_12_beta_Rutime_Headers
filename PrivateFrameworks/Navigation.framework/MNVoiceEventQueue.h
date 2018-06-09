/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNVoiceEventQueue : NSObject {
    <MNVoiceEventQueueDelegate> * _delegate;
    NSMutableArray * _queue;
}

@property (nonatomic) <MNVoiceEventQueueDelegate> *delegate;

- (void).cxx_destruct;
- (void)_removeEventsMatching:(id)arg1 includeEventToMatch:(bool)arg2;
- (void)addEvent:(id)arg1;
- (id)delegate;
- (id)dequeueNextEvent;
- (bool)hasAnotherEvent;
- (id)init;
- (void)removeAllEvents;
- (void)setDelegate:(id)arg1;

@end
