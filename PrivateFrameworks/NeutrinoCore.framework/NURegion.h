/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NURegion : NSObject <NSCopying, NSMutableCopying> {
    struct Region { struct unordered_set<NU::RegionRect, NU::RectHash, NU::RectEqualTo, std::__1::allocator<NU::RegionRect> > { struct __hash_table<NU::RegionRect, NU::RectHash, NU::RectEqualTo, std::__1::allocator<NU::RegionRect> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<NU::RegionRect, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NU::RegionRect, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<NU::RegionRect, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NU::RegionRect, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<NU::RegionRect, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NU::RegionRect, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<NU::RegionRect, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<NU::RegionRect, void *> *>, std::__1::allocator<std::__1::__hash_node<NU::RegionRect, void *> > > { struct __hash_node_base<std::__1::__hash_node<NU::RegionRect, void *> *> { struct __hash_node_base<std::__1::__hash_node<NU::RegionRect, void *> *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; } x_1_1_1; } x1; } * _imp;
}

+ (id)region;
+ (id)regionWithRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
+ (id)regionWithRegion:(id)arg1;

- (double)area;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })bounds;
- (id)convertImageRegion:(id)arg1 fromRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 toRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (double)density;
- (id)description;
- (void)enumerateRects:(id /* block */)arg1;
- (unsigned long long)hash;
- (bool)includesRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (bool)includesRegion:(id)arg1;
- (id)init;
- (id)initWithRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (id)initWithRegion:(id)arg1;
- (bool)intersectsRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (bool)intersectsRegion:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRegion:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)regionByAddingRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (id)regionByAddingRegion:(id)arg1;
- (id)regionByApplyingAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundPolicy:(long long)arg2;
- (id)regionByApplyingOrientation:(long long)arg1 imageSize:(struct { long long x1; long long x2; })arg2;
- (id)regionByClippingToRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (id)regionByClippingToRegion:(id)arg1;
- (id)regionByExcludingRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (id)regionByExcludingRegion:(id)arg1;
- (id)regionByFlippingInRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (id)regionByGrowingBy:(struct { long long x1; long long x2; })arg1;
- (id)regionByGrowingBy:(struct { long long x1; long long x2; })arg1 inRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2;
- (id)regionByRemovingRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (id)regionByRemovingRegion:(id)arg1;
- (id)regionByScalingBy:(struct CGPoint { double x1; double x2; })arg1 withRounding:(long long)arg2;
- (id)regionByShrinkingBy:(struct { long long x1; long long x2; })arg1;
- (id)regionByShrinkingBy:(struct { long long x1; long long x2; })arg1 inRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2;
- (id)regionByTranslatingBy:(struct { long long x1; long long x2; })arg1;
- (id)regionWithSubregionsOfMinimumDensity:(double)arg1;

@end
