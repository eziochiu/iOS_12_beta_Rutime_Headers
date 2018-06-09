/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKDisplayLinkManager : NSObject {
    NSMutableDictionary * _activeObservers;
    CADisplayLink * _displayLink;
    bool  _hasUpdatedObservers;
    bool  _isHandlingDisplayRefresh;
    NSMutableDictionary * _updatedObservers;
    unsigned long long  _warmUpModeRequirementsCount;
}

@property (nonatomic, readonly) double duration;
@property (getter=isPaused, nonatomic, readonly) bool paused;
@property (nonatomic, readonly) double timestamp;

+ (void)_releaseCurrentDisplayLinkManager;
+ (id)currentDisplayLinkManager;

- (void).cxx_destruct;
- (void)_didAddFirstObserver;
- (void)_didRemoveLastObserver;
- (void)_displayDidRefresh:(id)arg1;
- (id)_displayLink;
- (bool)_isWarmUpModeEnabled;
- (id)_prepareUpdatedObserversForModification;
- (void)_setDisplayLink:(id)arg1;
- (id)addObserverForFrameInterval:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (id)addObserverWithHandler:(id /* block */)arg1;
- (void)beginRequiringWarmUpMode;
- (void)dealloc;
- (double)duration;
- (void)endRequiringWarmUpMode;
- (id)init;
- (bool)isPaused;
- (void)removeObserverWithToken:(id)arg1;
- (double)timestamp;

@end
