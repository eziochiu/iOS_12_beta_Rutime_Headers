/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSummaryItemValidator : NSObject <PKPaymentValidating> {
    PKPaymentSummaryItem * _item;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPaymentSummaryItem *item;
@property (readonly) Class superclass;

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)arg1;

- (void).cxx_destruct;
- (id)initWithPaymentSummaryItem:(id)arg1;
- (bool)isValidWithError:(id*)arg1;
- (id)item;

@end
