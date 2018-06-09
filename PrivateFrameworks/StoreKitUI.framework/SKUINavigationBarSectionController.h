/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUINavigationBarSectionController : NSObject <SKUIArtworkRequestDelegate> {
    SKUINavigationBarContext * _navigationBarContext;
    SKUIViewElementLayoutContext * _viewLayoutContext;
}

@property (nonatomic, retain) SKUINavigationBarContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) SKUIViewElementLayoutContext *viewLayoutContext;

- (void).cxx_destruct;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)barButtonItemForElementIdentifier:(id)arg1;
- (id)context;
- (void)dealloc;
- (void)reloadAfterDocumentUpdateWithNavigationItem:(id)arg1;
- (void)reloadSectionViews;
- (void)setContext:(id)arg1;
- (id)view;
- (id)viewForElementIdentifier:(id)arg1;
- (id)viewLayoutContext;
- (void)willAppearInNavigationBar;

@end
