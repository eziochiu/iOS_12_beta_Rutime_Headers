/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKColoringLabel : NTKLegibilityLabel <CLKUILabel, NTKColoringView, NTKTimeTravelState> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _cachedOpticalEdgeInsets;
    bool  _cachedOpticalEdgeInsetsIsValid;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedSingleLineSize;
    bool  _cachedSizeIsValid;
    _NTKColorManager * _colorManager;
    CLKDevice * _device;
    bool  _inTimeTravel;
    double  _maxWidth;
    id /* block */  _needsResizeHandler;
    id /* block */  _nowProvider;
    unsigned long long  _options;
    UIColor * _overrideColor;
    NSParagraphStyle * _paragraphStyle;
    CLKFont * _preTimeTravelFont;
    CLKTextProvider * _textProvider;
    CLKFont * _textProviderFont;
    CLKFont * _textProviderSmallCapsBaseFont;
    struct NSNumber { Class x1; } * _updateToken;
    bool  _updatedAfterTimeTravelStateChange;
    bool  _uppercase;
    bool  _usesTextProviderSize;
}

@property (nonatomic, readonly) double _lastLineBaseline;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic) struct CGSize { double x1; double x2; } cachedSingleLineSize;
@property (nonatomic) bool cachedSizeIsValid;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, readonly) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inTimeTravel;
@property (nonatomic) double maxWidth;
@property (nonatomic, copy) id /* block */ needsResizeHandler;
@property (nonatomic, copy) id /* block */ nowProvider;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } opticalInsets;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, retain) UIColor *overrideColor;
@property (nonatomic, copy) NSParagraphStyle *paragraphStyle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) CLKTextProvider *textProvider;
@property (nonatomic, retain) CLKFont *textProviderFont;
@property (nonatomic, retain) CLKFont *textProviderSmallCapsBaseFont;
@property (nonatomic) bool uppercase;
@property (nonatomic) bool usesLegibility;
@property (nonatomic) bool usesTextProviderSize;

+ (id)labelWithOptions:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_activeFont;
- (double)_firstLineBaseline;
- (id)_font;
- (id)_fontWithMonospaceNumbers:(id)arg1;
- (double)_lastLineBaseline;
- (void)_requeryTextProviderAndNotify:(bool)arg1;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateDynamicTracking;
- (struct CGSize { double x1; double x2; })cachedSingleLineSize;
- (bool)cachedSizeIsValid;
- (id)color;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (bool)inTimeTravel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(unsigned long long)arg2;
- (void)invalidateCachedSize;
- (double)maxWidth;
- (double)minimumWidth;
- (double)minimumWithFont:(id)arg1;
- (double)minimumWithFont:(id)arg1 smallCapsBaseFont:(id)arg2;
- (id /* block */)needsResizeHandler;
- (id /* block */)nowProvider;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })opticalInsets;
- (unsigned long long)options;
- (id)overrideColor;
- (id)paragraphStyle;
- (void)setAttributedText:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCachedSingleLineSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCachedSizeIsValid:(bool)arg1;
- (void)setColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setInTimeTravel:(bool)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setNeedsResizeHandler:(id /* block */)arg1;
- (void)setNowProvider:(id /* block */)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setOverrideColor:(id)arg1;
- (void)setParagraphStyle:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setText:(id)arg1;
- (void)setTextProvider:(id)arg1;
- (void)setTextProviderFont:(id)arg1;
- (void)setTextProviderSmallCapsBaseFont:(id)arg1;
- (void)setUppercase:(bool)arg1;
- (void)setUsesLegibility:(bool)arg1;
- (void)setUsesTextProviderSize:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (id)textProvider;
- (id)textProviderFont;
- (id)textProviderSmallCapsBaseFont;
- (bool)uppercase;
- (bool)usesLegibility:(bool)arg1;
- (bool)usesTextProviderSize;
- (double)widthForMaxWidth:(double)arg1;
- (double)widthForMaxWidth:(double)arg1 withFont:(id)arg2;
- (double)widthForMaxWidth:(double)arg1 withFont:(id)arg2 smallCapsBaseFont:(id)arg3;

@end
