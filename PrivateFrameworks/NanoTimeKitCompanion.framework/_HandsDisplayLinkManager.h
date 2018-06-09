/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _HandsDisplayLinkManager : NSObject {
    CADisplayLink * _displayLink;
    NSMutableDictionary * _handlers;
    bool  _inForeground;
    unsigned long long  _nextToken;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_backgrounded;
- (void)_foregrounded;
- (void)_invokeHandlers;
- (id)_nextToken;
- (void)_onDisplayLink:(id)arg1;
- (void)_updateDisplayLink;
- (void)dealloc;
- (id)init;
- (id)startUpdatesWithHandler:(id /* block */)arg1;
- (void)stopUpdatesForToken:(id)arg1;

@end
