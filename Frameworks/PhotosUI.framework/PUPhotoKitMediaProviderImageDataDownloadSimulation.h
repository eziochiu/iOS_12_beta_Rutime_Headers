/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoKitMediaProviderImageDataDownloadSimulation : PUPhotoKitMediaProviderDownloadSimulation {
    NSString * __resultDataUTI;
    NSData * __resultImageData;
    NSDictionary * __resultInfo;
    long long  __resultOrientaton;
    id /* block */  _externalProgressHandler;
    id /* block */  _externalResultHandler;
    id /* block */  _internalProgressHandler;
    id /* block */  _internalResultHandler;
}

@property (setter=_setResultDataUTI:, nonatomic, retain) NSString *_resultDataUTI;
@property (setter=_setResultImageData:, nonatomic, retain) NSData *_resultImageData;
@property (setter=_setResultInfo:, nonatomic, copy) NSDictionary *_resultInfo;
@property (setter=_setResultOrientation:, nonatomic) long long _resultOrientaton;
@property (nonatomic, copy) id /* block */ externalProgressHandler;
@property (nonatomic, copy) id /* block */ externalResultHandler;
@property (nonatomic, readonly, copy) id /* block */ internalProgressHandler;
@property (nonatomic, readonly, copy) id /* block */ internalResultHandler;

- (void).cxx_destruct;
- (void)_handleResultImageData:(id)arg1 dataUTI:(id)arg2 orientation:(long long)arg3 info:(id)arg4;
- (id)_resultDataUTI;
- (id)_resultImageData;
- (id)_resultInfo;
- (long long)_resultOrientaton;
- (void)_setResultDataUTI:(id)arg1;
- (void)_setResultImageData:(id)arg1;
- (void)_setResultInfo:(id)arg1;
- (void)_setResultOrientation:(long long)arg1;
- (void)endSimulationWithError:(id)arg1;
- (id /* block */)externalProgressHandler;
- (id /* block */)externalResultHandler;
- (id)init;
- (id /* block */)internalProgressHandler;
- (id /* block */)internalResultHandler;
- (void)setExternalProgressHandler:(id /* block */)arg1;
- (void)setExternalResultHandler:(id /* block */)arg1;
- (void)updateSimulationWithProgress:(double)arg1;

@end
