/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROBrailleDisplayManagedQueue : NSObject {
    struct __CFDictionary { } * _displayQueueDict;
    unsigned long long  _maxActiveQueueSize;
    struct __CFDictionary { } * _queueStateDict;
    SCRCIndexMap * _stateQueueMap;
    SCRCIndexMap * _tokenDisplayMap;
}

- (void).cxx_destruct;
- (void)_fillActiveBrailleDisplayQueue;
- (id)_queueForState:(int)arg1 createQueue:(bool)arg2;
- (id)activeDisplays;
- (id)activePendingDisplays;
- (unsigned long long)activeQueueMaximumSize;
- (void)addDisplay:(id)arg1 withState:(int)arg2;
- (void)dealloc;
- (id)disconnectedDisplays;
- (unsigned long long)displayCountIncludingDisconnectedDisplays:(bool)arg1;
- (id)displayForToken:(int)arg1;
- (id)init;
- (id)loadingDisplays;
- (id)primaryDisplay;
- (void)removeDisplay:(id)arg1;
- (void)setActiveQueueMaximumSize:(unsigned long long)arg1;
- (void)setPrimaryDisplay:(id)arg1;
- (void)setState:(int)arg1 forDisplay:(id)arg2;
- (id)sleepingDisplays;
- (int)stateForDisplay:(id)arg1;

@end
