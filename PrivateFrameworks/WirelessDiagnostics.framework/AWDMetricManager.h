/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
 */

@interface AWDMetricManager : NSObject

+ (void)postMetricWithId:(unsigned long long)arg1;
+ (void)postMetricWithId:(unsigned long long)arg1 boolValue:(bool)arg2;
+ (void)postMetricWithId:(unsigned long long)arg1 integerValue:(long long)arg2;
+ (void)postMetricWithId:(unsigned long long)arg1 numberValue:(id)arg2;
+ (void)postMetricWithId:(unsigned long long)arg1 object:(id)arg2;
+ (void)postMetricWithId:(unsigned long long)arg1 stringValue:(id)arg2;
+ (void)postMetricWithId:(unsigned long long)arg1 unsignedIntegerValue:(unsigned long long)arg2;

@end
