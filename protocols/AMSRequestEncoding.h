/* made by EzioChiu.
 */

@protocol AMSRequestEncoding <NSObject>

@required

- (NSMutableURLRequest *)requestByEncodingRequest:(NSURLRequest *)arg1 parameters:(id)arg2 error:(id*)arg3;

@end
