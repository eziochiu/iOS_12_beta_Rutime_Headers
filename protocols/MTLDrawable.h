/* made by EzioChiu.
 */

@protocol MTLDrawable <NSObject>

@required

- (void)addPresentedHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLDrawable> *, void*
- (unsigned long long)drawableID;
- (void)present;
- (void)presentAfterMinimumDuration:(double)arg1;
- (void)presentAtTime:(double)arg1;
- (double)presentedTime;

@end
