/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXResultRecord : NSObject <NSCopying>

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)curatedFetchResult;
- (id)curatedOids;
- (id)description;
- (id)excludedOids;
- (id)exposedFetchResult;
- (id)fetchResult;
- (id)filteredFetchResult;
- (id)includedOids;
- (id)inclusionPredicate;
- (bool)isCurated;
- (id)keyAssetsFetchResult;
- (bool)reverseSortOrder;
- (bool)wantsCuration;

@end
