/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFStaticReadPolicy : NSObject <HFCharacteristicReadPolicy> {
    unsigned long long  _decision;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long decision;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)policyWithDecision:(unsigned long long)arg1;

- (unsigned long long)decision;
- (id)description;
- (unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id*)arg2;
- (id)init;
- (id)initWithDecision:(unsigned long long)arg1;

@end
