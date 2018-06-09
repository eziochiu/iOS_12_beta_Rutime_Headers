/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSharingPredicate : NSObject {
    NSNumber * _maxSampleAge;
    NSArray * _sharedSampleTypes;
}

@property (nonatomic, copy) NSNumber *maxSampleAge;
@property (nonatomic, copy) NSArray *sharedSampleTypes;

- (void).cxx_destruct;
- (id)maxSampleAge;
- (void)setMaxSampleAge:(id)arg1;
- (void)setSharedSampleTypes:(id)arg1;
- (id)sharedSampleTypes;

@end
