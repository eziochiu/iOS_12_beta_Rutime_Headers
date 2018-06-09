/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertificateViewController : UITableViewController {
    int  _certUIAction;
    id /* block */  _certificateButtonActionHandler;
    NSString * _certificateButtonDescription;
    bool  _certificateButtonIsDestructiveAction;
    NSString * _certificateButtonTitle;
    NSDate * _certificateExpiration;
    bool  _certificateIsRoot;
    NSString * _certificateIssuer;
    NSArray * _certificateProperties;
    NSString * _certificatePurpose;
    NSString * _certificateTitle;
    id  _certificateTrust;
    bool  _showCertificateButton;
}

@property (nonatomic) int certUIAction;
@property (nonatomic, copy) id /* block */ certificateButtonActionHandler;
@property (nonatomic, retain) NSString *certificateButtonDescription;
@property (nonatomic) bool certificateButtonIsDestructiveAction;
@property (nonatomic, retain) NSString *certificateButtonTitle;
@property (nonatomic, retain) NSDate *certificateExpiration;
@property (nonatomic) bool certificateIsRoot;
@property (nonatomic, retain) NSString *certificateIssuer;
@property (nonatomic, retain) NSArray *certificateProperties;
@property (nonatomic, retain) NSString *certificatePurpose;
@property (nonatomic, retain) NSString *certificateTitle;
@property (nonatomic, retain) id certificateTrust;
@property (nonatomic) bool showCertificateButton;

- (void).cxx_destruct;
- (int)certUIAction;
- (id /* block */)certificateButtonActionHandler;
- (id)certificateButtonDescription;
- (bool)certificateButtonIsDestructiveAction;
- (id)certificateButtonTitle;
- (id)certificateExpiration;
- (bool)certificateIsRoot;
- (id)certificateIssuer;
- (id)certificateProperties;
- (id)certificatePurpose;
- (id)certificateTitle;
- (id)certificateTrust;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)init;
- (id)initWithTrust:(struct __SecTrust { }*)arg1 action:(int)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)preferredContentSizeChanged:(id)arg1;
- (void)setCertUIAction:(int)arg1;
- (void)setCertificateButtonActionHandler:(id /* block */)arg1;
- (void)setCertificateButtonDescription:(id)arg1;
- (void)setCertificateButtonIsDestructiveAction:(bool)arg1;
- (void)setCertificateButtonTitle:(id)arg1;
- (void)setCertificateExpiration:(id)arg1;
- (void)setCertificateIsRoot:(bool)arg1;
- (void)setCertificateIssuer:(id)arg1;
- (void)setCertificateProperties:(id)arg1;
- (void)setCertificatePurpose:(id)arg1;
- (void)setCertificateTitle:(id)arg1;
- (void)setCertificateTitle:(id)arg1 issuer:(id)arg2 purpose:(id)arg3 expiration:(id)arg4 properties:(id)arg5 isRoot:(bool)arg6 action:(int)arg7;
- (void)setCertificateTrust:(id)arg1;
- (void)setShowCertificateButton:(bool)arg1;
- (void)setShowCertificateButton:(bool)arg1 localizedTitle:(id)arg2 localizedDescription:(id)arg3 destructive:(bool)arg4 handler:(id /* block */)arg5;
- (bool)showCertificateButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
