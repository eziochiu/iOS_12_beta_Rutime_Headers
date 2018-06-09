/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADShape3D : NSObject <NSCopying> {
    OADBevel * mBottomBevel;
    OADColor * mContourColor;
    float  mContourWidth;
    OADColor * mExtrusionColor;
    float  mExtrusionHeight;
    int  mMaterial;
    float  mShapeDepth;
    OADBevel * mTopBevel;
}

+ (id)nullShape3D;

- (id)bottomBevel;
- (id)contourColor;
- (float)contourWidth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)extrusionColor;
- (float)extrusionHeight;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (int)material;
- (void)setBottomBevel:(id)arg1;
- (void)setContourColor:(id)arg1;
- (void)setContourWidth:(float)arg1;
- (void)setExtrusionColor:(id)arg1;
- (void)setExtrusionHeight:(float)arg1;
- (void)setMaterial:(int)arg1;
- (void)setShapeDepth:(float)arg1;
- (void)setTopBevel:(id)arg1;
- (float)shapeDepth;
- (id)topBevel;

@end
