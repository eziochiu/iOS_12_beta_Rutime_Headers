/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

@interface MAAssetQuery : NSObject {
    NSSet * _assetIds;
    NSString * _assetType;
    bool  _augmentState;
    NSDate * _lastFetchDate;
    NSDate * _postedDate;
    NSMutableArray * _queryParams;
    NSArray * _results;
    long long  _returnTypes;
}

@property (nonatomic, readonly) NSSet *assetIds;
@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic, readonly) bool augmentState;
@property (nonatomic, readonly) NSDate *lastFetchDate;
@property (nonatomic, readonly) NSDate *postedDate;
@property (nonatomic, readonly) NSMutableArray *queryParams;
@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, readonly) long long returnTypes;

- (long long)addKeyValueArray:(id)arg1 with:(id)arg2;
- (long long)addKeyValuePair:(id)arg1 with:(id)arg2;
- (id)assetIds;
- (id)assetType;
- (void)augmentResultsWithState:(bool)arg1;
- (bool)augmentState;
- (void)dealloc;
- (void)getResultsFromMessage:(id)arg1;
- (id)initWithType:(id)arg1;
- (id)lastFetchDate;
- (id)postedDate;
- (long long)queryInstalledAssetIds;
- (void)queryMetaData:(id /* block */)arg1;
- (long long)queryMetaDataSync;
- (id)queryParams;
- (id)results;
- (long long)returnTypes;
- (void)returnTypes:(long long)arg1;

@end
