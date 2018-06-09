/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentPerformResponse : PKPeerPaymentStatusResponse {
    NSUUID * _deviceScoreIdentifier;
}

@property (nonatomic, readonly, copy) NSUUID *deviceScoreIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deviceScoreIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 deviceScoreIdentifier:(id)arg2;

@end
