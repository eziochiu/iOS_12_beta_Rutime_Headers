/* made by EzioChiu.
 */

@protocol AMSURLProtocolDialogHandling <NSObject>

@required

- (NSDictionary *)dialogDictionary;
- (AMSURLAction *)runDialog;

@end
