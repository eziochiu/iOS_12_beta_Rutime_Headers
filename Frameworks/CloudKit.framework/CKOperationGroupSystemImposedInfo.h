/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperationGroupSystemImposedInfo : NSObject <NSSecureCoding> {
    long long  _expectedReceiveSize;
    long long  _expectedSendSize;
    NSDictionary * _networkServiceTypePerConfig;
}

@property (nonatomic) long long expectedReceiveSize;
@property (nonatomic) long long expectedSendSize;
@property (nonatomic, retain) NSDictionary *networkServiceTypePerConfig;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (long long)expectedReceiveSize;
- (long long)expectedSendSize;
- (id)initWithCoder:(id)arg1;
- (id)networkServiceTypePerConfig;
- (void)setExpectedReceiveSize:(long long)arg1;
- (void)setExpectedSendSize:(long long)arg1;
- (void)setNetworkServiceTypePerConfig:(id)arg1;

@end
