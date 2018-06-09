/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAssetsFetchOperation : FCFetchOperation {
    NSArray * _assetHandles;
}

@property (nonatomic, copy) NSArray *assetHandles;

- (void).cxx_destruct;
- (id)assetHandles;
- (id)initWithAssetHandle:(id)arg1;
- (id)initWithAssetHandles:(id)arg1;
- (void)performOperation;
- (void)setAssetHandles:(id)arg1;

@end
