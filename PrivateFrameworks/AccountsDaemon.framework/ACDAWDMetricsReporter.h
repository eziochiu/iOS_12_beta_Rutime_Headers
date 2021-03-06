/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDAWDMetricsReporter : NSObject

+ (void)landmarkEventForAccountType:(id)arg1 count:(unsigned int)arg2;
+ (void)renewCredentialsBeginForAccountType:(id)arg1 avoidUI:(bool)arg2 shouldForce:(bool)arg3 requestedBy:(id)arg4;
+ (void)renewCredentialsEndForAccountType:(id)arg1 result:(unsigned int)arg2;

@end
