/* made by EzioChiu.
 */

@protocol MTLDrawableSPI <MTLDrawable>

@required

- (void)addPresentScheduledHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTLDrawable> *, void*
- (unsigned long long)status;

@end
