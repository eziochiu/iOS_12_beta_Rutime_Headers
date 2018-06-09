/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIRegion : NSObject <NSCoding, NSCopying> {
    PKRegion * _region;
}

@property (nonatomic, readonly) PKRegion *_region;
@property (nonatomic, readonly) UIBezierPath *path;

+ (id)infiniteRegion;

- (void).cxx_destruct;
- (id)_region;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)containsPoints:(const float*)arg1 locationStride:(long long)arg2 results:(char *)arg3 resultsStride:(long long)arg4 count:(int)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithRadius:(double)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)inverseRegion;
- (id)path;
- (id)regionByDifferenceFromRegion:(id)arg1;
- (id)regionByIntersectionWithRegion:(id)arg1;
- (id)regionByUnionWithRegion:(id)arg1;

@end
