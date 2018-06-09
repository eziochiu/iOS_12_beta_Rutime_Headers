/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertInfoSheetViewController : UIViewController {
    <CertInfoSheetViewControllerDelegate> * _delegate;
    NSString * _serviceName;
    NSDate * _trustExpiration;
    NSArray * _trustProperties;
    NSString * _trustPurpose;
    NSString * _trustSubtitle;
    NSString * _trustTitle;
}

@property (nonatomic) <CertInfoSheetViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSString *serviceName;
@property (nonatomic, retain) NSDate *trustExpiration;
@property (nonatomic, retain) NSArray *trustProperties;
@property (nonatomic, retain) NSString *trustPurpose;
@property (nonatomic, retain) NSString *trustSubtitle;
@property (nonatomic, retain) NSString *trustTitle;

- (void).cxx_destruct;
- (void)_accept;
- (void)_cancel;
- (void)_dismissWithResult:(int)arg1;
- (void)_pushDetailsView;
- (void)_setupNavItem;
- (id)delegate;
- (void)loadView;
- (id)serviceName;
- (void)setDelegate:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setTrustExpiration:(id)arg1;
- (void)setTrustProperties:(id)arg1;
- (void)setTrustPurpose:(id)arg1;
- (void)setTrustSubtitle:(id)arg1;
- (void)setTrustTitle:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)trustExpiration;
- (id)trustProperties;
- (id)trustPurpose;
- (id)trustSubtitle;
- (id)trustTitle;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
