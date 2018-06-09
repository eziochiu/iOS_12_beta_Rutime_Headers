/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKProductSubscriptionPeriod : NSObject {
    id  _internal;
}

@property (nonatomic, readonly) unsigned long long numberOfUnits;
@property (nonatomic, readonly) unsigned long long unit;

- (void).cxx_destruct;
- (void)_setNumberOfUnits:(unsigned long long)arg1;
- (void)_setUnit:(unsigned long long)arg1;
- (id)copyXPCEncoding;
- (id)init;
- (id)initWithISO8601String:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (unsigned long long)numberOfUnits;
- (unsigned long long)unit;

@end
