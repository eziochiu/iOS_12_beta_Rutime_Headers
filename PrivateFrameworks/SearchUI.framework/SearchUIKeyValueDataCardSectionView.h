/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIKeyValueDataCardSectionView : SearchUICardSectionView

@property (retain) TLKKeyValueView *contentView;

+ (int)separatorStyleForCardSection:(id)arg1;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (id)convertSFKeyValueData:(id)arg1;
- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end
