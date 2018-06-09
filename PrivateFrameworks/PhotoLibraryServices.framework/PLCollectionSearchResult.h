/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCollectionSearchResult : PLSearchResult {
    PSICollectionResult * _collectionResult;
}

@property (nonatomic, readonly) PSICollectionResult *collectionResult;
@property (nonatomic, readonly) unsigned long long collectionType;
@property (nonatomic, readonly) PSIDate *endDate;
@property (nonatomic, readonly) NSDate *sortDate;
@property (nonatomic, readonly) PSIDate *startDate;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *uuid;

- (void).cxx_destruct;
- (unsigned long long)assetCount;
- (id)collectionResult;
- (unsigned long long)collectionType;
- (id)endDate;
- (id)initWithGroupResult:(id)arg1 collectionResult:(id)arg2;
- (id)keyAssetUUID;
- (id)sortDate;
- (id)startDate;
- (id)subtitle;
- (id)title;
- (unsigned long long)type;
- (id)uuid;

@end
