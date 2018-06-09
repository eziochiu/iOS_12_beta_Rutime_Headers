/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDColorReference : NSObject <NSCopying> {
    unsigned long long  mColorIndex;
    EDResources * mResources;
    int  mSystemColorID;
    unsigned long long  mThemeIndex;
    double  mTint;
}

+ (id)colorReferenceWithColor:(id)arg1 resources:(id)arg2;
+ (id)colorReferenceWithColorIndex:(unsigned long long)arg1 resources:(id)arg2;
+ (id)colorReferenceWithResources:(id)arg1;
+ (id)colorReferenceWithSystemColorID:(int)arg1 resources:(id)arg2;
+ (id)colorReferenceWithThemeIndex:(unsigned long long)arg1 tint:(double)arg2 resources:(id)arg3;

- (id)color;
- (unsigned long long)colorIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithColor:(id)arg1 resources:(id)arg2;
- (id)initWithResources:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToColorReference:(id)arg1;
- (bool)isValid;
- (int)systemColorID;
- (unsigned long long)themeIndex;
- (double)tint;

@end
