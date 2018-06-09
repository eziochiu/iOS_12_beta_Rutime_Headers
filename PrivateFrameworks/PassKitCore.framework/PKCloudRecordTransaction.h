/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKCloudRecordTransaction : PKCloudRecordObject {
    PKPaymentTransaction * _transaction;
}

@property (nonatomic, retain) PKPaymentTransaction *transaction;

+ (id)dateFormatter;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIncludeItem:(bool)arg1;
- (long long)compare:(id)arg1;
- (id)description;
- (id)descriptionWithItem:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)item;
- (void)setTransaction:(id)arg1;
- (id)transaction;

@end
