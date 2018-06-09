/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface _WLKUIAppInstallView : UIView <SBIconProgressViewDelegate> {
    UIImage * _appIcon;
    UIImageView * _appIconImageView;
    UIView * _backgroundKnockoutView;
    id /* block */  _completion;
    double  _installProgress;
    SBIconProgressView * _progressView;
}

@property (nonatomic, retain) UIImage *appIcon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double installProgress;
@property (readonly) Class superclass;

+ (double)_appIconRadius;
+ (struct CGSize { double x1; double x2; })_appIconSize;
+ (id)_progressMaskImage;

- (void).cxx_destruct;
- (id)appIcon;
- (void)dealloc;
- (void)finishInstallationWithCompletion:(id /* block */)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)installProgress;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)progressViewCanBeRemoved:(id)arg1;
- (void)setAppIcon:(id)arg1;
- (void)setInstallProgress:(double)arg1;
- (void)setWaiting;

@end
