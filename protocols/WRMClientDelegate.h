/* made by EzioChiu.
 */

@protocol WRMClientDelegate

@required

- (void)setWRMMetricConfig:(struct { unsigned long long x1; }*)arg1;
- (void)setWRMNotification:(struct { int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; }*)arg1;

@end
