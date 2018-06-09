/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
 */

@interface NMBUIWelcomeAlertViewController : UIAlertController <NMBUIWelcomeViewControllerDelegate> {
    NMBUIAlertControllerVisualStyleProvider * _alertStyleProvider;
    <NMBUIOnboardingDataSource> * _dataSource;
}

@property (nonatomic, retain) <NMBUIOnboardingDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_shouldFitWidthToContentViewControllerWidth;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)welcomeViewControllerDidChooseToContinue:(bool)arg1;

@end
