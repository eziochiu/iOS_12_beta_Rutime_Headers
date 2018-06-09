/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDMutablePerfMetric : _CDPerfMetric {
    struct XSPerfCollection { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; struct XSPerfCounter {} *x6; struct XSPerfMetric {} *x7; struct XSPerfString {} *x8; char *x9; } * _stats;
}

- (double)averageElapsedTime;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (id)elapsedTimeHistogram;
- (unsigned long long)errorCount;
- (id)initWithName:(id)arg1 string:(id)arg2 family:(id)arg3;
- (double)lastElapsedTime;
- (unsigned long long)lastResultCount;
- (id)lastUpdate;
- (double)maximumElapsedTime;
- (double)minimumElapsedTime;

@end
