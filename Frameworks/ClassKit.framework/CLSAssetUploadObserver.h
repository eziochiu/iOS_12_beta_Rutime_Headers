/* made by EzioChiu
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSAssetUploadObserver : NSObject <NSFilePresenter> {
    CLSAsset * _asset;
    NSSet * _observedPresentedItemUbiquityAttributes;
    id /* block */  _onUploadComplete;
    id /* block */  _onUploadProgress;
    id /* block */  _preCompleteHook;
    NSOperationQueue * _presentedItemOperationQueue;
    NSURL * _presentedItemURL;
    NSMetadataQuery * _query;
    NSError * _uploadError;
    double  _uploadProgress;
    bool  _uploaded;
}

@property (nonatomic, retain) CLSAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *observedPresentedItemUbiquityAttributes;
@property (nonatomic, copy) id /* block */ onUploadComplete;
@property (nonatomic, copy) id /* block */ onUploadProgress;
@property (nonatomic, copy) id /* block */ preCompleteHook;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (nonatomic, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (nonatomic, retain) NSMetadataQuery *query;
@property (readonly) Class superclass;
@property (retain) NSError *uploadError;
@property double uploadProgress;
@property (getter=isUploaded, nonatomic) bool uploaded;

- (void).cxx_destruct;
- (void)_notifyOfChange;
- (void)_notifyOfCompletion;
- (void)_processItems:(id)arg1;
- (id)asset;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;
- (bool)isUploaded;
- (id)observedPresentedItemUbiquityAttributes;
- (id /* block */)onUploadComplete;
- (id /* block */)onUploadProgress;
- (id /* block */)preCompleteHook;
- (void)presentedItemDidChangeUbiquityAttributes:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (id)query;
- (void)queryGatharedData:(id)arg1;
- (void)queryUpdated:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setObservedPresentedItemUbiquityAttributes:(id)arg1;
- (void)setOnUploadComplete:(id /* block */)arg1;
- (void)setOnUploadProgress:(id /* block */)arg1;
- (void)setPreCompleteHook:(id /* block */)arg1;
- (void)setPresentedItemURL:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setUploadError:(id)arg1;
- (void)setUploadProgress:(double)arg1;
- (void)setUploaded:(bool)arg1;
- (void)startObserving;
- (void)stopObserving;
- (id)uploadError;
- (double)uploadProgress;

@end
