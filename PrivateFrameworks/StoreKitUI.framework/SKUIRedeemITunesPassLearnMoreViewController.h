/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemITunesPassLearnMoreViewController : SKUIRedeemStepViewController <SKUIPassbookLoaderDelegate> {
    bool  _didTapAddPassbookButton;
    SKUIRedeemITunesPassLearnMoreView * _learnMoreView;
    SKUIPassbookLoader * _passbookLoader;
    NSURL * _passbookURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didLoadPassbookURLString:(id)arg1;
- (void)_doneButtonAction:(id)arg1;
- (id)_existingPass;
- (void)_loadPassbookPass;
- (void)_loadPassbookURL;
- (void)_passButtonAction:(id)arg1;
- (void)_showErrorDialog;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)passbookLoaderDidFinish:(id)arg1;
- (id)presentationViewControllerForPassbookLoader:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
