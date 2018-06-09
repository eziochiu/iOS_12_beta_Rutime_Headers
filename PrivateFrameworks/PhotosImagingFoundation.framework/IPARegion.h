/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

@interface IPARegion : NSObject <NSCopying, NSMutableCopying> {
    struct Region { struct unordered_set<PA::RegionRect, PA::RectHash, PA::RectEqualTo, std::__1::allocator<PA::RegionRect> > { struct __hash_table<PA::RegionRect, PA::RectHash, PA::RectEqualTo, std::__1::allocator<PA::RegionRect> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<PA::RegionRect, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<PA::RegionRect, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<PA::RegionRect, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<PA::RegionRect, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<PA::RegionRect, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<PA::RegionRect, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<PA::RegionRect, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<PA::RegionRect, void *> *>, std::__1::allocator<std::__1::__hash_node<PA::RegionRect, void *> > > { struct __hash_node_base<std::__1::__hash_node<PA::RegionRect, void *> *> { struct __hash_node_base<std::__1::__hash_node<PA::RegionRect, void *> *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; } x_1_1_1; } x1; } * _imp;
}

+ (id)region;
+ (id)regionWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)regionWithRectArray:(id)arg1;
+ (id)regionWithRegion:(id)arg1;

- (double)area;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void)enumerateRects:(id /* block */)arg1;
- (unsigned long long)hash;
- (bool)includesRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)includesRegion:(id)arg1;
- (id)init;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithRectArray:(id)arg1;
- (id)initWithRegion:(id)arg1;
- (bool)intersectsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)intersectsRegion:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRegion:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)regionByAddingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)regionByAddingRectArray:(id)arg1;
- (id)regionByAddingRegion:(id)arg1;
- (id)regionByApplyingAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)regionByApplyingOrientation:(long long)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)regionByClippingToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)regionByClippingToRectArray:(id)arg1;
- (id)regionByClippingToRegion:(id)arg1;
- (id)regionByExcludingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)regionByExcludingRegion:(id)arg1;
- (id)regionByFlippingInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)regionByGrowingBy:(struct CGPoint { double x1; double x2; })arg1;
- (id)regionByGrowingBy:(struct CGPoint { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)regionByRemovingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)regionByRemovingRectArray:(id)arg1;
- (id)regionByRemovingRegion:(id)arg1;
- (id)regionByRoundingDown;
- (id)regionByRoundingUp;
- (id)regionByScalingBy:(struct CGPoint { double x1; double x2; })arg1;
- (id)regionByShrinkingBy:(struct CGPoint { double x1; double x2; })arg1;
- (id)regionByShrinkingBy:(struct CGPoint { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)regionByTranslatingBy:(struct CGPoint { double x1; double x2; })arg1;

@end
