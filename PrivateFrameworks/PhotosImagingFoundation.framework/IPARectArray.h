/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

@interface IPARectArray : NSObject <NSCopying, NSMutableCopying> {
    struct RectArray { struct Rect {} *x1; struct Rect {} *x2; struct __compressed_pair<PA::Rect *, std::__1::allocator<PA::Rect> > { struct Rect {} *x_3_1_1; } x3; } * _imp;
}

+ (id)rectArray;
+ (id)rectArrayWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void)enumerateRects:(id /* block */)arg1;
- (id)init;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithRectArray:(id)arg1;
- (bool)isEmpty;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectAtIndex:(unsigned long long)arg1;

@end
