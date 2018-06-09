/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFWAPICertificatePromptOperation : WFOperation <WFOtherNetworkViewControllerDelegate> {
    NSData * _WAPIIdentityPEMBlob;
    struct __SecIdentity { } * _WAPIRootCertificate;
    UINavigationController * _navigationController;
    WFNetworkScanRecord * _network;
    WFOtherNetworkViewController * _promptViewController;
    UIViewController * _rootViewController;
    bool  _userCancelled;
    NSArray * _wapiIdentityMapping;
}

@property (nonatomic, retain) NSData *WAPIIdentityPEMBlob;
@property (nonatomic) struct __SecIdentity { }*WAPIRootCertificate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UINavigationController *navigationController;
@property (nonatomic, retain) WFNetworkScanRecord *network;
@property (nonatomic, retain) WFOtherNetworkViewController *promptViewController;
@property (nonatomic, retain) UIViewController *rootViewController;
@property (readonly) Class superclass;
@property (nonatomic) bool userCancelled;
@property (nonatomic, retain) NSArray *wapiIdentityMapping;

- (void).cxx_destruct;
- (id)WAPIIdentityPEMBlob;
- (struct __SecIdentity { }*)WAPIRootCertificate;
- (void)finish;
- (id)initWithRootViewController:(id)arg1 network:(id)arg2;
- (id)navigationController;
- (id)network;
- (bool)otherNetworkViewController:(id)arg1 isValidPassword:(id)arg2;
- (void)otherNetworkViewControllerUserDidTapCancel:(id)arg1;
- (void)otherNetworkViewControllerUserDidTapJoin:(id)arg1;
- (id)promptViewController;
- (id)rootViewController;
- (void)setNavigationController:(id)arg1;
- (void)setNetwork:(id)arg1;
- (void)setPromptViewController:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setUserCancelled:(bool)arg1;
- (void)setWAPIIdentityPEMBlob:(id)arg1;
- (void)setWAPIRootCertificate:(struct __SecIdentity { }*)arg1;
- (void)setWapiIdentityMapping:(id)arg1;
- (void)start;
- (bool)userCancelled;
- (id)wapiIdentityMapping;

@end
