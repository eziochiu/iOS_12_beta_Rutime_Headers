/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

@interface _DASPriorityQueue : NSObject {
    unsigned long long  _count;
    NSNumber * _highestPriority;
    NSNumber * _lowestPriority;
    NSMutableDictionary * _objects;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic, retain) NSNumber *highestPriority;
@property (nonatomic, retain) NSNumber *lowestPriority;
@property (nonatomic, retain) NSMutableDictionary *objects;

+ (id)priorityQueue;

- (void).cxx_destruct;
- (void)addObject:(id)arg1 withPriority:(unsigned long long)arg2;
- (id)allObjects;
- (unsigned long long)count;
- (id)description;
- (id)highestPriority;
- (id)init;
- (id)lowestPriority;
- (id)objects;
- (id)popFirst;
- (id)popLast;
- (void)removeObject:(id)arg1 atPriority:(unsigned long long)arg2;
- (void)setCount:(unsigned long long)arg1;
- (void)setHighestPriority:(id)arg1;
- (void)setLowestPriority:(id)arg1;
- (void)setObjects:(id)arg1;

@end
