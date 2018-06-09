/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUITableRowCardView : SearchUICardSectionView

@property (retain) TLKGridRowView *contentView;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultLayoutMargins;
+ (bool)hasOnlyImages:(id)arg1;
+ (bool)isAHeader:(id)arg1;
+ (double)largestImageSizeForSection:(id)arg1;
+ (int)separatorStyleForCardSection:(id)arg1;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })verticalBaselineInsetsForHeader:(bool)arg1 isCompactTable:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })verticalBaselineInsetsForRowsWithCompactTable:(bool)arg1;

@end
