/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListMaterialButton : UIControl <NCMaterialsAdjusting, PLContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    NSString * _backgroundGroupName;
    UIView * _backgroundHighlightView;
    unsigned long long  _backgroundMaterialOptions;
    MTMaterialView * _backgroundMaterialView;
    double  _cornerRadius;
    long long  _materialRecipe;
    unsigned long long  _overlayMaterialOptions;
    MTMaterialView * _overlayMaterialView;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, copy) NSString *backgroundGroupName;
@property (nonatomic, retain) UIView *backgroundHighlightView;
@property (nonatomic) unsigned long long backgroundMaterialOptions;
@property (nonatomic, retain) MTMaterialView *backgroundMaterialView;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long materialRecipe;
@property (nonatomic) unsigned long long overlayMaterialOptions;
@property (nonatomic, retain) MTMaterialView *overlayMaterialView;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureBackgroundHighlightViewIfNecessary;
- (void)_configureBackgroundMaterialViewIfNecessary;
- (void)_configureOverlayMaterialViewIfNecessary;
- (void)_highlightButton:(id)arg1;
- (void)_layoutBackgroundHighlightView;
- (void)_layoutBackgroundMaterialView;
- (void)_layoutOverlayMaterialView;
- (id)_newMaterialViewWithRecipe:(long long)arg1 options:(unsigned long long)arg2;
- (void)_unHighlightButton:(id)arg1;
- (void)_updateViewsForMaterialChanges;
- (void)adjustForChangeInMaterialRecipe:(long long)arg1 backgroundMaterialOptions:(unsigned long long)arg2 overlayMaterialOptions:(unsigned long long)arg3;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)backgroundGroupName;
- (id)backgroundHighlightView;
- (unsigned long long)backgroundMaterialOptions;
- (id)backgroundMaterialView;
- (double)cornerRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2;
- (void)layoutSubviews;
- (long long)materialRecipe;
- (unsigned long long)overlayMaterialOptions;
- (id)overlayMaterialView;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setBackgroundGroupName:(id)arg1;
- (void)setBackgroundHighlightView:(id)arg1;
- (void)setBackgroundMaterialOptions:(unsigned long long)arg1;
- (void)setBackgroundMaterialView:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMaterialRecipe:(long long)arg1;
- (void)setOverlayMaterialOptions:(unsigned long long)arg1;
- (void)setOverlayMaterialView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)vibrantStylingProvider;
- (void)willMoveToSuperview:(id)arg1;

@end
