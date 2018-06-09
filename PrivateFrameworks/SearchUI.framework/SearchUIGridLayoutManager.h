/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIGridLayoutManager : NSObject {
    TLKGridLayoutManager * _gridManager;
    bool  _isCompactTable;
    NSMapTable * _tableMapping;
}

@property (retain) TLKGridLayoutManager *gridManager;
@property bool isCompactTable;
@property (retain) NSMapTable *tableMapping;

+ (id)alignmentsForSFHeaderRow:(id)arg1;
+ (id)itemsForDataItems:(id)arg1;
+ (bool)shouldHideViewForSection:(id)arg1;

- (void).cxx_destruct;
- (bool)computeCompactTableForSections:(id)arg1;
- (id)gridManager;
- (id)initWithHeaderSection:(id)arg1 dataSections:(id)arg2;
- (bool)isCompactTable;
- (void)setGridManager:(id)arg1;
- (void)setIsCompactTable:(bool)arg1;
- (void)setTableMapping:(id)arg1;
- (id)tableMapping;
- (id)tableRowForTableRowCardSection:(id)arg1;

@end
