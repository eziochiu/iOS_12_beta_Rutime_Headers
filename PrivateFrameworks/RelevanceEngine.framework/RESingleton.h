/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RESingleton : NSObject

+ (id)_classKey;
+ (void)_decrementSingletonCache;
+ (void)_incrementSingletonCache;
+ (id)sharedInstance;

@end
