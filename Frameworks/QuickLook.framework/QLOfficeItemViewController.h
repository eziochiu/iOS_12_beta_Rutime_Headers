/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLOfficeItemViewController : QLItemAggregatedViewController {
    QLPDFItemViewController * _pdfViewController;
    QLWKWebItemViewController * _webViewController;
}

@property (nonatomic, retain) QLPDFItemViewController *pdfViewController;
@property (nonatomic, retain) QLWKWebItemViewController *webViewController;

+ (bool)providesCustomPrinter;
+ (bool)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;

- (void).cxx_destruct;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)pdfViewController;
- (void)setPdfViewController:(id)arg1;
- (void)setWebViewController:(id)arg1;
- (id)webViewController;

@end
