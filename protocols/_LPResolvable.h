/* made by EzioChiu.
 */

@protocol _LPResolvable <NSObject>

@required

- (NSURL *)URL;
- (NSString *)accessibilityText;
- (bool)isValidMIMEType:(NSString *)arg1;
- (long long)maximumBytes;
- (<_LPResolver> *)tryToResolveWithWebViewForProcessSharing:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 23: WKWebView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, void*, void*, unsigned long, void*, void*, void*, short, out long, void, void*, unsigned int, long, void*, void*, void*, void*

@end
