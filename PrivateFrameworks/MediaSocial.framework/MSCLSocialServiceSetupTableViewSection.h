/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLSocialServiceSetupTableViewSection : NSObject {
    MSCLAccountStore * _accountStore;
    SKUIClientContext * _clientContext;
    NSArray * _facebookPages;
    UIImage * _image;
    NSOperationQueue * _operationQueue;
    MSCLSocialService * _service;
}

@property (nonatomic, readonly) MSCLAccountStore *accountStore;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, copy) NSArray *facebookPages;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) MSCLSocialService *service;

+ (id)instanceWithService:(id)arg1 accountStore:(id)arg2;

- (void).cxx_destruct;
- (long long)_cellTypeForIndexPath:(id)arg1;
- (id)_displayNameForAccount:(id)arg1;
- (id)_serviceTitle;
- (void)_switchAction:(id)arg1;
- (id)accountStore;
- (id)clientContext;
- (id)facebookPages;
- (id)initWithService:(id)arg1 accountStore:(id)arg2;
- (id)operationQueue;
- (id)performActionForIndexPath:(id)arg1 parentViewController:(id)arg2;
- (void)registerReusableCellsWithTableView:(id)arg1;
- (id)service;
- (void)setClientContext:(id)arg1;
- (void)setFacebookPages:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;

@end
