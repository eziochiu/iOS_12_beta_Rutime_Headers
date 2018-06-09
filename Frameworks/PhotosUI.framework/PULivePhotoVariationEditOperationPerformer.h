/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PULivePhotoVariationEditOperationPerformer : PXAssetEditOperationPerformer <PXChangeObserver> {
    id /* block */  _completionHandler;
    bool  _didSave;
    PXAssetVariationRenderProvider * _renderProvider;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completeWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_performSaveIfReady;
- (id)asset;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)performEditOperationWithCompletionHandler:(id /* block */)arg1;

@end
