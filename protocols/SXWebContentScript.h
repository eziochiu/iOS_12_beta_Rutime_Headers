/* made by EzioChiu.
 */

@protocol SXWebContentScript <NSObject>

@required

- (NSString *)executableScript;
- (NSString *)identifier;
- (bool)queueable;
- (WKUserScript *)userScript;

@end
