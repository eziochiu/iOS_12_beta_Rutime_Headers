/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicProfileTemplateDocumentViewController : SKUIViewController <SKUIDocumentViewController, SKUIModalSourceViewProvider, SKUINavigationBarDisplayConfiguring> {
    UIViewController<MusicClientContextConsuming><SKUINavigationBarDisplayConfiguring> * _profileViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)dealloc;
- (void)documentDidUpdate:(id)arg1;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithTemplateViewElement:(id)arg1 clientContext:(id)arg2;
- (bool)managesNavigationBarContents;
- (long long)navigationBarTintAdjustmentMode;
- (id)navigationBarTintColor;
- (id)navigationBarTitleTextTintColor;
- (bool)prefersNavigationBarBackgroundViewHidden;
- (id)previewMenuItems;
- (void)setClientContext:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
