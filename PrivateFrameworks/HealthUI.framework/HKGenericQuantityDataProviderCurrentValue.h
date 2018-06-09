/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKGenericQuantityDataProviderCurrentValue : NSObject <HKDataProviderValue> {
    NSDate * _date;
    HKQuantity * _quantity;
}

@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;
- (id)contextualDescriptionWithDateCache:(id)arg1;
- (id)date;
- (id)initWithQuantity:(id)arg1;
- (void)setDate:(id)arg1;
- (id)stringWithDisplayType:(id)arg1 unitController:(id)arg2;

@end
