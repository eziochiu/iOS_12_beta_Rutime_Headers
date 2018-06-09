/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRequestUpdate : NSObject <NSSecureCoding> {
    NSArray * _paymentSummaryItems;
    long long  _status;
}

@property (nonatomic, copy) NSArray *paymentSummaryItems;
@property (nonatomic) long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentSummaryItems:(id)arg1;
- (id)initWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2;
- (id)paymentSummaryItems;
- (void)setPaymentSummaryItems:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
