/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBRenderTraits : NSObject <NSCopying> {
    UIKBGradient * _backgroundGradient;
    long long  _blendForm;
    bool  _blurBlending;
    bool  _controlOpacities;
    UIKBTextStyle * _fallbackSymbolStyle;
    NSMutableArray * _foregroundRenderEffects;
    UIKBRenderGeometry * _geometry;
    NSString * _hashString;
    UIKBRenderTraits * _highlightedVariantTraits;
    bool  _honorControlOpacity;
    UIKBGradient * _layeredBackgroundGradient;
    UIKBGradient * _layeredForegroundGradient;
    NSMutableArray * _renderEffects;
    NSArray * _renderFlags;
    long long  _renderFlagsForAboveEffects;
    bool  _renderSecondarySymbolsSeparately;
    NSArray * _secondarySymbolStyles;
    UIKBTextStyle * _symbolStyle;
    NSArray * _variantGeometries;
    UIKBRenderTraits * _variantTraits;
}

@property (nonatomic, retain) UIKBGradient *backgroundGradient;
@property (nonatomic) long long blendForm;
@property (nonatomic) bool blurBlending;
@property (nonatomic) bool controlOpacities;
@property (nonatomic, retain) UIKBTextStyle *fallbackSymbolStyle;
@property (nonatomic, readonly) NSArray *foregroundRenderEffects;
@property (nonatomic, retain) UIKBRenderGeometry *geometry;
@property (nonatomic, retain) NSString *hashString;
@property (nonatomic, retain) UIKBRenderTraits *highlightedVariantTraits;
@property (nonatomic, retain) UIKBGradient *layeredBackgroundGradient;
@property (nonatomic, retain) UIKBGradient *layeredForegroundGradient;
@property (nonatomic, readonly) NSArray *renderEffects;
@property (nonatomic, retain) NSArray *renderFlags;
@property (nonatomic) long long renderFlagsForAboveEffects;
@property (nonatomic) bool renderSecondarySymbolsSeparately;
@property (nonatomic, retain) NSArray *secondarySymbolStyles;
@property (nonatomic, retain) UIKBTextStyle *symbolStyle;
@property (nonatomic, retain) NSArray *variantGeometries;
@property (nonatomic, retain) UIKBRenderTraits *variantTraits;

+ (id)emptyTraits;
+ (id)traitsWithGeometry:(id)arg1;
+ (id)traitsWithSymbolStyle:(id)arg1;

- (void)addForegroundRenderEffect:(id)arg1;
- (void)addRenderEffect:(id)arg1;
- (id)backgroundGradient;
- (long long)blendForm;
- (bool)blurBlending;
- (bool)controlOpacities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)fallbackSymbolStyle;
- (id)foregroundRenderEffects;
- (id)geometry;
- (id)hashString;
- (id)highlightedVariantTraits;
- (bool)isEqual:(id)arg1;
- (id)layeredBackgroundGradient;
- (id)layeredForegroundGradient;
- (void)modifyForMasking;
- (void)overlayWithTraits:(id)arg1;
- (void)removeAllRenderEffects;
- (id)renderEffects;
- (id)renderFlags;
- (long long)renderFlagsForAboveEffects;
- (bool)renderSecondarySymbolsSeparately;
- (id)secondarySymbolStyles;
- (void)setBackgroundGradient:(id)arg1;
- (void)setBlendForm:(long long)arg1;
- (void)setBlurBlending:(bool)arg1;
- (void)setControlOpacities:(bool)arg1;
- (void)setFallbackSymbolStyle:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setHashString:(id)arg1;
- (void)setHighlightedVariantTraits:(id)arg1;
- (void)setLayeredBackgroundGradient:(id)arg1;
- (void)setLayeredForegroundGradient:(id)arg1;
- (void)setRenderFlags:(id)arg1;
- (void)setRenderFlagsForAboveEffects:(long long)arg1;
- (void)setRenderSecondarySymbolsSeparately:(bool)arg1;
- (void)setSecondarySymbolStyles:(id)arg1;
- (void)setSymbolStyle:(id)arg1;
- (void)setVariantGeometries:(id)arg1;
- (void)setVariantTraits:(id)arg1;
- (id)symbolStyle;
- (id)variantGeometries;
- (id)variantTraits;

@end
