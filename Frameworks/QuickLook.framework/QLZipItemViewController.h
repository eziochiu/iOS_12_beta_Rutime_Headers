/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLZipItemViewController : QLDetailItemViewController {
    unsigned long long  _numberOfContainedFiles;
    QLDetailItemViewControllerState * _readyToUnzipState;
    QLDetailItemViewControllerState * _unableToUnzipState;
    QLDetailItemViewControllerState * _unzippingState;
}

+ (bool)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;

- (void).cxx_destruct;
- (void)_updateZipInformationWithZipSize:(id)arg1;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)performAction;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)viewDidLoad;

@end
