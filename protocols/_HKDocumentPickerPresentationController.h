/* made by EzioChiu.
 */

@protocol _HKDocumentPickerPresentationController <NSObject>

@required

- (void)cancelPresentation;
- (void)presentWithSession:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKObjectAuthorizationPromptSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end