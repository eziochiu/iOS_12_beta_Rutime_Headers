/* made by EzioChiu.
 */

@protocol TSDErrorPresenter <NSObject>

@required

- (void)presentError:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)presentErrors:(void *)arg1 withLocalizedDescription:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
