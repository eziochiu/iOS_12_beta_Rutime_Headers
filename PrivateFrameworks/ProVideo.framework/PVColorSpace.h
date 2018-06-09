/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVColorSpace : NSObject {
    int  _type;
}

+ (id)extendedSRGBColorSpace;
+ (id)p3d65GammaColorSpace;
+ (id)pvColorSpaceFromCGColorSpace:(struct CGColorSpace { }*)arg1;
+ (id)rec601GammaColorSpace;
+ (id)rec601LinearColorSpace;
+ (id)rec709GammaColorSpace;
+ (id)rec709LinearColorSpace;
+ (id)sRGBColorSpace;

- (struct CGColorSpace { }*)cgColorSpace;
- (id)description;
- (unsigned long long)hash;
- (id)initWithType:(int)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCGColorSpace:(struct CGColorSpace { }*)arg1;
- (bool)isExtendedSRGBColorSpace;
- (bool)isP3d65GammaColorSpace;
- (bool)isRec601GammaColorSpace;
- (bool)isRec601LinearColorSpace;
- (bool)isRec709GammaColorSpace;
- (bool)isRec709LinearColorSpace;
- (bool)isSRGBColorSpace;
- (bool)isWideGamutSpace;
- (id)name;

@end
