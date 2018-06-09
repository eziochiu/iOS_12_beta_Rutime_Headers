/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAutoloopVariationRequest : PXAutoloopRequest {
    PXAutoloopVideoPipelinePerformer * __autoloopPerformer;
    AVAsset * _asset;
}

@property (setter=_setAutoloopPerformer:, nonatomic, retain) PXAutoloopVideoPipelinePerformer *_autoloopPerformer;
@property (nonatomic, readonly) AVAsset *asset;

- (void).cxx_destruct;
- (id)_autoloopPerformer;
- (void)_handlePerformerFinishedWithSuccess:(bool)arg1 infos:(id)arg2;
- (void)_setAutoloopPerformer:(id)arg1;
- (id)asset;
- (void)cancel;
- (unsigned long long)hash;
- (id)initWithAssetUUID:(id)arg1 AVAsset:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)startRequestWithCompletionHandler:(id /* block */)arg1;

@end
