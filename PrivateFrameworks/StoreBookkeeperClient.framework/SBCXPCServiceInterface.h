/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
 */

@interface SBCXPCServiceInterface : NSObject

+ (id)newListener;
+ (id)serviceClientInterface;
+ (id)serviceInterface;
+ (id)serviceName;

- (id)newServiceConnection;

@end
