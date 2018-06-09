/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMescalSessionOperation : CKDDatabaseOperation {
    CKDMescalSession * _mescalSession;
    int  _serverVersion;
}

@property (nonatomic, retain) CKDMescalSession *mescalSession;
@property (nonatomic) int serverVersion;

- (void).cxx_destruct;
- (void)_exchangeDataAndSendRequest:(id)arg1;
- (void)_handleCertRequestFinished:(id)arg1;
- (void)_handleDataExchanged:(id)arg1 withError:(id)arg2;
- (void)_handleSessionRequestFinished:(id)arg1;
- (id)activityCreate;
- (bool)allowsAnonymousAccount;
- (id)flowControlKey;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (id)mescalSession;
- (bool)requiresTokenRegistration;
- (int)serverVersion;
- (void)setMescalSession:(id)arg1;
- (void)setServerVersion:(int)arg1;
- (bool)shouldCheckAppVersion;

@end