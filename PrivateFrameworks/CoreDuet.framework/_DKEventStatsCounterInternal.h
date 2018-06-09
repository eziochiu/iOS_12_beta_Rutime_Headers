/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKEventStatsCounterInternal : NSObject {
    NSString * _domain;
    NSString * _eventName;
    PETEventTracker * _eventTracker;
    NSString * _eventType;
    bool  _hasResult;
    bool  _hasType;
    struct XSPerfCollection { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; struct XSPerfCounter {} *x6; struct XSPerfMetric {} *x7; struct XSPerfString {} *x8; char *x9; } * _stats;
    NSArray * _typeValues;
}

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *eventName;
@property (readonly) PETEventTracker *eventTracker;
@property (nonatomic, readonly) NSString *eventType;
@property (nonatomic, readonly) NSArray *typeValues;

- (void).cxx_destruct;
- (unsigned long long)countWithTypeValue:(id)arg1 success:(bool)arg2;
- (void)dealloc;
- (id)domain;
- (id)eventName;
- (id)eventTracker;
- (id)eventType;
- (void)incrementCountByNumber:(unsigned long long)arg1 typeValue:(id)arg2 success:(bool)arg3;
- (unsigned long long)indexOfTypeValue:(id)arg1 success:(bool)arg2;
- (id)initWithCollectionName:(id)arg1 eventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4 hasResult:(bool)arg5;
- (id)initWithCollectionName:(id)arg1 eventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4 hasResult:(bool)arg5 scalar:(bool)arg6;
- (id)typeValues;

@end
