/* made by EzioChiu.
 */

@protocol SBLockScreenPluginViewController <NSObject>

@required

- (bool)pluginAnimatesAppearanceTransition:(bool)arg1;

@optional

- (BSAnimationSettings *)pluginAnimateAppearanceTransition:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
