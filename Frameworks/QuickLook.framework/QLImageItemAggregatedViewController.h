/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLImageItemAggregatedViewController : QLItemAggregatedViewController {
    QLMarkupImageItemViewController * _imageMarkupPreviewController;
    QLImageItemViewController * _imagePreviewController;
}

+ (bool)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;

- (void).cxx_destruct;
- (id)_imageMarkupPreviewController;
- (id)_imagePreviewController;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;

@end
