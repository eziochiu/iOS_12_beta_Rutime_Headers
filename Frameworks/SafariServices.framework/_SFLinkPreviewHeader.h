/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFLinkPreviewHeader : UIView <_SFFluidProgressViewDelegate> {
    NSString * _domain;
    UILabel * _domainLabel;
    UIView * _hairline;
    bool  _isMinimumPreviewUI;
    _SFFluidProgressView * _progressView;
}

@property (nonatomic, copy) NSString *domain;
@property (nonatomic, retain) _SFFluidProgressView *progressView;

- (void).cxx_destruct;
- (void)_initializeLayoutContraints;
- (double)defaultHeight;
- (id)domain;
- (void)fluidProgressViewDidShowProgress:(id)arg1;
- (void)fluidProgressViewWillShowProgress:(id)arg1;
- (id)initWithMinimumPreviewUI:(bool)arg1;
- (void)layoutSubviews;
- (id)progressView;
- (void)setDomain:(id)arg1;
- (void)setProgressView:(id)arg1;

@end
