/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
 */

@interface CCSUsageMetrics : NSObject

@property (nonatomic, readonly) unsigned long long userInvocationCount;

+ (id)sharedInstance;

- (void)incrementUserInvocationCount;
- (unsigned long long)userInvocationCount;

@end