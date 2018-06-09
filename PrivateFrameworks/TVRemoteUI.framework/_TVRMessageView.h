/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface _TVRMessageView : UIView {
    UIView * _currentView;
    unsigned long long  _messageType;
}

@property (nonatomic, retain) UIView *currentView;
@property (nonatomic) unsigned long long messageType;

- (void).cxx_destruct;
- (bool)_largeAccessibilityFontSizesEnabled;
- (id)_loadingViewWithTitle:(id)arg1 forSize:(struct CGSize { double x1; double x2; })arg2;
- (void)clearContent;
- (id)currentView;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (unsigned long long)messageType;
- (void)setCurrentView:(id)arg1;
- (void)setMessageType:(unsigned long long)arg1;
- (void)showLoadingSpinner;
- (void)showMessageWithError:(id)arg1 andDevice:(id)arg2;
- (void)showMessageWithTitle:(id)arg1 message:(id)arg2;
- (void)showNoAssociatedNetworkMessage;
- (void)showNoWIFIConnectionMessage;
- (void)showSearchingSpinner;

@end
