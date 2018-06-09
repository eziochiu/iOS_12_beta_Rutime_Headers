/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUServiceIconCell : UICollectionViewCell {
    bool  _hasConfiguredConstraints;
    <HFIconDescriptor> * _iconDescriptor;
    HUIconView * _iconView;
}

@property (nonatomic) bool hasConfiguredConstraints;
@property (nonatomic, retain) <HFIconDescriptor> *iconDescriptor;
@property (nonatomic, readonly) HUIconView *iconView;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_updateBackgroundColor;
- (bool)hasConfiguredConstraints;
- (id)iconDescriptor;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setHasConfiguredConstraints:(bool)arg1;
- (void)setIconDescriptor:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)tintColorDidChange;
- (void)updateConstraints;

@end