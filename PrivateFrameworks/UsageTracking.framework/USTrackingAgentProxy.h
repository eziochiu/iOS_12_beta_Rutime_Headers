/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
 */

@interface USTrackingAgentProxy : NSObject

+ (id)newConnection;
+ (id)newInterface;
+ (void)proxyFromConnection:(id)arg1 withRetryCount:(unsigned long long)arg2 proxyHandler:(id /* block */)arg3;

@end
