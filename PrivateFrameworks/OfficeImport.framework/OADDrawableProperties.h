/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADDrawableProperties : OADProperties {
    unsigned int  mAspectRatioLocked;
    OADHyperlink * mClickHyperlink;
    NSString * mDescription;
    unsigned int  mHasAspectRatioLocked;
    unsigned int  mHasWrdInline;
    OADHyperlink * mHoverHyperlink;
    OADOrientedBounds * mOrientedBounds;
    NSString * mTitle;
    unsigned int  mWrdInline;
}

- (id)altDescription;
- (id)altTitle;
- (id)clickHyperlink;
- (void)dealloc;
- (id)description;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (bool)hasAltDescription;
- (bool)hasAltTitle;
- (bool)hasAspectRatioLocked;
- (bool)hasClickHyperlink;
- (bool)hasHoverHyperlink;
- (bool)hasOrientedBounds;
- (bool)hasWrdInline;
- (unsigned long long)hash;
- (id)hoverHyperlink;
- (id)initWithDefaults;
- (bool)isAspectRatioLocked;
- (bool)isEqual:(id)arg1;
- (bool)isWrdInline;
- (id)orientedBounds;
- (void)removeUnnecessaryOverrides;
- (void)setAltDescription:(id)arg1;
- (void)setAltTitle:(id)arg1;
- (void)setAspectRatioLocked:(bool)arg1;
- (void)setClickHyperlink:(id)arg1;
- (void)setHoverHyperlink:(id)arg1;
- (void)setOrientedBounds:(id)arg1;
- (void)setWrdInline:(bool)arg1;

@end
