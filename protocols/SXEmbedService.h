/* made by EzioChiu.
 */

@protocol SXEmbedService <NSObject>

@required

- (<SXEmbedType> *)embedConfigurationForType:(NSString *)arg1;
- (void)fetchHTMLFromOEmbedURL:(void *)arg1 embedType:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 9: NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*

@end
