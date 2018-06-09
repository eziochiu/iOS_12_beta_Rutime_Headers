/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

@interface _DKNowPlayingMonitor : _DKMonitor {
    unsigned int  _lastPlaybackState;
}

@property (nonatomic) unsigned int lastPlaybackState;

+ (id /* block */)_eventFilterBlock;
+ (id)_eventWithBundleIdentifier:(id)arg1 metadata:(id)arg2;
+ (id)_metadataFromInfo:(id)arg1;
+ (id)entitlements;
+ (id)eventStream;
+ (void)setPlaybackState:(unsigned int)arg1 bundleId:(id)arg2 track:(id)arg3;

- (void)_nowPlayingInfoDidChange:(void*)arg1;
- (void)_registerForNowPlayingNotifications;
- (void)deactivate;
- (void)dealloc;
- (id)init;
- (unsigned int)lastPlaybackState;
- (void)setLastPlaybackState:(unsigned int)arg1;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;

@end
