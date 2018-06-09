/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAudioControl : NSObject <HMObjectMerge, _HMAudioControlDelegate> {
    _HMAudioControl * _audioControl;
    <HMAudioControlDelegate> * _delegate;
    HMMediaSession * _mediaSession;
}

@property (nonatomic, retain) _HMAudioControl *audioControl;
@property (readonly, copy) NSString *debugDescription;
@property <HMAudioControlDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property HMMediaSession *mediaSession;
@property (getter=isMuted) bool muted;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property float volume;

- (void).cxx_destruct;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)audioControl;
- (void)audioControl:(id)arg1 didUpdateMuted:(bool)arg2;
- (void)audioControl:(id)arg1 didUpdateVolume:(float)arg2;
- (id)clientQueue;
- (void)configure:(id)arg1;
- (id)delegate;
- (id)initWithMediaSession:(id)arg1 propertyQueue:(id)arg2;
- (bool)isMuted;
- (id)mediaSession;
- (void)setAudioControl:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMediaSession:(id)arg1;
- (void)setMuted:(bool)arg1;
- (void)setVolume:(float)arg1;
- (id)uniqueIdentifier;
- (void)updateMuted:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updateVolume:(float)arg1 completionHandler:(id /* block */)arg2;
- (float)volume;

@end
