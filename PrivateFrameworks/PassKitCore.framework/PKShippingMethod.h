/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKShippingMethod : PKPaymentSummaryItem <NSCopying, NSSecureCoding> {
    NSString * _detail;
    NSString * _identifier;
}

@property (nonatomic, copy) NSString *detail;
@property (nonatomic, copy) NSString *identifier;

+ (id)shippingMethodWithProtobuf:(id)arg1;
+ (bool)supportsSecureCoding;
+ (long long)version;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detail;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedString;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToShippingMethod:(id)arg1;
- (id)protobuf;
- (void)setDetail:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
