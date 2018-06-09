/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

@interface PCSAnalytics : SFAnalytics

+ (id)databasePath;
+ (id)logger;

- (id)dateOfLastSuccessForEvent:(struct NSString { Class x1; }*)arg1;
- (void)logRecoverableError:(id)arg1 forEvent:(struct NSString { Class x1; }*)arg2 withAttributes:(id)arg3;
- (void)logSuccessForEvent:(struct NSString { Class x1; }*)arg1;
- (void)logUnrecoverableError:(id)arg1 forEvent:(struct NSString { Class x1; }*)arg2 withAttributes:(id)arg3;
- (void)noteEvent:(struct NSString { Class x1; }*)arg1;

@end
