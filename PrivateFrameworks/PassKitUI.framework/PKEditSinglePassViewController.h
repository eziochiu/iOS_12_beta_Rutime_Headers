/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKEditSinglePassViewController : UIViewController <PKEditPassesDetailsResponder, PKEditPassesPerformanceTestResponder, PKPassDeleteHandler, WLCardViewDelegate> {
    UIBarButtonItem * _deleteBarButton;
    UIBarButtonItem * _flexibleSpace;
    PKGroup * _group;
    PKPass * _pass;
    PKPassView * _passView;
    long long  _performanceTest;
    NSString * _performanceTestName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_deletePassConfirmed;
- (void)_deletePassPressed;
- (void)disableDeleteButton;
- (void)enableDeleteButton;
- (id)group;
- (bool)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2;
- (id)initWithGroup:(id)arg1 pass:(id)arg2;
- (id)pass;
- (void)passView:(id)arg1 didPresentPassDetailsViewController:(id)arg2;
- (void)passViewSetup;
- (void)passWasUpdated:(id)arg1;
- (void)setPerformanceTest:(long long)arg1;
- (void)setPerformanceTestName:(id)arg1;
- (void)showPassDetails;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
