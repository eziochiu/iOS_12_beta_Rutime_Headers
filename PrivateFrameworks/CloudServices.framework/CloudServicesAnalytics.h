/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
 */

@interface CloudServicesAnalytics : SFAnalytics

+ (id)databasePath;
+ (id)logger;

- (void)logSuccessForEvent:(id)arg1;
- (void)logUnrecoverableError:(id)arg1 forEvent:(id)arg2 withAttributes:(id)arg3;

@end
