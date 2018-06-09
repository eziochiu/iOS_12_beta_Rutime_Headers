/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFPeerPaymentEnrollmentResponse : NSObject <NSSecureCoding> {
    NSDictionary * _certificate;
    NSData * _prePeerPaymentCertificate;
}

@property (nonatomic, readonly) NSDictionary *certificate;
@property (nonatomic, readonly) NSData *prePeerPaymentCertificate;

+ (bool)supportsSecureCoding;

- (id)certificate;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)prePeerPaymentCertificate;

@end
