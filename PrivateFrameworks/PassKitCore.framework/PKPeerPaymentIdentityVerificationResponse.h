/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentIdentityVerificationResponse : PKPeerPaymentWebServiceResponse {
    NSArray * _acceptableDocuments;
    PKPeerPaymentAccount * _account;
    bool  _complete;
    NSString * _contextLocalizedDescription;
    NSString * _contextLocalizedTitle;
    NSArray * _encryptionCertificates;
    NSString * _encryptionVersion;
    NSString * _localizedDescription;
    NSString * _localizedTitle;
    bool  _manuallyTriggered;
    NSArray * _requiredFieldsByPage;
}

@property (nonatomic, readonly) NSArray *acceptableDocuments;
@property (nonatomic, readonly) PKPeerPaymentAccount *account;
@property (nonatomic, readonly) bool complete;
@property (nonatomic, readonly, copy) NSString *contextLocalizedDescription;
@property (nonatomic, readonly, copy) NSString *contextLocalizedTitle;
@property (nonatomic, readonly, copy) NSArray *encryptionCertificates;
@property (nonatomic, readonly, copy) NSString *encryptionVersion;
@property (nonatomic, readonly, copy) NSString *localizedDescription;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic) bool manuallyTriggered;
@property (nonatomic, readonly, copy) NSArray *requiredFieldsByPage;

- (void).cxx_destruct;
- (id)acceptableDocuments;
- (id)account;
- (bool)complete;
- (id)contextLocalizedDescription;
- (id)contextLocalizedTitle;
- (id)encryptionCertificates;
- (id)encryptionVersion;
- (id)initWithData:(id)arg1;
- (id)localizedDescription;
- (id)localizedTitle;
- (bool)manuallyTriggered;
- (id)requiredFieldsByPage;
- (void)setManuallyTriggered:(bool)arg1;

@end
