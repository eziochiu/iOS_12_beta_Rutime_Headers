/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFNavigationBarItem : NSObject {
    NSString * _customPlaceholderText;
    bool  _lockIconHasEVCertificateTint;
    unsigned long long  _mediaCaptureDeviceIcon;
    _SFNavigationBar * _navigationBar;
    bool  _overrideBarStyleForSecurityWarning;
    _SFFluidProgressView * _progressView;
    bool  _readerButtonSelected;
    bool  _showsLockIcon;
    bool  _showsNotSecureAnnotation;
    bool  _showsNotSecureMessage;
    bool  _showsReaderAvailabilityText;
    bool  _showsReaderButton;
    bool  _showsSearchIndicator;
    bool  _showsStopReloadButtons;
    unsigned long long  _startIndexOfTextInExpandedText;
    bool  _stopReloadButtonShowsStop;
    NSString * _text;
    bool  _textHasEVCertificateTint;
    NSString * _textWhenExpanded;
}

@property (nonatomic, copy) NSString *customPlaceholderText;
@property (nonatomic) bool lockIconHasEVCertificateTint;
@property (nonatomic) unsigned long long mediaCaptureDeviceIcon;
@property (setter=_setNavigationBar:, nonatomic) _SFNavigationBar *navigationBar;
@property (nonatomic) bool overrideBarStyleForSecurityWarning;
@property (nonatomic, retain) _SFFluidProgressView *progressView;
@property (nonatomic) bool readerButtonSelected;
@property (nonatomic) bool showsLockIcon;
@property (nonatomic) bool showsNotSecureAnnotation;
@property (nonatomic) bool showsNotSecureMessage;
@property (nonatomic, readonly) bool showsReaderAvailabilityText;
@property (nonatomic) bool showsReaderButton;
@property (nonatomic) bool showsSearchIndicator;
@property (nonatomic) bool showsStopReloadButtons;
@property (nonatomic, readonly) unsigned long long startIndexOfTextInExpandedText;
@property (nonatomic) bool stopReloadButtonShowsStop;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic) bool textHasEVCertificateTint;
@property (nonatomic, readonly) NSString *textWhenExpanded;

- (void).cxx_destruct;
- (void)_setNavigationBar:(id)arg1;
- (id)customPlaceholderText;
- (id)init;
- (bool)lockIconHasEVCertificateTint;
- (unsigned long long)mediaCaptureDeviceIcon;
- (id)navigationBar;
- (bool)overrideBarStyleForSecurityWarning;
- (id)progressView;
- (bool)readerButtonSelected;
- (void)setCustomPlaceholderText:(id)arg1;
- (void)setLockIconHasEVCertificateTint:(bool)arg1;
- (void)setMediaCaptureDeviceIcon:(unsigned long long)arg1;
- (void)setOverrideBarStyleForSecurityWarning:(bool)arg1;
- (void)setProgressView:(id)arg1;
- (void)setReaderButtonSelected:(bool)arg1;
- (void)setShowsLockIcon:(bool)arg1;
- (void)setShowsNotSecureAnnotation:(bool)arg1;
- (void)setShowsNotSecureAnnotation:(bool)arg1 showsNotSecureMessage:(bool)arg2;
- (void)setShowsNotSecureMessage:(bool)arg1;
- (void)setShowsReaderButton:(bool)arg1;
- (void)setShowsReaderButton:(bool)arg1 showsAvailabilityText:(bool)arg2;
- (void)setShowsSearchIndicator:(bool)arg1;
- (void)setShowsStopReloadButtons:(bool)arg1;
- (void)setStopReloadButtonShowsStop:(bool)arg1;
- (void)setText:(id)arg1 textWhenExpanded:(id)arg2 startIndex:(unsigned long long)arg3;
- (void)setTextHasEVCertificateTint:(bool)arg1;
- (bool)showsLockIcon;
- (bool)showsNotSecureAnnotation;
- (bool)showsNotSecureMessage;
- (bool)showsReaderAvailabilityText;
- (bool)showsReaderButton;
- (bool)showsSearchIndicator;
- (bool)showsStopReloadButtons;
- (unsigned long long)startIndexOfTextInExpandedText;
- (bool)stopReloadButtonShowsStop;
- (id)text;
- (bool)textHasEVCertificateTint;
- (id)textWhenExpanded;

@end
