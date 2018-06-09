/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PHPhotosPickerViewController : UIViewController {
    id /* block */  _completionHandler;
    PHPhotosPickerOptions * _options;
    PUPhotosPickerViewController * _photosPickerViewController;
    PUPhotosPickerViewControllerSpec * _spec;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) PHPhotosPickerOptions *options;

- (void).cxx_destruct;
- (void)_commonPHPhotosPickerViewControllerInitializer;
- (void)_handlePickerViewControllerDidFinish:(id)arg1;
- (bool)_updateSpecIfNeeded;
- (id /* block */)completionHandler;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithOptions:(id)arg1;
- (id)options;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
