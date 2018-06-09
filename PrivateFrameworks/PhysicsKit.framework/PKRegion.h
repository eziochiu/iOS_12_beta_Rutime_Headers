/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKRegion : NSObject <NSCopying, NSSecureCoding> {
    struct vec4 { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*v; 
    }  _halfExtent;
    struct vec4 { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*v; 
    }  _halfExtent2;
    bool  _isExclusive;
    struct shared_ptr<PKCPathHolder> { 
        struct PKCPathHolder {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _path;
    struct shared_ptr<PKCPathHolder> { 
        struct PKCPathHolder {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _path2;
    int  _regionOp;
    int  _shape;
    int  _shape2;
}

@property (nonatomic, readonly) struct CGPath { }*path;

+ (id)infiniteRegion;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)containsPoints:(const float*)arg1 locationStride:(long long)arg2 results:(char *)arg3 resultsStride:(long long)arg4 count:(int)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(struct CGPath { }*)arg1;
- (id)initWithRadius:(float)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)inverseRegion;
- (bool)isEmpty;
- (bool)isEqualToRegion:(id)arg1;
- (bool)isInfinite;
- (struct CGPath { }*)path;
- (id)regionByDifferenceFromRegion:(id)arg1;
- (id)regionByIntersectionWithRegion:(id)arg1;
- (id)regionByUnionWithRegion:(id)arg1;

@end
