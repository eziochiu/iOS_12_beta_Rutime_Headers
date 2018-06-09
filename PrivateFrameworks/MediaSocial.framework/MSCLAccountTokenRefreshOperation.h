/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAccountTokenRefreshOperation : NSOperation {
    MSCLAccountStore * _accountStore;
    SKUIMediaSocialAuthor * _author;
    NSArray * _inputServices;
    NSLock * _lock;
    id /* block */  _outputBlock;
}

@property (retain) MSCLAccountStore *accountStore;
@property (copy) id /* block */ outputBlock;

- (void).cxx_destruct;
- (void)_getExternalDestinationForServiceIdentifier:(id)arg1 accountStore:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_registerExternalDestination:(id)arg1 forServiceIdentifier:(id)arg2 accountStore:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)_ssvServiceIdentifierForMSCLServiceIdentifier:(id)arg1;
- (id)accountStore;
- (id)initWithAuthor:(id)arg1 externalServices:(id)arg2;
- (void)main;
- (id /* block */)outputBlock;
- (void)setAccountStore:(id)arg1;
- (void)setOutputBlock:(id /* block */)arg1;

@end
