/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPlayerItemFactory : NSObject <SVPlayerItemFactory> {
    NSArray * _automaticallyLoadedAssetKeys;
}

@property (nonatomic, readonly, copy) NSArray *automaticallyLoadedAssetKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)automaticallyLoadedAssetKeys;
- (id)createPlayerItemWithAsset:(id)arg1;
- (id)initWithAutomaticallyLoadedAssetKeys:(id)arg1;

@end
