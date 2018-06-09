/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSecureRemoteMessageFilter : HMDMessageFilter

+ (bool)isWhitelistedMessage:(id)arg1;
+ (id)logCategory;

- (bool)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3;
- (id)logIdentifier;

@end
