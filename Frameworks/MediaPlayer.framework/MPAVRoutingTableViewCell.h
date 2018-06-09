/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoutingTableViewCell : UITableViewCell <MPAVRoutingThemeableCellView> {
    <MPAVRoutingTableViewCellDelegate> * _delegate;
    UIImageView * _iconImageView;
    unsigned long long  _iconStyle;
    bool  _isDisplayedAsPicked;
    unsigned long long  _mirroringStyle;
    bool  _mirroringSwitchVisible;
    bool  _pendingSelection;
    bool  _provideOwnSeparator;
    UILabel * _routeNameLabel;
    bool  _showingVolumeSlider;
    UIImageView * _smartAudioImageView;
    UIActivityIndicatorView * _spinnerView;
    UILabel * _subtitleTextLabel;
    MPAVRoutingTableViewCellSubtitleTextState * _subtitleTextState;
    NSTimer * _subtitleTextUpdateTimer;
    double  _subtitleViewAlpha;
    bool  _useSmartAudioCheckmarkStyle;
    MPVolumeSlider * _volumeSlider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPAVRoutingTableViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long iconStyle;
@property (nonatomic) bool isDisplayedAsPicked;
@property (nonatomic) unsigned long long mirroringStyle;
@property (nonatomic) bool mirroringSwitchVisible;
@property (getter=isPendingSelection, nonatomic) bool pendingSelection;
@property (nonatomic) bool provideOwnSeparator;
@property (getter=isShowingVolumeSlider, nonatomic) bool showingVolumeSlider;
@property (nonatomic, retain) MPAVRoutingTableViewCellSubtitleTextState *subtitleTextState;
@property (nonatomic) double subtitleViewAlpha;
@property (readonly) Class superclass;
@property (nonatomic) bool useSmartAudioCheckmarkStyle;
@property (nonatomic, retain) MPVolumeSlider *volumeSlider;

- (void).cxx_destruct;
- (void)_animateSubtitleLabelToNextAvailableText;
- (id)_batteryTextForRoute:(id)arg1;
- (id)_checkmarkImageForSmartAudio;
- (id)_checkmarkImageNameForSmartAudio;
- (void)_configureDetailLabel:(id)arg1;
- (void)_configureLabel:(id)arg1;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_iconImageForRoute:(id)arg1;
- (id)_pairedDeviceTextForRoute:(id)arg1;
- (bool)_shouldShowSeparateBatteryPercentagesForBatteryLevel:(id)arg1;
- (void)_updateSmartAudioAccessory;
- (void)_updateSpinnerStyle;
- (void)_updateSubtitleTextLabelForRoute:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)iconStyle;
- (id)iconView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDisplayedAsPicked;
- (bool)isPendingSelection;
- (bool)isShowingVolumeSlider;
- (void)layoutSubviews;
- (unsigned long long)mirroringStyle;
- (bool)mirroringSwitchVisible;
- (void)prepareForReuse;
- (bool)provideOwnSeparator;
- (id)separatorView;
- (void)setAccessoryType:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIconStyle:(unsigned long long)arg1;
- (void)setIsDisplayedAsPicked:(bool)arg1;
- (void)setMirroringStyle:(unsigned long long)arg1;
- (void)setMirroringSwitchVisible:(bool)arg1;
- (void)setPendingSelection:(bool)arg1;
- (void)setProvideOwnSeparator:(bool)arg1;
- (void)setShowingVolumeSlider:(bool)arg1;
- (void)setSubtitleTextState:(id)arg1;
- (void)setSubtitleViewAlpha:(double)arg1;
- (void)setTintColor:(id)arg1;
- (void)setUseSmartAudioCheckmarkStyle:(bool)arg1;
- (void)setVolumeSlider:(id)arg1;
- (id)subtitleTextState;
- (id)subtitleView;
- (double)subtitleViewAlpha;
- (id)titleView;
- (void)updateForEndpoint:(id)arg1 route:(id)arg2 inferLocalizedModelName:(bool)arg3;
- (bool)useSmartAudioCheckmarkStyle;
- (id)volumeSlider;
- (id)volumeView;

@end
