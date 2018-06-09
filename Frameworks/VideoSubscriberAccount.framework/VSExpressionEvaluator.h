/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSExpressionEvaluator : NSObject <VSObservanceDelegate> {
    NSExpression * _expression;
    bool  _hasDeterminedValue;
    bool  _monitoringForChanges;
    id  _object;
    NSArray * _observers;
    NSDictionary * _substitutionVariables;
    id  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSExpression *expression;
@property (nonatomic) bool hasDeterminedValue;
@property (readonly) unsigned long long hash;
@property (getter=isMonitoringForChanges, nonatomic) bool monitoringForChanges;
@property (nonatomic) id object;
@property (nonatomic, copy) NSArray *observers;
@property (nonatomic, copy) NSDictionary *substitutionVariables;
@property (readonly) Class superclass;
@property (nonatomic, retain) id value;

+ (bool)automaticallyNotifiesObserversOfValue;

- (void).cxx_destruct;
- (id)_observersForExpression:(id)arg1;
- (id)_observersForPredicate:(id)arg1;
- (void)_startMonitoringForChanges;
- (void)_stopMonitoringForChanges;
- (void)_updateComputedResult:(id)arg1;
- (void)_updateComputedResultIfNeeded;
- (void)dealloc;
- (id)expression;
- (bool)hasDeterminedValue;
- (bool)isMonitoringForChanges;
- (id)object;
- (void)observeChange:(id)arg1 forObservance:(id)arg2;
- (id)observers;
- (void)setExpression:(id)arg1;
- (void)setHasDeterminedValue:(bool)arg1;
- (void)setMonitoringForChanges:(bool)arg1;
- (void)setObject:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setSubstitutionVariables:(id)arg1;
- (void)setValue:(id)arg1;
- (id)substitutionVariables;
- (id)value;

@end
