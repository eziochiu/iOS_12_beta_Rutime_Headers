/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKEventTypeResultStatsCounter : NSObject <_DKEventStatsCounterInternalProperty> {
    _DKEventStatsCounterInternal * _internal;
}

@property (retain) _DKEventStatsCounterInternal *internal;

+ (id)counterInCollection:(id)arg1 withEventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4;

- (void).cxx_destruct;
- (unsigned long long)countWithTypeValue:(id)arg1 success:(bool)arg2;
- (id)eventName;
- (id)eventType;
- (void)incrementCountByNumber:(unsigned long long)arg1 typeValue:(id)arg2 success:(bool)arg3;
- (void)incrementCountWithTypeValue:(id)arg1 success:(bool)arg2;
- (id)internal;
- (void)setInternal:(id)arg1;
- (id)typeValues;

@end
