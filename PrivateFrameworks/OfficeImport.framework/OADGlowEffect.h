/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADGlowEffect : OADEffect {
    OADColor * mColor;
    float  mRadius;
}

- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (float)radius;
- (void)setColor:(id)arg1;
- (void)setRadius:(float)arg1;

@end
