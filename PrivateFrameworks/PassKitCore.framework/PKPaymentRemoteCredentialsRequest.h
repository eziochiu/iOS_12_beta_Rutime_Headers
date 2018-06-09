/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRemoteCredentialsRequest : PKPaymentWebServiceRequest {
    long long  _credentialType;
    bool  _includeMetadata;
}

@property (nonatomic) long long credentialType;
@property (nonatomic) bool includeMetadata;

- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3;
- (long long)credentialType;
- (bool)includeMetadata;
- (void)setCredentialType:(long long)arg1;
- (void)setIncludeMetadata:(bool)arg1;

@end
