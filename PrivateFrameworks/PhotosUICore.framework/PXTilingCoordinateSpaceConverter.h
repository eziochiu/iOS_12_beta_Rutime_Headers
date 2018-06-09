/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTilingCoordinateSpaceConverter : NSObject {
    bool  _shouldCache;
}

@property (nonatomic) bool shouldCache;

+ (bool)_canConvertBetweenCoordinateSpace:(id)arg1 andCoordinateSpace:(id)arg2;
+ (bool)canConvertBetweenCoordinateSpaceIdentifier:(void*)arg1 andCoordinateSpaceIdentifier:(void*)arg2;
+ (id)defaultConverter;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformOfCoordinateSpace:(id)arg1 relativeToCoordinateSpace:(id)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformOfCoordinateSpaceIdentifier:(void*)arg1 relativeToCoordinateSpaceIdentifier:(void*)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromCoordinateSpaceIdentifier:(void*)arg2 toCoordinateSpaceIdentifier:(void*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromCoordinateSpaceIdentifier:(void*)arg2 toCoordinateSpaceIdentifier:(void*)arg3;
- (struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })convertTileGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 toCoordinateSpaceIdentifier:(void*)arg2;
- (void)invalidateCache;
- (void)setShouldCache:(bool)arg1;
- (bool)shouldCache;

@end
