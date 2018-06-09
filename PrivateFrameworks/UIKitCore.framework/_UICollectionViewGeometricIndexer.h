/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionViewGeometricIndexer : NSObject {
    int  _axis;
    double  _pageDimension;
    NSMutableDictionary * _pages;
}

+ (id)geometricIndexerWithContainerSize:(struct CGSize { double x1; double x2; })arg1 axis:(int)arg2;

- (void).cxx_destruct;
- (id)_mutableIndexSetForPageIndex:(long long)arg1;
- (void)addGlobalIndex:(long long)arg1 forFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)globalIndexesOfFramesIntersectingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithContainerSize:(struct CGSize { double x1; double x2; })arg1 axis:(int)arg2;

@end
