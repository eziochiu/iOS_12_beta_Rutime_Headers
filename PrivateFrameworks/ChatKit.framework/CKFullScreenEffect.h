/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKFullScreenEffect : NSObject <CKAudioControllerDelegate> {
    CKAudioController * _audioController;
    float  _currentVolume;
    <CKFullScreenEffectDelegate> * _delegate;
    NSString * _identifier;
    bool  _triggeredByResponseKit;
    CKMessagePartChatItem * _triggeringChatItem;
    BOOL  messageOrientation;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKFullScreenEffectDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) BOOL messageOrientation;
@property (readonly) Class superclass;
@property (nonatomic) bool triggeredByResponseKit;
@property (nonatomic, retain) CKMessagePartChatItem *triggeringChatItem;

+ (id)_monochromeDimmingFilterWithType:(int)arg1;
+ (id)bigEmojiFilter;
+ (id)stickerFilter;
+ (id)tapBackFilter;

- (void).cxx_destruct;
- (void)_audioSessionOptionsWillChange:(id)arg1;
- (void)_didPrepareSoundEffect;
- (void)_ensureAudioPlayer;
- (int)_filterTypeForCell:(id)arg1 caresAboutOrientation:(bool*)arg2 orientation:(BOOL*)arg3;
- (bool)_supportsSoundEffects;
- (void)animateFiltersForCell:(id)arg1;
- (void)applyMessageFiltersToCells:(id)arg1;
- (void)applyMessageFiltersToTriggeringCell:(id)arg1;
- (void)audioController:(id)arg1 didPrepareMediaObjectToPlay:(id)arg2 successfully:(bool)arg3;
- (void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (id)backgroundColor;
- (void)clearMessageFiltersFromCells:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (bool)effectIsDark;
- (Class)effectViewClass;
- (id)identifier;
- (bool)isForegroundEffect;
- (unsigned long long)layerCount;
- (id)messageFilters;
- (BOOL)messageOrientation;
- (void)playSoundEffect;
- (void)prepareSoundEffect;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMessageOrientation:(BOOL)arg1;
- (void)setTriggeredByResponseKit:(bool)arg1;
- (void)setTriggeringChatItem:(id)arg1;
- (bool)shouldDrawOverNavigationBar;
- (id)soundEffectFileURL;
- (bool)soundEffectHasHapticTrack;
- (void)stopSoundEffect;
- (bool)triggeredByResponseKit;
- (id)triggeringChatItem;

@end
