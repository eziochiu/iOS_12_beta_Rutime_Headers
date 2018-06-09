/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSPrivateIndexConnection : CSIndexConnection

+ (id)privateIndexConnectionForToken:(id)arg1;
+ (void)removePrivateIndexConnectionForToken:(id)arg1;

- (void)sendMessageAsync:(id)arg1 completion:(id /* block */)arg2;

@end
