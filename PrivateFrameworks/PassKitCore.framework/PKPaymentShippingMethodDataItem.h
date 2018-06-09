/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentShippingMethodDataItem : PKPaymentDataItem

@property (nonatomic, readonly) PKShippingMethod *shippingMethod;

+ (long long)dataType;

- (bool)isValidWithError:(id*)arg1;
- (id)shippingMethod;

@end
