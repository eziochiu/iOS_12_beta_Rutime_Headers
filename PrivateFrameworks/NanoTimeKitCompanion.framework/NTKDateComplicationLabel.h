/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKDateComplicationLabel : UIControl <NTKControl, NTKDateComplicationDisplay> {
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedSize;
    bool  _cachedSizeIsValid;
    NSString * _currentDateText;
    CLKDevice * _device;
    CLKFont * _font;
    bool  _frozen;
    UIView * _highlightView;
    UILabel * _internalLabel;
    bool  _legibilityHidden;
    UIColor * _numberColor;
    unsigned long long  _overrideDateStyle;
    long long  _sizeStyle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _touchEdgeInsets;
    bool  _usesLegibility;
    <NTKComplicationDisplayObserver> * displayObserver;
}

@property (setter=_setFirstLineBaselineFrameOriginY:, nonatomic) double _firstLineBaselineFrameOriginY;
@property (nonatomic, readonly) double _lastLineBaseline;
@property (setter=_setLastLineBaselineFrameOriginY:, nonatomic) double _lastLineBaselineFrameOriginY;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic) <NTKComplicationDisplayObserver> *displayObserver;
@property (nonatomic, retain) CLKFont *font;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) bool legibilityHidden;
@property (nonatomic, retain) UIColor *numberColor;
@property (nonatomic) unsigned long long overrideDateStyle;
@property (nonatomic) bool shouldUseTemplateColors;
@property (nonatomic, readonly) long long sizeStyle;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } touchEdgeInsets;
@property (nonatomic) bool usesLegibility;

- (void).cxx_destruct;
- (void)_applyAccentColorAttributes;
- (id)_attributedStringAccentingNumbersInString:(id)arg1;
- (double)_cornerRadius;
- (double)_firstLineBaselineFrameOriginY;
- (double)_firstLineBaselineOffsetFromBoundsTop;
- (struct CGSize { double x1; double x2; })_highlightInset;
- (void)_invalidateInternalLabelSize;
- (double)_lastLineBaseline;
- (double)_lastLineBaselineFrameOriginY;
- (double)_legibtilityShadowRadius;
- (void)_setFirstLineBaselineFrameOriginY:(double)arg1;
- (void)_setFont:(id)arg1;
- (void)_setLastLineBaselineFrameOriginY:(double)arg1;
- (void)_setText:(id)arg1;
- (id)device;
- (id)displayObserver;
- (id)font;
- (id)initWithSizeStyle:(long long)arg1 forDevice:(id)arg2;
- (void)layoutSubviews;
- (bool)legibilityHidden;
- (id)numberColor;
- (unsigned long long)overrideDateStyle;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setDateComplicationText:(id)arg1 forDateStyle:(unsigned long long)arg2;
- (void)setDisplayObserver:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLegibilityHidden:(bool)arg1;
- (void)setNumberColor:(id)arg1;
- (void)setOverrideDateStyle:(unsigned long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTouchEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setUsesLegibility:(bool)arg1;
- (bool)shouldCancelTouchesInScrollview;
- (long long)sizeStyle;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })touchEdgeInsets;
- (bool)usesLegibility;

@end
