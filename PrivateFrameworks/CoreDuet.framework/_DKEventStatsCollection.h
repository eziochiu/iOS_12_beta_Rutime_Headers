/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKEventStatsCollection : NSObject {
    NSMutableDictionary * _eventCounterStats;
    NSString * _name;
}

@property (nonatomic, readonly) NSString *name;

+ (id)allEventStatsCollections;
+ (id)collectionWithName:(id)arg1;
+ (id)counterWithClass:(Class)arg1 collectionName:(id)arg2 eventName:(id)arg3 eventType:(id)arg4 eventTypePossibleValues:(id)arg5 hasResult:(bool)arg6 scalar:(bool)arg7;

- (void).cxx_destruct;
- (void)addEventStatsCounter:(id)arg1 withKey:(id)arg2;
- (id)allEventStatsCounters;
- (id)eventStatsCounterWithKey:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)name;

@end
