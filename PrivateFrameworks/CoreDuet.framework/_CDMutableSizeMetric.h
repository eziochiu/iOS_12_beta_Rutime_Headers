/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDMutableSizeMetric : _CDSizeMetric {
    struct XSPerfCollection { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; struct XSPerfCounter {} *x6; struct XSPerfMetric {} *x7; struct XSPerfString {} *x8; char *x9; } * _stats;
}

- (double)averageSize;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (unsigned long long)firstSize;
- (id)firstUpdate;
- (id)initWithName:(id)arg1 string:(id)arg2 scale:(unsigned long long)arg3 family:(id)arg4;
- (unsigned long long)lastSize;
- (id)lastUpdate;
- (unsigned long long)maximumSize;
- (unsigned long long)minimumSize;
- (id)sizeHistogram;

@end
