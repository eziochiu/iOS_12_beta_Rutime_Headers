/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
 */

@interface CAMLightingNameBadge : CAMBadgeTextView {
    UIView * __snapshotView;
    bool  _highlighted;
    long long  _lightingType;
}

@property (setter=_setSnapshotView:, nonatomic, retain) UIView *_snapshotView;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) long long lightingType;

- (void).cxx_destruct;
- (void)_setSnapshotView:(id)arg1;
- (id)_snapshotView;
- (void)_updateColorsAnimated:(bool)arg1;
- (void)_updateText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (long long)lightingType;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setLightingType:(long long)arg1;

@end
