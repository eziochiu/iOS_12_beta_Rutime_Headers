/* made by EzioChiu.
 */

@protocol SecureChannelService

@required

- (void)callToActionForURL:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CallToAction *, NSError *, void*
- (void)runApproverFlowForURL:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end
