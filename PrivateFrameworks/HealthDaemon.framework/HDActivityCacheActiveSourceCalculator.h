/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActivityCacheActiveSourceCalculator : NSObject {
    struct vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> > { 
        struct HDActivityCacheActiveSource {} *__begin_; 
        struct HDActivityCacheActiveSource {} *__end_; 
        struct __compressed_pair<HDActivityCacheActiveSource *, std::__1::allocator<HDActivityCacheActiveSource> > { 
            struct HDActivityCacheActiveSource {} *__value_; 
        } __end_cap_; 
    }  _activationLogEntries;
    struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > { 
        struct HDActivityCacheStatisticsBuilderWorkoutSample {} *__begin_; 
        struct HDActivityCacheStatisticsBuilderWorkoutSample {} *__end_; 
        struct __compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > { 
            struct HDActivityCacheStatisticsBuilderWorkoutSample {} *__value_; 
        } __end_cap_; 
    }  _workouts;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct HDActivityCacheActiveSource { double x1; long long x2; struct vector<long long, std::__1::allocator<long long> > { long long *x_3_1_1; long long *x_3_1_2; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x_3_2_1; } x_3_1_3; } x3; })_baseActiveSource;
- (struct _HDActivityCacheActiveSourceCalculatorSourceEvent { double x1; long long x2; long long x3; })_baseSourceEvent;
- (struct vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> > { struct HDActivityCacheActiveSource {} *x1; struct HDActivityCacheActiveSource {} *x2; struct __compressed_pair<HDActivityCacheActiveSource *, std::__1::allocator<HDActivityCacheActiveSource> > { struct HDActivityCacheActiveSource {} *x_3_1_1; } x3; })createActiveSourceLog;
- (void)setActivationLogEntries:(struct vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> > { struct HDActivityCacheActiveSource {} *x1; struct HDActivityCacheActiveSource {} *x2; struct __compressed_pair<HDActivityCacheActiveSource *, std::__1::allocator<HDActivityCacheActiveSource> > { struct HDActivityCacheActiveSource {} *x_3_1_1; } x3; }*)arg1;
- (void)setWorkouts:(struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > { struct HDActivityCacheStatisticsBuilderWorkoutSample {} *x1; struct HDActivityCacheStatisticsBuilderWorkoutSample {} *x2; struct __compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > { struct HDActivityCacheStatisticsBuilderWorkoutSample {} *x_3_1_1; } x3; }*)arg1;

@end
