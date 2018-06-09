/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXAVPlayerItemFactory : NSObject <SXAVPlayerItemFactory> {
    <SXAVURLAssetFactory> * _assetFactory;
    NSArray * _automaticallyLoadedAssetKeys;
}

@property (nonatomic, readonly) <SXAVURLAssetFactory> *assetFactory;
@property (nonatomic, readonly, copy) NSArray *automaticallyLoadedAssetKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetFactory;
- (id)automaticallyLoadedAssetKeys;
- (id)createPlayerItemWithURL:(id)arg1;
- (id)initWithAutomaticallyLoadedAssetKeys:(id)arg1 assetFactory:(id)arg2;

@end
