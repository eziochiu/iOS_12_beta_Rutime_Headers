/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFReaderEnabledWebViewController : SFWebViewController <WKNavigationDelegatePrivate, _SFReaderControllerDelegate> {
    _SFReaderController * _readerController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFReaderEnabledWebViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _SFReaderController *readerController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)createReaderWebViewForReaderController:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (id)readerController;
- (void)readerController:(id)arg1 didClickLinkInReaderWithRequest:(id)arg2;
- (void)readerController:(id)arg1 didClickLinkRequestingNewWindowInReaderWithRequest:(id)arg2;
- (void)readerController:(id)arg1 didDetermineReaderAvailability:(bool)arg2 dueToSameDocumentNavigation:(bool)arg3;
- (void)setUpReaderWithReaderWebView:(id)arg1;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;

@end
