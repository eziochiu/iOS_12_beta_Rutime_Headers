/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicTermsUpdateOperation : SSVComplexOperation {
    unsigned long long  _acceptedStoreTermsVersion;
    NSError * _error;
    bool  _hasAcceptedLatestTerms;
    unsigned long long  _latestStoreTermsVersion;
    NSString * _termsContentText;
    NSString * _termsContext;
}

@property (nonatomic, readonly) unsigned long long acceptedStoreTermsVersion;
@property (nonatomic, readonly) bool hasAcceptedLatestTerms;
@property (nonatomic, readonly) unsigned long long latestStoreTermsVersion;
@property (nonatomic, readonly, copy) NSString *termsContentText;
@property (nonatomic, readonly, copy) NSString *termsContext;

- (void).cxx_destruct;
- (bool)_authenticateReturningError:(id*)arg1;
- (bool)_runRequestWithTermsCheckURL:(id)arg1 allowingAuthentication:(bool)arg2 returningError:(id*)arg3 termsContentText:(id*)arg4 hasAcceptedLatestTerms:(bool*)arg5 latestStoreTermsVersion:(unsigned long long*)arg6;
- (unsigned long long)acceptedStoreTermsVersion;
- (id)error;
- (bool)hasAcceptedLatestTerms;
- (id)initWithAcceptedStoreTermsVersion:(unsigned long long)arg1 termsContext:(id)arg2;
- (unsigned long long)latestStoreTermsVersion;
- (void)main;
- (id)termsContentText;
- (id)termsContext;

@end
