/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImportSidecarAsset : PHImportAsset <NSFilePresenter, PHImportSidecarAsset> {
    NSOperationQueue * _presentedItemOperationQueue;
    NSURL * _primaryPresentedItemURL;
    unsigned long long  _sidecarType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isValid;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (nonatomic, readonly) unsigned long long sidecarType;
@property (readonly) Class superclass;

+ (unsigned long long)sidecarType:(id)arg1;

- (void).cxx_destruct;
- (bool)canReference;
- (void)dealloc;
- (id)getMetadataForImportRecord:(id)arg1 fileData:(id)arg2;
- (id)initWithSidecarFile:(id)arg1 relatedToImportAsset:(id)arg2;
- (bool)isValid;
- (bool)loadMetadataSync;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (id)primaryPresentedItemURL;
- (unsigned long long)sidecarType;
- (id)thumbnailForSize:(unsigned long long)arg1 atEnd:(id /* block */)arg2;

@end
