/* made by EzioChiu.
 */

@protocol ACDOAuthSignerProtocol <NSObject>

@required

- (void)setClientBundleID:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setShouldIncludeAppIdInRequest:(bool)arg1;
- (void)signURLRequest:(void *)arg1 withAccount:(void *)arg2 applicationID:(void *)arg3 timestamp:(void *)arg4 handler:(void *)arg5; // needs 5 arg types, found 11: NSURLRequest *, ACAccount *, NSString *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURLRequest *, NSError *, void*
- (void)signURLRequest:(void *)arg1 withAccount:(void *)arg2 callingPID:(void *)arg3 timestamp:(void *)arg4 handler:(void *)arg5; // needs 5 arg types, found 11: NSURLRequest *, ACAccount *, NSNumber *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURLRequest *, NSError *, void*

@end
