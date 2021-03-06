/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface _MPUStackItemReuseCache : NSObject

+ (id)dequeueReusableStackItemWithIdentifier:(id)arg1;
+ (void)enqueueReusableStackItem:(id)arg1 forReuseIdentifier:(id)arg2;
+ (void)registerStackViewForReuseIdentifier:(id)arg1;
+ (void)unregisterStackViewForReuseIdentifier:(id)arg1;

@end
