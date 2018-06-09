/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
    NSArray * mEffects;
    NSArray * mExts;
    OADFill * mFill;
    unsigned int  mHasIsBehindText;
    unsigned int  mIsBehindText;
    OADScene3D * mScene3D;
    OADShape3D * mShape3D;
    OADStroke * mStroke;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)effects;
- (id)exts;
- (id)fill;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (bool)hasEffects;
- (bool)hasExts;
- (bool)hasFill;
- (bool)hasIsBehindText;
- (bool)hasNonEmptyFill;
- (bool)hasScene3D;
- (bool)hasShape3D;
- (bool)hasStroke;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (bool)isBehindText;
- (bool)isEqual:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (id)scene3D;
- (void)setEffects:(id)arg1;
- (void)setExts:(id)arg1;
- (void)setFill:(id)arg1;
- (void)setIsBehindText:(bool)arg1;
- (void)setParent:(id)arg1;
- (void)setScene3D:(id)arg1;
- (void)setShape3D:(id)arg1;
- (void)setStroke:(id)arg1;
- (id)shape3D;
- (id)stroke;

@end
