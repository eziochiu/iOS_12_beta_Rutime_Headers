/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
 */

@interface NMBUIProgressTableCell : PSTableCell {
    UIStackView * _progressContainerView;
    UIActivityIndicatorView * _progressIndicator;
    UILabel * _progressTextLabel;
    UIProgressView * _progressView;
    bool  _shouldShowProgressDetails;
}

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;

@end
