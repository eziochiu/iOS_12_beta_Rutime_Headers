/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFlowLayoutInfo : NSObject {
    long long  _computedEstimatedCount;
    struct CGSize { 
        double width; 
        double height; 
    }  _computedEstimatedSum;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    double  _dimension;
    bool  _estimatesSizes;
    bool  _horizontal;
    bool  _isValid;
    UICollectionViewFlowLayout * _layout;
    struct CGSize { 
        double width; 
        double height; 
    }  _layoutSize;
    bool  _leftToRight;
    struct { 
        int commonRowHorizontalAlignment; 
        int lastRowHorizontalAlignment; 
        int rowVerticalAlignment; 
    }  _rowAlignmentOptions;
    NSMutableArray * _sections;
    bool  _useFloatingHeaderFooter;
    bool  _usesFloatingHeaderFooter;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleBounds;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } computedEstimatedSize;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic) double dimension;
@property (nonatomic) bool estimatesSizes;
@property (nonatomic) bool horizontal;
@property (nonatomic) UICollectionViewFlowLayout *layout;
@property (nonatomic) bool leftToRight;
@property (nonatomic) struct { int x1; int x2; int x3; } rowAlignmentOptions;
@property (nonatomic, readonly) NSMutableArray *sections;
@property (nonatomic) bool usesFloatingHeaderFooter;

- (void).cxx_destruct;
- (id)addSection;
- (struct CGSize { double x1; double x2; })computedEstimatedSize;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)copy;
- (void)didUpdateSizeForSection:(long long)arg1 withDelta:(double)arg2;
- (double)dimension;
- (bool)estimatesSizes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItemAtIndexPath:(id)arg1;
- (bool)horizontal;
- (id)init;
- (void)invalidate:(bool)arg1;
- (id)invalidatedIndexPaths;
- (id)layout;
- (bool)leftToRight;
- (struct { int x1; int x2; int x3; })rowAlignmentOptions;
- (id)sections;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDimension:(double)arg1;
- (void)setEstimatesSizes:(bool)arg1;
- (void)setHorizontal:(bool)arg1;
- (void)setLayout:(id)arg1;
- (void)setLeftToRight:(bool)arg1;
- (void)setRowAlignmentOptions:(struct { int x1; int x2; int x3; })arg1;
- (id)setSize:(struct CGSize { double x1; double x2; })arg1 forItemAtIndexPath:(id)arg2;
- (void)setSizes:(id)arg1 forItemsAtIndexPaths:(id)arg2;
- (void)setUsesFloatingHeaderFooter:(bool)arg1;
- (id)snapshot;
- (id)specifiedItemSizes;
- (void)updateEstimatedSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)usesFloatingHeaderFooter;

@end
