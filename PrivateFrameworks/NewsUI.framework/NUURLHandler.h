/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUURLHandler : NSObject <SXURLHandling, SXURLPreviewing> {
    <NUURLHandling> * _URLHandling;
    <NUURLHandlerDelegate> * _delegate;
    NSMutableArray * _modifiers;
    <NUPreviewViewControllerFactory> * _previewViewControllerFactory;
    bool  _universalLinksEnabled;
    <NUWebViewControllerFactory> * _webViewControllerFactory;
}

@property (nonatomic, readonly) <NUURLHandling> *URLHandling;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NUURLHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *modifiers;
@property (nonatomic, retain) <NUPreviewViewControllerFactory> *previewViewControllerFactory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool universalLinksEnabled;
@property (nonatomic, retain) <NUWebViewControllerFactory> *webViewControllerFactory;

- (void).cxx_destruct;
- (id)URLHandling;
- (void)addModifier:(id)arg1;
- (void)commitViewController:(id)arg1 URL:(id)arg2;
- (id)delegate;
- (id)initWithURLHandling:(id)arg1 universalLinksEnabled:(bool)arg2;
- (id)modifiers;
- (id)modifyURL:(id)arg1;
- (void)openURL:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(bool)arg2;
- (id)previewViewControllerFactory;
- (void)removeModifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreviewViewControllerFactory:(id)arg1;
- (void)setWebViewControllerFactory:(id)arg1;
- (bool)universalLinksEnabled;
- (id)viewControllerForURL:(id)arg1;
- (id)webViewControllerFactory;

@end
