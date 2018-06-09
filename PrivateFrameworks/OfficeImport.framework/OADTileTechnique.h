/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTileTechnique : OADImageFillTechnique {
    int  mAlignment;
    int  mFlipMode;
    bool  mIsAlignmentOverridden;
    bool  mIsFlipModeOverridden;
    bool  mIsOffsetXOverridden;
    bool  mIsOffsetYOverridden;
    bool  mIsScaleXOverridden;
    bool  mIsScaleYOverridden;
    float  mOffsetX;
    float  mOffsetY;
    float  mScaleX;
    float  mScaleY;
}

+ (id)defaultProperties;

- (int)alignment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (int)flipMode;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (bool)isAlignmentOverridden;
- (bool)isAnythingOverridden;
- (bool)isEqual:(id)arg1;
- (bool)isFlipModeOverridden;
- (bool)isOffsetXOverridden;
- (bool)isOffsetYOverridden;
- (bool)isScaleXOverridden;
- (bool)isScaleYOverridden;
- (float)offsetX;
- (float)offsetY;
- (void)removeUnnecessaryOverrides;
- (float)scaleX;
- (float)scaleY;
- (void)setAlignment:(int)arg1;
- (void)setFlipMode:(int)arg1;
- (void)setOffsetX:(float)arg1;
- (void)setOffsetY:(float)arg1;
- (void)setScaleX:(float)arg1;
- (void)setScaleY:(float)arg1;

@end
