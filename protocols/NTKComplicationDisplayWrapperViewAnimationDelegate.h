/* made by EzioChiu.
 */

@protocol NTKComplicationDisplayWrapperViewAnimationDelegate <NSObject>

@required

- (bool)complicationDisplayWrapperView:(NTKComplicationDisplayWrapperView *)arg1 shouldStartCustomDataAnimationFromEarlierView:(UIView *)arg2 laterView:(UIView *)arg3 isForward:(bool)arg4;
- (void)complicationDisplayWrapperView:(void *)arg1 startCustomDataAnimationFromEarlierView:(void *)arg2 laterView:(void *)arg3 isForward:(void *)arg4 completionBlock:(void *)arg5; // needs 5 arg types, found 9: NTKComplicationDisplayWrapperView *, UIView *, UIView *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
