/* made by EzioChiu.
 */

@protocol _HKAuthorizationPresentationController <NSObject>

@required

- (void)cancelPresentation;
- (void)presentWithRequestRecord:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKAuthorizationRequestRecord *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
