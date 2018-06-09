/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface VEiOSSharedObject : NSObject

+ (void)purgeSharedInstance;
+ (id)sharedInstance;
+ (bool)sharedInstanceExists;

@end