/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductPagePlaceholderViewController : UIViewController <SKUIProductPageChildViewController, UIScrollViewDelegate> {
    SKUIClientContext * _clientContext;
    SKUIColorScheme * _colorScheme;
    <SKUIProductPageChildViewControllerDelegate> * _delegate;
    SKUIProductPageHeaderViewController * _headerViewController;
    UIActivityIndicatorView * _indicator;
    SKUIProductPagePlaceholderScrollView * _scrollView;
    long long  _style;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, retain) SKUIColorScheme *colorScheme;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIProductPageChildViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKUIProductPageHeaderViewController *headerViewController;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addHeaderView;
- (id)clientContext;
- (id)colorScheme;
- (id)delegate;
- (id)headerViewController;
- (id)initWithStyle:(long long)arg1;
- (void)loadView;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderViewController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
