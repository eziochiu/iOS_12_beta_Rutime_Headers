/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNavigationListDataSource : PXSectionedDataSource {
    NSDictionary * _childDataSources;
    NSDictionary * _childIndexHints;
    PXCollectionsDataSource * _collectionsDataSource;
    NSIndexSet * _dataSubsectionIndexes;
    NSArray * _dataSubsections;
    long long  _indentationLevel;
    NSNumber * _numberOfListItems;
    NSArray * _sectionRangeMap;
}

@property (nonatomic, readonly, copy) NSDictionary *childDataSources;
@property (nonatomic, readonly, copy) NSDictionary *childIndexHints;
@property (nonatomic, readonly) PXCollectionsDataSource *collectionsDataSource;
@property (nonatomic, readonly) long long indentationLevel;
@property (nonatomic, readonly) long long numberOfListItems;
@property (nonatomic, readonly) NSArray *sectionRangeMap;

- (void).cxx_destruct;
- (void)_createDataSubsectionsIfNecessary;
- (unsigned long long)_dataSubsectionIndexForListItemAtIndex:(long long)arg1;
- (id)changeDetailsToDataSource:(id)arg1 changeDetailsHint:(id)arg2 changeDetailsByItem:(id)arg3;
- (id)childDataSources;
- (id)childIndexHints;
- (id)collectionsDataSource;
- (id)debugDescription;
- (long long)indentationLevel;
- (long long)indexForListItem:(id)arg1;
- (long long)indexInCollectionDataSourceOfListItem:(id)arg1 hintIndex:(long long)arg2;
- (id)init;
- (id)initWithCollectionsDataSource:(id)arg1;
- (id)initWithCollectionsDataSource:(id)arg1 indentationLevel:(long long)arg2 childDataSources:(id)arg3 childIndexHints:(id)arg4;
- (id)listItemAtIndex:(long long)arg1;
- (id)listItemForSystemItem:(long long)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfListItems;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)parentOfListItemAtIndex:(long long)arg1 localIndex:(long long*)arg2;
- (id)sectionRangeMap;
- (long long)validatedIndexOfListItem:(id)arg1 hintIndex:(long long)arg2;

@end
