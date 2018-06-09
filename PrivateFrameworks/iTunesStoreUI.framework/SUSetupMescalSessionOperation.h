/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUSetupMescalSessionOperation : ISOperation {
    SSURLRequestProperties * _requestProperties;
    SUMescalSession * _session;
}

@property (readonly) SUMescalSession *mescalSession;

- (bool)_isMescalEnabled;
- (id)_setupSAPCertificate:(id*)arg1;
- (id)_setupSAPWithData:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)initWithURLRequestProperties:(id)arg1;
- (id)mescalSession;
- (void)run;

@end
