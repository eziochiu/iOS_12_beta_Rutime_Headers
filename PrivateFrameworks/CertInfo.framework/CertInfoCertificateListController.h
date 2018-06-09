/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@interface CertInfoCertificateListController : UITableViewController {
    <CertInfoTrustDescription> * _description;
}

- (void).cxx_destruct;
- (id)initWithTrustDescription:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
