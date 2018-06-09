/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIHTMLFooterView : UIView <RUIWebContainerViewDelegate, RemoteUITableFooter> {
    NSURL * _baseURL;
    <RUITableFooterDelegate> * _delegate;
    RUIWebContainerView * _webContainerView;
}

@property (nonatomic, retain) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUITableFooterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)baseURL;
- (id)delegate;
- (double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (double)footerHeightForWidth:(double)arg1 inView:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (void)layoutSubviews;
- (void)setBaseURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)webContainerView:(id)arg1 didClickLinkWithURL:(id)arg2;

@end
