/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKNavigationBarCanvasView : UIView {
    CKNavigationButtonView * _buttonViewFaceTimeAudio;
    CKNavigationButtonView * _buttonViewFaceTimeVideo;
    CKNavigationButtonView * _buttonViewInfo;
    bool  _enforceLeftItemViewsAlignmentToCenter;
    CKEntity * _entity;
    bool  _isBusinessChat;
    bool  _isShowingContactPhotos;
    bool  _isShowingControls;
    bool  _isTearingDownButtonViews;
    long long  _joinButtonStyle;
    bool  _keepTitleViewCentered;
    UIView * _leftItemView;
    bool  _multiwayAudioButtonHidden;
    double  _preferredHeight;
    UIView * _rightItemView;
    UIImageView * _statusIndicatorImageView;
    long long  _statusIndicatorType;
    UIView * _titleView;
}

@property (nonatomic, retain) CKNavigationButtonView *buttonViewFaceTimeAudio;
@property (nonatomic, retain) CKNavigationButtonView *buttonViewFaceTimeVideo;
@property (nonatomic, retain) CKNavigationButtonView *buttonViewInfo;
@property (nonatomic) bool enforceLeftItemViewsAlignmentToCenter;
@property (nonatomic, retain) CKEntity *entity;
@property (nonatomic) bool isBusinessChat;
@property (nonatomic) bool isShowingContactPhotos;
@property (nonatomic) bool isShowingControls;
@property (nonatomic) bool isTearingDownButtonViews;
@property (nonatomic) long long joinButtonStyle;
@property (nonatomic) bool keepTitleViewCentered;
@property (nonatomic, retain) UIView *leftItemView;
@property (nonatomic) bool multiwayAudioButtonHidden;
@property (nonatomic) double preferredHeight;
@property (nonatomic, retain) UIView *rightItemView;
@property (nonatomic, retain) UIImageView *statusIndicatorImageView;
@property (nonatomic) long long statusIndicatorType;
@property (nonatomic, retain) UIView *titleView;

+ (double)heightWithButtonViews;
+ (double)heightWithButtonViewsContactless;
+ (double)heightWithoutButtonViews;
+ (double)heightWithoutButtonViewsContactless;
+ (double)maxHeight;
+ (double)minHeight;
+ (double)preferredLandscapeHeightForCompactWidth;
+ (double)preferredLandscapeHeightForRegularWidth;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_calculateFrameForButtonPositionType:(long long)arg1 shouldOffset:(bool)arg2;
- (bool)_canShowAvatarView;
- (void)_handleTranscriptScroll:(id)arg1;
- (void)_setupButtonContainer;
- (bool)_shouldUseTallHeight;
- (void)_tearDownButtonContainer;
- (void)_updateJoinButtonStyle;
- (id)buttonViewFaceTimeAudio;
- (id)buttonViewFaceTimeVideo;
- (id)buttonViewInfo;
- (void)clearAllItemViews;
- (bool)enforceLeftItemViewsAlignmentToCenter;
- (id)entity;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 preferredHeight:(double)arg2;
- (bool)isBusinessChat;
- (bool)isShowingContactPhotos;
- (bool)isShowingControls;
- (bool)isTearingDownButtonViews;
- (long long)joinButtonStyle;
- (bool)keepTitleViewCentered;
- (void)layoutSubviews;
- (id)leftItemView;
- (bool)multiwayAudioButtonHidden;
- (double)preferredHeight;
- (id)rightItemView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)setButtonViewFaceTimeAudio:(id)arg1;
- (void)setButtonViewFaceTimeVideo:(id)arg1;
- (void)setButtonViewInfo:(id)arg1;
- (void)setEnforceLeftItemViewsAlignmentToCenter:(bool)arg1;
- (void)setEntity:(id)arg1;
- (void)setIsBusinessChat:(bool)arg1;
- (void)setIsShowingContactPhotos:(bool)arg1;
- (void)setIsShowingControls:(bool)arg1;
- (void)setIsTearingDownButtonViews:(bool)arg1;
- (void)setJoinButtonStyle:(long long)arg1;
- (void)setKeepTitleViewCentered:(bool)arg1;
- (void)setLeftItemView:(id)arg1;
- (void)setMultiwayAudioButtonHidden:(bool)arg1;
- (void)setPreferredHeight:(double)arg1;
- (void)setRightItemView:(id)arg1;
- (void)setStatusIndicatorImageView:(id)arg1;
- (void)setStatusIndicatorType:(long long)arg1;
- (void)setTitleView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)statusIndicatorImageView;
- (long long)statusIndicatorType;
- (id)titleView;

@end
