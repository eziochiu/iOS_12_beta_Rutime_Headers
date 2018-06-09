/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataAggregatorConfiguration : NSObject <NSCopying> {
    bool  _hasActiveWorkout;
    bool  _hasForegroundObserver;
    double  _requestedCollectionInterval;
}

@property (nonatomic) bool hasActiveWorkout;
@property (nonatomic) bool hasForegroundObserver;
@property (nonatomic) double requestedCollectionInterval;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasActiveWorkout;
- (bool)hasForegroundObserver;
- (bool)isEqual:(id)arg1;
- (double)requestedCollectionInterval;
- (void)setHasActiveWorkout:(bool)arg1;
- (void)setHasForegroundObserver:(bool)arg1;
- (void)setRequestedCollectionInterval:(double)arg1;

@end