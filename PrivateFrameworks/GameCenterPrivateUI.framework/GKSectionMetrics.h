/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKSectionMetrics : GKGridLayoutMetrics {
    unsigned long long  _alignment;
    double  _calculatedItemHeightCache;
    double  _desiredItemHeight;
    double  _desiredItemWidth;
    double  _flowColumnWidth;
    unsigned long long  _flowMaxColumnCount;
    bool  _incrementalRevealConsumesPadding;
    unsigned long long  _incrementalRevealItemCount;
    double  _interitemSpacing;
    NSDictionary * _itemHeightList;
    unsigned long long  _lastLineItemAlignment;
    double  _lineSpacing;
    double  _marginBetweenItems;
    unsigned long long  _maximumVisibleItemCount;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    bool  _shouldAlwaysIncludeShowMore;
    bool  _shouldShowSectionHeadersWhenNoItems;
    bool  _useViewSizeForFlowMaxColumnCount;
}

@property (nonatomic) unsigned long long alignment;
@property (nonatomic, readonly) double calculatedItemHeight;
@property (nonatomic) double calculatedItemHeightCache;
@property (nonatomic) double desiredItemHeight;
@property (nonatomic) double desiredItemWidth;
@property (nonatomic) double flowColumnWidth;
@property (nonatomic) unsigned long long flowMaxColumnCount;
@property (nonatomic) bool incrementalRevealConsumesPadding;
@property (nonatomic) unsigned long long incrementalRevealItemCount;
@property (nonatomic) double interitemSpacing;
@property (nonatomic, retain) NSDictionary *itemHeightList;
@property (nonatomic) unsigned long long lastLineItemAlignment;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double marginBetweenItems;
@property (nonatomic) unsigned long long maximumVisibleItemCount;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic) double sectionHeaderHeight;
@property (nonatomic) bool sectionHeadersShouldPin;
@property (nonatomic) bool shouldAlwaysIncludeShowMore;
@property (nonatomic) bool shouldShowSectionHeadersWhenNoItems;
@property (nonatomic) double showMoreHeight;
@property (nonatomic) bool useViewSizeForFlowMaxColumnCount;

+ (id)metricsForIdiom:(long long)arg1;

- (unsigned long long)alignment;
- (double)calculatedItemHeight;
- (double)calculatedItemHeightCache;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)desiredItemHeight;
- (double)desiredItemWidth;
- (double)flowColumnWidth;
- (unsigned long long)flowMaxColumnCount;
- (unsigned long long)flowMaxColumnCountForViewWidth:(double)arg1;
- (bool)incrementalRevealConsumesPadding;
- (unsigned long long)incrementalRevealItemCount;
- (id)init;
- (id)initWithIdiom:(long long)arg1;
- (double)interitemSpacing;
- (bool)isEqual:(id)arg1;
- (id)itemHeightList;
- (struct CGSize { double x1; double x2; })itemSizeForCollectionView:(id)arg1;
- (unsigned long long)lastLineItemAlignment;
- (double)lineSpacing;
- (id)localDescription;
- (double)marginBetweenItems;
- (unsigned long long)maximumVisibleItemCount;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (double)sectionHeaderHeight;
- (bool)sectionHeadersShouldPin;
- (void)setAlignment:(unsigned long long)arg1;
- (void)setCalculatedItemHeightCache:(double)arg1;
- (void)setDesiredItemHeight:(double)arg1;
- (void)setDesiredItemWidth:(double)arg1;
- (void)setFlowColumnWidth:(double)arg1;
- (void)setFlowMaxColumnCount:(unsigned long long)arg1;
- (void)setIncrementalRevealConsumesPadding:(bool)arg1;
- (void)setIncrementalRevealItemCount:(unsigned long long)arg1;
- (void)setInteritemSpacing:(double)arg1;
- (void)setItemHeightList:(id)arg1;
- (void)setLastLineItemAlignment:(unsigned long long)arg1;
- (void)setLineSpacing:(double)arg1;
- (void)setMarginBetweenItems:(double)arg1;
- (void)setMaximumVisibleItemCount:(unsigned long long)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSectionHeaderHeight:(double)arg1;
- (void)setSectionHeadersShouldPin:(bool)arg1;
- (void)setShouldAlwaysIncludeShowMore:(bool)arg1;
- (void)setShouldShowSectionHeadersWhenNoItems:(bool)arg1;
- (void)setShowMoreHeight:(double)arg1;
- (void)setUseViewSizeForFlowMaxColumnCount:(bool)arg1;
- (bool)shouldAlwaysIncludeShowMore;
- (bool)shouldShowSectionHeadersWhenNoItems;
- (double)showMoreHeight;
- (bool)useViewSizeForFlowMaxColumnCount;

@end