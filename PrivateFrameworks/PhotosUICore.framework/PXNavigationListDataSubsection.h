/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNavigationListDataSubsection : NSObject {
    PXSectionedDataSource * _dataSource;
    long long  _expandedIndex;
    long long  _externalStartIndex;
    long long  _indentationLevel;
    long long  _indexDelta;
    PXNavigationListDataSource * _listDataSource;
    NSMutableDictionary * _listItemsCache;
}

@property (nonatomic, readonly) PXSectionedDataSource *dataSource;
@property (nonatomic, readonly) long long expandedIndex;
@property (nonatomic, readonly) long long externalStartIndex;
@property (nonatomic, readonly) long long indentationLevel;
@property (nonatomic, readonly) long long indexDelta;
@property (nonatomic, readonly) PXNavigationListDataSource *listDataSource;

- (void).cxx_destruct;
- (id)dataSource;
- (id)description;
- (long long)expandedIndex;
- (long long)externalStartIndex;
- (long long)indentationLevel;
- (long long)indexDelta;
- (id)initWithDataSource:(id)arg1 indexDelta:(long long)arg2 expandedIndex:(long long)arg3 indentationLevel:(long long)arg4 externalStartIndex:(long long)arg5;
- (id)listDataSource;
- (id)listItemAtExternalIndex:(long long)arg1;

@end
