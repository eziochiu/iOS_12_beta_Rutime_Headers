/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDQuantitySampleValueEnumerator : NSObject

+ (long long)_enumerateWithEnumerator:(id)arg1 endTime:(double)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (id)_propertiesForEnumeration;
+ (id)_queryForEnumerationWithPredicate:(id)arg1 transaction:(id)arg2 orderByUUID:(bool)arg3;
+ (bool)orderedQuantityValuesForPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (bool)orderedQuantityValuesForPredicate:(id)arg1 profile:(id)arg2 expandSeries:(bool)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
+ (bool)orderedQuantityValuesForPredicate:(id)arg1 transaction:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
+ (bool)orderedQuantityValuesForPredicate:(id)arg1 transaction:(id)arg2 expandSeries:(bool)arg3 error:(id*)arg4 handler:(id /* block */)arg5;

@end
