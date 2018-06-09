/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityViewContentArtworkDescriptor : NSObject <NSCopying> {
    NSSet * _artworkAdditionalPropertiesToPrefetch;
    NSString * _artworkAllowsUserInteractionProperty;
    double  _artworkAspectRatio;
    UIColor * _artworkBackgoundColor;
    UIColor * _artworkBorderColor;
    long long  _artworkContentMode;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _artworkEdgeInsets;
    UIColor * _artworkHighlightedBackgoundColor;
    long long  _artworkPlaceholderStyle;
    NSString * _artworkProperty;
    struct CGSize { 
        double width; 
        double height; 
    }  _artworkSize;
    MPULayoutInterpolator * _artworkTrailingEdgeInsetFromLeadingLayoutInsetLayoutInterpolator;
    NSMutableDictionary * _cachedArtworkPlaceholderImages;
    double  _displayScale;
    bool  _hasValidLastUsedArtworkEdgeInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _lastUsedArtworkEdgeInsets;
    MusicArtworkPlaceholderKey * _lastUsedArtworkPlaceholderKey;
    double  _lastUsedContainerViewLeadingLayoutInset;
    NSString * _wantsToHideBorderProperty;
}

@property (nonatomic, copy) NSSet *artworkAdditionalPropertiesToPrefetch;
@property (nonatomic, copy) NSString *artworkAllowsUserInteractionProperty;
@property (nonatomic) double artworkAspectRatio;
@property (nonatomic, copy) UIColor *artworkBackgoundColor;
@property (nonatomic, copy) UIColor *artworkBorderColor;
@property (nonatomic) long long artworkContentMode;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } artworkEdgeInsets;
@property (nonatomic, copy) UIColor *artworkHighlightedBackgoundColor;
@property (nonatomic) long long artworkPlaceholderStyle;
@property (nonatomic, copy) NSString *artworkProperty;
@property (nonatomic) struct CGSize { double x1; double x2; } artworkSize;
@property (nonatomic, copy) MPULayoutInterpolator *artworkTrailingEdgeInsetFromLeadingLayoutInsetLayoutInterpolator;
@property (nonatomic) double displayScale;
@property (nonatomic, copy) NSString *wantsToHideBorderProperty;

- (void).cxx_destruct;
- (id)_grayArtworkPlaceholderImageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)_missingArtworkImageNamed:(id)arg1 forSize:(struct CGSize { double x1; double x2; })arg2;
- (id)artworkAdditionalPropertiesToPrefetch;
- (id)artworkAllowsUserInteractionProperty;
- (double)artworkAspectRatio;
- (id)artworkBackgoundColor;
- (id)artworkBorderColor;
- (long long)artworkContentMode;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })artworkEdgeInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })artworkEdgeInsetsForContainerViewLayoutInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)artworkHighlightedBackgoundColor;
- (id)artworkPlaceholderImageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (long long)artworkPlaceholderStyle;
- (id)artworkProperty;
- (struct CGSize { double x1; double x2; })artworkSize;
- (id)artworkTrailingEdgeInsetFromLeadingLayoutInsetLayoutInterpolator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)displayScale;
- (id)init;
- (void)setArtworkAdditionalPropertiesToPrefetch:(id)arg1;
- (void)setArtworkAllowsUserInteractionProperty:(id)arg1;
- (void)setArtworkAspectRatio:(double)arg1;
- (void)setArtworkBackgoundColor:(id)arg1;
- (void)setArtworkBorderColor:(id)arg1;
- (void)setArtworkContentMode:(long long)arg1;
- (void)setArtworkEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setArtworkHighlightedBackgoundColor:(id)arg1;
- (void)setArtworkPlaceholderStyle:(long long)arg1;
- (void)setArtworkProperty:(id)arg1;
- (void)setArtworkSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setArtworkTrailingEdgeInsetFromLeadingLayoutInsetLayoutInterpolator:(id)arg1;
- (void)setDisplayScale:(double)arg1;
- (void)setWantsToHideBorderProperty:(id)arg1;
- (id)wantsToHideBorderProperty;

@end
