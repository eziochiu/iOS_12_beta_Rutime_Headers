/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKExpressTransactionState : NSObject <NSSecureCoding> {
    NSString * _passUniqueIdentifier;
    NSString * _paymentApplicationIdentifier;
    bool  _processing;
    unsigned long long  _receivedEvents;
    long long  _technologyType;
}

@property (nonatomic, retain) NSString *passUniqueIdentifier;
@property (nonatomic, copy) NSString *paymentApplicationIdentifier;
@property (getter=isProcessing, nonatomic) bool processing;
@property (nonatomic) unsigned long long receivedEvents;
@property (nonatomic) long long technologyType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isProcessing;
- (id)passUniqueIdentifier;
- (id)paymentApplicationIdentifier;
- (unsigned long long)receivedEvents;
- (void)setPassUniqueIdentifier:(id)arg1;
- (void)setPaymentApplicationIdentifier:(id)arg1;
- (void)setProcessing:(bool)arg1;
- (void)setReceivedEvents:(unsigned long long)arg1;
- (void)setTechnologyType:(long long)arg1;
- (long long)technologyType;

@end
