/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVTurboModePlaybackControlsPlaceholderView : UIView {
    UIViewPropertyAnimator * _animator;
    long long  _includedControlType;
    long long  _preferredUnobscuredArea;
    AVButton * _prominentPlayButton;
    UIView * _prominentPlayButtonContainer;
    AVStyleSheet * _styleSheet;
    AVVolumeButtonControl * _volumeButton;
    UIView * _volumeButtonContainer;
    NSString * _volumeButtonMicaPackageStateName;
}

@property (nonatomic, retain) UIViewPropertyAnimator *animator;
@property (nonatomic) long long includedControlType;
@property (nonatomic) long long preferredUnobscuredArea;
@property (nonatomic) AVButton *prominentPlayButton;
@property (nonatomic) UIView *prominentPlayButtonContainer;
@property (nonatomic, retain) AVStyleSheet *styleSheet;
@property (nonatomic) AVVolumeButtonControl *volumeButton;
@property (nonatomic) UIView *volumeButtonContainer;
@property (nonatomic, copy) NSString *volumeButtonMicaPackageStateName;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForIncludedViewType:(long long)arg1;
- (id)_makeProminentPlayButtonAndContainer;
- (id)_makeVolumeButtonAndContainer;
- (id)_viewForIncludedControlType:(long long)arg1;
- (id)animator;
- (long long)includedControlType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleSheet:(id)arg2;
- (void)layoutSubviews;
- (long long)preferredUnobscuredArea;
- (id)prominentPlayButton;
- (id)prominentPlayButtonContainer;
- (void)setAnimator:(id)arg1;
- (void)setIncludedControlType:(long long)arg1;
- (void)setPreferredUnobscuredArea:(long long)arg1;
- (void)setProminentPlayButton:(id)arg1;
- (void)setProminentPlayButtonContainer:(id)arg1;
- (void)setStyleSheet:(id)arg1;
- (void)setVolumeButton:(id)arg1;
- (void)setVolumeButtonContainer:(id)arg1;
- (void)setVolumeButtonMicaPackageStateName:(id)arg1;
- (id)styleSheet;
- (id)volumeButton;
- (id)volumeButtonContainer;
- (id)volumeButtonMicaPackageStateName;

@end
