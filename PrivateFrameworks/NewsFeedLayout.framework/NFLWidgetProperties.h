/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLWidgetProperties : NSObject <NSCopying> {
    double  _containerHeight;
    bool  _defaultForYou;
    struct CGSize { 
        double width; 
        double height; 
    }  _gridSize;
    bool  _insetMargins;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    double  _itemSpacing;
    double  _topMarginInset;
}

@property (nonatomic) double containerHeight;
@property (nonatomic) bool defaultForYou;
@property (nonatomic) struct CGSize { double x1; double x2; } gridSize;
@property (nonatomic) bool insetMargins;
@property (nonatomic) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double topMarginInset;

- (double)containerHeight;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)defaultForYou;
- (struct CGSize { double x1; double x2; })gridSize;
- (bool)insetMargins;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })itemSize;
- (double)itemSpacing;
- (void)setContainerHeight:(double)arg1;
- (void)setDefaultForYou:(bool)arg1;
- (void)setGridSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setInsetMargins:(bool)arg1;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemSpacing:(double)arg1;
- (void)setTopMarginInset:(double)arg1;
- (double)topMarginInset;

@end
