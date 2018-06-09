/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFDateComponentsCondition : HFTimeCondition <HFPrimitiveTimeCondition> {
    unsigned long long  _comparisonType;
    NSDateComponents * _dateComponents;
}

@property (nonatomic, readonly) unsigned long long comparisonType;
@property (nonatomic, readonly) NSDateComponents *dateComponents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isTimeOfDayCondition;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (unsigned long long)comparisonType;
- (id)dateComponents;
- (id)description;
- (id)initWithDateComponents:(id)arg1 comparisonType:(unsigned long long)arg2;
- (id)initWithPredicate:(id)arg1;
- (bool)isTimeOfDayCondition;

@end
