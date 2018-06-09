/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

@interface IMFullScreenEffect : NSObject {
    <IMFullScreenEffectDelegate> * _delegate;
    NSString * _identifier;
    NSArray * _messageFilters;
    NSURL * _soundEffectFileURL;
    bool  _soundEffectHasHapticTrack;
    bool  _triggeredByResponseKit;
    IMMessagePartChatItem * _triggeringChatItem;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic) <IMFullScreenEffectDelegate> *delegate;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) bool effectIsDark;
@property (nonatomic, readonly) Class effectViewClass;
@property (getter=isForegroundEffect, nonatomic, readonly) bool foregroundEffect;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long layerCount;
@property (nonatomic, readonly) NSArray *messageFilters;
@property (nonatomic, readonly) bool shouldDrawOverNavigationBar;
@property (nonatomic, readonly) NSURL *soundEffectFileURL;
@property (nonatomic, readonly) bool soundEffectHasHapticTrack;
@property (nonatomic) bool triggeredByResponseKit;
@property (nonatomic, copy) IMMessagePartChatItem *triggeringChatItem;

+ (id)_monochromeDimmingFilterWithType:(long long)arg1;
+ (id)bigEmojiFilter;
+ (id)stickerFilter;
+ (id)tapBackFilter;

- (void).cxx_destruct;
- (void)_didPrepareSoundEffect;
- (void)applyMessageFiltersToCells:(id)arg1;
- (void)applyMessageFiltersToTriggeringCell:(id)arg1;
- (struct UIColor { Class x1; }*)backgroundColor;
- (void)clearMessageFiltersFromCells:(id)arg1;
- (id)delegate;
- (double)duration;
- (bool)effectIsDark;
- (Class)effectViewClass;
- (id)identifier;
- (bool)isForegroundEffect;
- (unsigned long long)layerCount;
- (id)messageFilters;
- (void)playSoundEffect;
- (void)prepareSoundEffect;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTriggeredByResponseKit:(bool)arg1;
- (void)setTriggeringChatItem:(id)arg1;
- (bool)shouldDrawOverNavigationBar;
- (id)soundEffectFileURL;
- (bool)soundEffectHasHapticTrack;
- (void)stopSoundEffect;
- (bool)triggeredByResponseKit;
- (id)triggeringChatItem;

@end
