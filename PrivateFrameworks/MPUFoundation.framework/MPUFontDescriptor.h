/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUFontDescriptor : NSObject <NSCopying, NSMutableCopying> {
    MPULayoutInterpolator * _customFontPointSizeLayoutInterpolator;
    UIFont * _defaultFont;
    struct { 
        double ascender; 
        bool isAscenderInitialized; 
        double bodyLeading; 
        bool isBodyLeadingInitialized; 
        double capHeight; 
        bool isCapHeightInitialized; 
        double descender; 
        bool isDescenderInitialized; 
        double lineHeight; 
        bool isLineHeightInitialized; 
    }  _defaultFontMetrics;
    double  _defaultPointSizeAdjustment;
    long long  _leadingAdjustment;
    UIFont * _preferredFont;
    struct { 
        double ascender; 
        bool isAscenderInitialized; 
        double bodyLeading; 
        bool isBodyLeadingInitialized; 
        double capHeight; 
        bool isCapHeightInitialized; 
        double descender; 
        bool isDescenderInitialized; 
        double lineHeight; 
        bool isLineHeightInitialized; 
    }  _preferredFontMetrics;
    double  _systemFontSize;
    long long  _textStyle;
    bool  _usesCondensedMetrics;
    bool  _usesItalic;
    bool  _wantsMonospaceNumbers;
    long long  _weight;
}

@property (nonatomic, readonly) UIFont *defaultFont;
@property (nonatomic, readonly) double defaultFontLineHeight;
@property (nonatomic, readonly) double defaultPointSizeAdjustment;
@property (nonatomic, readonly) long long leadingAdjustment;
@property (nonatomic, readonly) UIFont *preferredFont;
@property (nonatomic, readonly) double preferredFontAscender;
@property (nonatomic, readonly) double preferredFontBodyLeading;
@property (nonatomic, readonly) double preferredFontCapHeight;
@property (nonatomic, readonly) double preferredFontDescender;
@property (nonatomic, readonly) double preferredFontLineHeight;
@property (nonatomic, readonly) double systemFontSize;
@property (nonatomic, readonly) long long textStyle;
@property (nonatomic, readonly) bool usesCondensedMetrics;
@property (nonatomic, readonly) bool usesItalic;
@property (nonatomic, readonly) bool wantsMonospaceNumbers;
@property (nonatomic, readonly) long long weight;

+ (id)_adjustedNativeFontDescriptorWithBaseNativeFontDescriptor:(id)arg1 forCustomTextStyle:(long long)arg2;
+ (id)_baseNativeTextStyleForTextStyle:(long long)arg1;
+ (id)_fontDescriptorWithTextStyle:(long long)arg1 leadingAdjustment:(long long)arg2 weight:(long long)arg3 systemFontSize:(double)arg4 defaultPointSizeAdjustment:(double)arg5;
+ (id)_fontPointSizeLayoutInterpolatorForTextStyle:(long long)arg1;
+ (void)_getNativeFontDescriptorSymbolicTraits:(unsigned int*)arg1 nativeTextStyleAttribute:(id*)arg2 forWeight:(long long)arg3 textStyle:(long long)arg4;
+ (double)_layoutInterpolatorReferenceMetricForContentSizeCategory:(id)arg1;
+ (unsigned int)_nativeFontDescriptorSymbolicTraitsForLeadingAdjustment:(long long)arg1;
+ (unsigned int)_nativeFontDescriptorSymbolicTraitsForUsingItalic:(bool)arg1 isCondensedMetrics:(bool)arg2;
+ (id)fontDescriptorWithSystemFontSize:(double)arg1;
+ (id)fontDescriptorWithSystemFontSize:(double)arg1 leadingAdjustment:(long long)arg2;
+ (id)fontDescriptorWithSystemFontSize:(double)arg1 leadingAdjustment:(long long)arg2 weight:(long long)arg3;
+ (id)fontDescriptorWithSystemFontSize:(double)arg1 weight:(long long)arg2;
+ (id)fontDescriptorWithTextStyle:(long long)arg1;
+ (id)fontDescriptorWithTextStyle:(long long)arg1 leadingAdjustment:(long long)arg2;
+ (id)fontDescriptorWithTextStyle:(long long)arg1 leadingAdjustment:(long long)arg2 weight:(long long)arg3;
+ (id)fontDescriptorWithTextStyle:(long long)arg1 leadingAdjustment:(long long)arg2 weight:(long long)arg3 defaultPointSizeAdjustment:(double)arg4;
+ (id)fontDescriptorWithTextStyle:(long long)arg1 weight:(long long)arg2;
+ (id)invalidationHandler;

- (void).cxx_destruct;
- (id)_defaultFontDescriptorForTextStyle:(long long)arg1;
- (id)_fontPointSizeLayoutInterpolator;
- (id)_fontWithBaseNativeFontDescriptorProvider:(id /* block */)arg1;
- (void)_handleFontDescriptorDidInvalidateCachedFontsAndMetricsNotification:(id)arg1;
- (void)_invalidateCachedFontsAndMetrics;
- (id)_preferredFontDescriptorForTextStyle:(long long)arg1;
- (void)_resetToDefaultValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultFont;
- (double)defaultFontAscender;
- (double)defaultFontBodyLeading;
- (double)defaultFontCapHeight;
- (double)defaultFontDescender;
- (double)defaultFontLineHeight;
- (double)defaultPointSizeAdjustment;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (long long)leadingAdjustment;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)preferredFont;
- (double)preferredFontAscender;
- (double)preferredFontBodyLeading;
- (double)preferredFontCapHeight;
- (double)preferredFontDescender;
- (double)preferredFontLineHeight;
- (double)scaledValueForValue:(double)arg1;
- (double)systemFontSize;
- (long long)textStyle;
- (bool)usesCondensedMetrics;
- (bool)usesItalic;
- (bool)wantsMonospaceNumbers;
- (long long)weight;

@end
