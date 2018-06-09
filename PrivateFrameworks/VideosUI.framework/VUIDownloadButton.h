/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIDownloadButton : UIView {
    <VUIDownloadButtonDelegate> * _delegate;
    VUIOfferButton * _offerButton;
    double  _progress;
    long long  _progressType;
    bool  _supportsStartingDownload;
}

@property (nonatomic) <VUIDownloadButtonDelegate> *delegate;
@property (nonatomic, retain) VUIOfferButton *offerButton;
@property (nonatomic) double progress;
@property (nonatomic) long long progressType;
@property (nonatomic) bool supportsStartingDownload;

+ (long long)_downloadButtonProgressTypeFromOfferButtonProgressType:(long long)arg1;
+ (long long)_offerButtonProgressTypeFromDownloadButtonProgressType:(long long)arg1;

- (void).cxx_destruct;
- (bool)_canAnimate;
- (void)_handleOfferButtonAction:(id)arg1;
- (void)_setupOfferButton;
- (void)_updateOfferButton;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)offerButton;
- (double)progress;
- (long long)progressType;
- (void)setDelegate:(id)arg1;
- (void)setOfferButton:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgressType:(long long)arg1;
- (void)setProgressType:(long long)arg1 andProgress:(double)arg2;
- (void)setSupportsStartingDownload:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)supportsStartingDownload;

@end
