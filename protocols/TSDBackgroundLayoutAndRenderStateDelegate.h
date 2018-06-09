/* made by EzioChiu.
 */

@protocol TSDBackgroundLayoutAndRenderStateDelegate <NSObject>

@required

- (void)backgroundLayoutAndRenderState:(TSDBackgroundLayoutAndRenderState *)arg1 performWorkInBackgroundTilingOnly:(bool)arg2;
- (bool)backgroundLayoutAndRenderState:(void *)arg1 shouldDispatchBackgroundWork:(void *)arg2; // needs 2 arg types, found 6: TSDBackgroundLayoutAndRenderState *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)backgroundLayoutAndRenderStateDidPerformBackgroundWork:(TSDBackgroundLayoutAndRenderState *)arg1;

@end
