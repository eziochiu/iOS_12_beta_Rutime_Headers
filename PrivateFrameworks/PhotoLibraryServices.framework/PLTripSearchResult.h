/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLTripSearchResult : PLCollectionSearchResult

@property (nonatomic, readonly) NSArray *momentUUIDs;
@property (nonatomic, readonly) PSITripResult *tripResult;

- (id)initWithGroupResult:(id)arg1 collectionResult:(id)arg2;
- (id)initWithGroupResult:(id)arg1 tripResult:(id)arg2;
- (id)momentUUIDs;
- (id)subtitle;
- (id)tripResult;
- (unsigned long long)type;

@end
