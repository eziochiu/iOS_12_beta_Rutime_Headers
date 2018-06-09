/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISegment : UIImageView {
    _UISegmentedControlAppearanceStorage * _appearanceStorage;
    NSString * _badgeValue;
    _UIBadgeView * _badgeView;
    long long  _barStyle;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentOffset;
    _UIFloatingContentView * _floatingContentView;
    UIView * _info;
    NSArray * _infoConstraints;
    id  _objectValue;
    double  _requestedScaleFactor;
    unsigned long long  _rightSegmentState;
    struct { 
        unsigned int style : 3; 
        unsigned int size : 2; 
        unsigned int selected : 1; 
        unsigned int highlighted : 1; 
        unsigned int showDivider : 1; 
        unsigned int hasImage : 1; 
        unsigned int position : 3; 
        unsigned int autosizeText : 1; 
        unsigned int isMomentary : 1; 
        unsigned int wasSelected : 1; 
        unsigned int needsBackgroundAndContentViewUpdate : 1; 
        unsigned int usesAXTextSize : 1; 
    }  _segmentFlags;
    double  _width;
}

@property (setter=_setInfoConstraints:, nonatomic, copy) NSArray *_infoConstraints;
@property (nonatomic, copy) NSString *badgeValue;
@property (readonly) UIView *badgeView;
@property int controlSize;
@property (getter=isMomentary) bool momentary;
@property (nonatomic) double requestedScaleFactor;
@property (getter=isSelected) bool selected;

+ (id)_backgroundImageWithStorage:(id)arg1 style:(long long)arg2 mini:(bool)arg3 state:(unsigned long long)arg4 position:(unsigned int)arg5 drawMode:(int*)arg6 defaultBlock:(id /* block */)arg7;

- (void).cxx_destruct;
- (id)_attributedTextForState:(unsigned long long)arg1 selected:(bool)arg2;
- (double)_barHeight;
- (void)_commonSegmentInit;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_currentOptionsStyleTextColor;
- (id)_currentOptionsStyleTextShadowColor;
- (id)_dividerImage;
- (id)_dividerImageIsCustom:(bool*)arg1;
- (id)_effectiveContentView;
- (id)_encodableSubviews;
- (id)_floatingContentView;
- (void)_forceInfoDisplay;
- (bool)_hasSelectedColor;
- (double)_idealWidth;
- (id)_infoConstraints;
- (void)_invalidateInfoConstraints;
- (bool)_isInMiniBar;
- (struct CGSize { double x1; double x2; })_maximumTextSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_paddingInsets;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_positionInfo;
- (void)_positionInfoWithoutAnimation;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (id)_segmentLabel;
- (unsigned long long)_segmentState;
- (void)_setEnabledAppearance:(bool)arg1;
- (void)_setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)_setInfoConstraints:(id)arg1;
- (bool)_shouldUsePadMomentaryAppearance;
- (id)_tintColorArchivingKey;
- (void)_updateBackgroundAndContentViews;
- (void)_updateBackgroundAndContentViewsIfNeeded;
- (void)_updateFloatingContentControlState:(unsigned long long)arg1 context:(id)arg2 withAnimationCoordinator:(id)arg3 animated:(bool)arg4;
- (void)_updateTextColors;
- (void)animateAdd:(bool)arg1;
- (void)animateRemoveForWidth:(double)arg1;
- (id)badgeValue;
- (id)badgeView;
- (bool)canBecomeFocused;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRect;
- (struct CGSize { double x1; double x2; })contentSize;
- (int)controlSize;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)disabledTextColor;
- (void)encodeWithCoder:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithInfo:(id)arg1 style:(long long)arg2 size:(int)arg3 barStyle:(long long)arg4 tintColor:(id)arg5 appearanceStorage:(id)arg6 position:(unsigned int)arg7 autosizeText:(bool)arg8;
- (void)insertDividerView;
- (bool)isHighlighted;
- (bool)isMomentary;
- (bool)isSelected;
- (id)label;
- (void)layoutSubviews;
- (id)objectValue;
- (double)requestedScaleFactor;
- (void)setAutosizeText:(bool)arg1;
- (void)setBadgeValue:(id)arg1;
- (void)setBarStyle:(long long)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setControlSize:(int)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMomentary:(bool)arg1;
- (void)setNeedsBackgroundAndContentViewUpdate;
- (void)setObjectValue:(id)arg1;
- (void)setPosition:(unsigned int)arg1;
- (void)setRequestedScaleFactor:(double)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShowDivider:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setUsesAXTextSize:(bool)arg1;
- (void)setWasSelected:(bool)arg1;
- (bool)showDivider;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)updateDividerViewForChangedSegment:(id)arg1;
- (void)updateForAppearance:(id)arg1 style:(int)arg2;
- (void)updateMasking;
- (bool)useBlockyMagnificationInClassic;
- (id)viewForLastBaselineLayout;

@end
