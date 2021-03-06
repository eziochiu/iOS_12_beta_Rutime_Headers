/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLTopAssetsSearchResult : NSObject {
    PSITopAssetsResult * _topAssetsResults;
}

@property (nonatomic, readonly) unsigned long long assetCount;
@property (nonatomic, readonly) NSArray *assetUUIDs;
@property (nonatomic, readonly) PSITopAssetsResult *topAssetsResults;

- (void).cxx_destruct;
- (unsigned long long)assetCount;
- (id)assetUUIDs;
- (id)initWithTopAssetsResult:(id)arg1;
- (id)topAssetsResults;

@end
