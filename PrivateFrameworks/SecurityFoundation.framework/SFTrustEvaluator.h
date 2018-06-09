/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFTrustEvaluator : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowCertificateFetching;
    NSArray * _applicationAnchorCertificates;
    SFRevocationPolicy * _revocationPolicy;
    id  _trustEvaluatorInternal;
    SFTrustPolicy * _trustPolicy;
    bool  _trustSystemAnchorCertificates;
}

@property (nonatomic) bool allowCertificateFetching;
@property (nonatomic, copy) NSArray *applicationAnchorCertificates;
@property (nonatomic, copy) SFRevocationPolicy *revocationPolicy;
@property (nonatomic, copy) SFTrustPolicy *trustPolicy;
@property (nonatomic) bool trustSystemAnchorCertificates;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowCertificateFetching;
- (id)applicationAnchorCertificates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluateCertificateChain:(id)arg1 forDate:(id)arg2 resultHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrustPolicy:(id)arg1;
- (id)initWithTrustPolicy:(id)arg1 revocationPolicy:(id)arg2;
- (id)initWithTrustPolicy:(id)arg1 revocationPolicy:(id)arg2 applicationAnchorCertificates:(id)arg3 allowCertificateFetching:(bool)arg4 trustSystemAnchorCertificates:(bool)arg5;
- (id)revocationPolicy;
- (void)setAllowCertificateFetching:(bool)arg1;
- (void)setApplicationAnchorCertificates:(id)arg1;
- (void)setRevocationPolicy:(id)arg1;
- (void)setTrustPolicy:(id)arg1;
- (void)setTrustSystemAnchorCertificates:(bool)arg1;
- (id)trustPolicy;
- (bool)trustSystemAnchorCertificates;

@end
