/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesInlineProblemReportViewController : UIViewController <MFMailComposeViewControllerDelegate> {
    bool  _didDismissMailWindow;
    NSArray * _features;
    PHMemory * _memory;
    UIActivityIndicatorView * _reportCaptureInProgressActivityIndicator;
    UILabel * _reportCaptureInProgressLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didDismissMailWindow;
@property (nonatomic, retain) NSArray *features;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHMemory *memory;
@property (nonatomic, retain) UIActivityIndicatorView *reportCaptureInProgressActivityIndicator;
@property (nonatomic, retain) UILabel *reportCaptureInProgressLabel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_showMailComposeWindow;
- (bool)didDismissMailWindow;
- (id)features;
- (id)initWithMemory:(id)arg1 features:(id)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)memory;
- (id)reportCaptureInProgressActivityIndicator;
- (id)reportCaptureInProgressLabel;
- (void)setDidDismissMailWindow:(bool)arg1;
- (void)setFeatures:(id)arg1;
- (void)setMemory:(id)arg1;
- (void)setReportCaptureInProgressActivityIndicator:(id)arg1;
- (void)setReportCaptureInProgressLabel:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
