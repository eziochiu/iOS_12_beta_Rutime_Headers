/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFReaderViewController : UIViewController <WKUIDelegate> {
    _SFBrowserContentViewController * _containerViewController;
    WKWebView * _originalWebView;
}

@property (nonatomic) _SFBrowserContentViewController *containerViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WKWebView *readerWebView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_webView:(id)arg1 commitPreviewedViewController:(id)arg2;
- (id)_webView:(id)arg1 previewViewControllerForURL:(id)arg2 defaultActions:(id)arg3 elementInfo:(id)arg4;
- (id)containerViewController;
- (id)initWithOriginalWebView:(id)arg1;
- (void)loadView;
- (id)readerWebView;
- (void)setContainerViewController:(id)arg1;

@end
