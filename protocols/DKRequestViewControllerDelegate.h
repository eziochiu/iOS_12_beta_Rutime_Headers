/* made by EzioChiu.
 */

@protocol DKRequestViewControllerDelegate <NSObject>

@required

- (void)request:(void *)arg1 dismissViewController:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: <DKRequest> *, UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)request:(void *)arg1 presentViewController:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: <DKRequest> *, UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
