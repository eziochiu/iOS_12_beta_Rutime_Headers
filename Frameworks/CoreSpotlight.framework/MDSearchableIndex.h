/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface MDSearchableIndex : CSSearchableIndex

+ (id)sharedInstance;

- (void)indexSearchableItems:(id)arg1 stateInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)performIndexJob:(id)arg1;
- (void)performIndexJob:(id)arg1 acknowledgementHandler:(id /* block */)arg2;

@end
