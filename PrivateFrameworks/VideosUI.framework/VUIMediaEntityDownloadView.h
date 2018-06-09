/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIMediaEntityDownloadView : UIView <VUIDownloadButtonDelegate> {
    <VUIMediaEntityDownloadViewDelegate> * _delegate;
    VUIDownloadButton * _downloadButton;
    VUIDownloadedButton * _downloadedButton;
    bool  _leftJustifiedImageEnabled;
    double  _progress;
    long long  _progressType;
    bool  _supportsStartingDownload;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VUIMediaEntityDownloadViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUIDownloadButton *downloadButton;
@property (nonatomic, retain) VUIDownloadedButton *downloadedButton;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool leftJustifiedImageEnabled;
@property (nonatomic) double progress;
@property (nonatomic) long long progressType;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsStartingDownload;

- (void).cxx_destruct;
- (id)_currentButton;
- (void)_handleDownloadedButtonAction:(id)arg1;
- (bool)_isAppropriateButtonBeingShown;
- (void)_notifyDelegateCancelDownload;
- (void)_notifyDelegateRemoveDownload;
- (void)_notifyDelegateStartDownload;
- (bool)_shouldShowDownloadButton;
- (bool)_shouldShowDownloadedButton;
- (bool)_shouldShowSomeButton;
- (void)_showAppropriateButton;
- (void)_updateAppropriateButton;
- (void)_updateDownloadButton;
- (id)delegate;
- (void)didSelectDownloadButton:(id)arg1;
- (id)downloadButton;
- (id)downloadedButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (bool)leftJustifiedImageEnabled;
- (double)progress;
- (long long)progressType;
- (void)setDelegate:(id)arg1;
- (void)setDownloadButton:(id)arg1;
- (void)setDownloadedButton:(id)arg1;
- (void)setLeftJustifiedImageEnabled:(bool)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgressType:(long long)arg1;
- (void)setProgressType:(long long)arg1 andProgress:(double)arg2 supportsStartingDownload:(bool)arg3;
- (void)setSupportsStartingDownload:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)supportsStartingDownload;

@end
