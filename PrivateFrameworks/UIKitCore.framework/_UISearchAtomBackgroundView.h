/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISearchAtomBackgroundView : UIView <_UIAtomTextViewAtomLayout> {
    UIColor * _defaultColor;
    struct { 
        unsigned int enabled : 1; 
    }  _flags;
    long long  _selectionStyle;
}

@property (nonatomic, readonly) long long baseWritingDirection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UIColor *defaultColor;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } selectionBounds;
@property (nonatomic) long long selectionStyle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateBackgroundColor;
- (void)_updateSelectionStyleMask;
- (id)defaultColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionBounds;
- (long long)selectionStyle;
- (void)setDefaultColor:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setSelectionStyle:(long long)arg1;
- (void)setSelectionStyle:(long long)arg1 animated:(bool)arg2;
- (void)tintColorDidChange;

@end
