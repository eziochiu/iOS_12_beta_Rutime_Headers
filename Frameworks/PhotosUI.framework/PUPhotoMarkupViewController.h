/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoMarkupViewController : UIViewController <MarkupViewControllerDelegate> {
    MarkupViewController * __markupViewController;
    PUObserverRegistry * __observerRegistry;
    long long  __sourceImageVersion;
    NSURL * __workaroundInputWriteURL;
    PUMediaProvider * _mediaProvider;
    PUReviewAsset * _reviewAsset;
}

@property (nonatomic, readonly) MarkupViewController *_markupViewController;
@property (nonatomic, readonly) PUObserverRegistry *_observerRegistry;
@property (setter=_setSourceImageVersion:, nonatomic) long long _sourceImageVersion;
@property (setter=_setWorkaroundInputWriteURL:, nonatomic, copy) NSURL *_workaroundInputWriteURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PUMediaProvider *mediaProvider;
@property (nonatomic, readonly) PUReviewAsset *reviewAsset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleDoneButton:(id)arg1;
- (id)_markupViewController;
- (void)_notifyObserversDidFinishWithSavedAsset:(id)arg1;
- (id)_observerRegistry;
- (void)_setSourceImageVersion:(long long)arg1;
- (void)_setWorkaroundInputWriteURL:(id)arg1;
- (long long)_sourceImageVersion;
- (id)_workaroundInputWriteURL;
- (id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
- (id)initWithReviewAsset:(id)arg1 mediaProvider:(id)arg2;
- (id)mediaProvider;
- (void)registerObserver:(id)arg1;
- (id)reviewAsset;
- (void)unregisterObserver:(id)arg1;
- (void)viewDidLoad;

@end
