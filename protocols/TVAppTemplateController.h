/* made by EzioChiu.
 */

@protocol TVAppTemplateController <NSObject>

@optional

- (void)loadFromViewController:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, void*
- (void)overrideVisualEffectDisablementNeeded:(bool*)arg1;
- (bool)supportsIdleModeVisualEffects;

@end
