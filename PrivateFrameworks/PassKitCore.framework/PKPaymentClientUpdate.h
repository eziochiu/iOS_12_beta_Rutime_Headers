/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentClientUpdate : NSObject <NSSecureCoding> {
    NSArray * _paymentSummaryItems;
    NSString * _selectedAID;
    NSArray * _shippingMethods;
    long long  _status;
}

@property (nonatomic, readonly) NSArray *paymentSummaryItems;
@property (nonatomic, readonly) NSString *selectedAID;
@property (nonatomic, readonly) NSArray *shippingMethods;
@property (nonatomic, readonly) long long status;

+ (id)paymentUpdateResponseWithProtobuf:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentSummaryItems:(id)arg1 shippingMethods:(id)arg2 status:(long long)arg3 selectedAID:(id)arg4;
- (id)paymentSummaryItems;
- (id)protobuf;
- (id)selectedAID;
- (id)shippingMethods;
- (long long)status;

@end