/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPTunnelNSURLSessionDelegate : NSObject <NSURLSessionDelegate> {
    bool  _enableExtendedValidation;
    bool  _ignoreInvalidCerts;
    NSString * _leafOID;
    bool  _revocationFailClosed;
    NSString * _validationHostname;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool enableExtendedValidation;
@property (readonly) unsigned long long hash;
@property bool ignoreInvalidCerts;
@property (retain) NSString *leafOID;
@property bool revocationFailClosed;
@property (readonly) Class superclass;
@property (retain) NSString *validationHostname;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)enableExtendedValidation;
- (bool)ignoreInvalidCerts;
- (id)leafOID;
- (bool)revocationFailClosed;
- (void)setEnableExtendedValidation:(bool)arg1;
- (void)setIgnoreInvalidCerts:(bool)arg1;
- (void)setLeafOID:(id)arg1;
- (void)setRevocationFailClosed:(bool)arg1;
- (void)setValidationHostname:(id)arg1;
- (id)validationHostname;

@end
