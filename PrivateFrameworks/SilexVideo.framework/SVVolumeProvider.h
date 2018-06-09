/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVolumeProvider : NSObject <SVVolumeProviding, SVVolumeReporting> {
    bool  _muted;
    NSHashTable * _observers;
    float  _volume;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool muted;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) float volume;

- (void).cxx_destruct;
- (void)addVolumeObserver:(id)arg1;
- (id)initWithMuteState:(bool)arg1 volume:(float)arg2;
- (bool)muted;
- (id)observers;
- (void)removeVolumeObserver:(id)arg1;
- (void)setMuted:(bool)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;

@end
