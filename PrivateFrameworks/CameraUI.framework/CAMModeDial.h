/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMModeDial : UIControl <CAMAccessibilityHUDItemProvider> {
    CAGradientLayer * __gradientLayer;
    NSDictionary * __items;
    UIView * __itemsContainerView;
    UIView * __meshTransformView;
    NSArray * __modes;
    UIView * __selectedItemBackgroundView;
    <CAMModeDialDataSource> * _dataSource;
    long long  _layoutStyle;
    long long  _selectedMode;
}

@property (nonatomic, readonly) CAGradientLayer *_gradientLayer;
@property (setter=_setItems:, nonatomic, retain) NSDictionary *_items;
@property (nonatomic, readonly) UIView *_itemsContainerView;
@property (nonatomic, readonly) UIView *_meshTransformView;
@property (setter=_setModes:, nonatomic, retain) NSArray *_modes;
@property (nonatomic, readonly) UIView *_selectedItemBackgroundView;
@property (nonatomic) <CAMModeDialDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long selectedMode;
@property (readonly) Class superclass;

+ (bool)wantsVerticalModeDialForLayoutStyle:(long long)arg1;

- (void).cxx_destruct;
- (double)_centeringNudgeForMode:(long long)arg1;
- (void)_commonCAMModeDialInitializationWithLayoutStyle:(long long)arg1;
- (void)_configureGradientForLayoutStyle:(long long)arg1;
- (void)_configureMeshTransformForLayoutStyle:(long long)arg1;
- (id)_fontForLayoutStyle:(long long)arg1;
- (id)_gradientLayer;
- (struct CGPoint { double x1; double x2; })_horizontalContainerCenterForMode:(long long)arg1;
- (id)_horizontalMeshTransform;
- (struct CGSize { double x1; double x2; })_interpolatedHorizontalMeshTransformSize;
- (id)_items;
- (id)_itemsContainerView;
- (void)_layoutHorizontalModeDial;
- (void)_layoutVerticalModeDial;
- (id)_meshTransformForLayoutStyle:(long long)arg1;
- (id)_meshTransformView;
- (id)_modes;
- (long long)_nearestCaptureModeForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)_selectedItem;
- (id)_selectedItemBackgroundView;
- (void)_setItems:(id)arg1;
- (void)_setModes:(id)arg1;
- (id)_titleForMode:(long long)arg1;
- (void)_updateContainerCenterFromSelectedModeAnimated:(bool)arg1;
- (void)_updateForLayoutStyle;
- (void)_updateItemsForLayoutStyle:(long long)arg1;
- (void)_updateSelectedItemBackgroundForLayoutStyle:(long long)arg1;
- (struct CGPoint { double x1; double x2; })_verticalContainerCenterForMode:(long long)arg1;
- (id)dataSource;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (void)reloadData;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (long long)selectedMode;
- (void)setDataSource:(id)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setSelectedMode:(long long)arg1;
- (void)setSelectedMode:(long long)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateToContentSize:(id)arg1;

@end
