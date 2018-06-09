/* made by EzioChiu.
 */

@protocol SXActionProvider <NSObject>

@required

- (SXAction *)actionForAddition:(SXAddition *)arg1;
- (SXAction *)actionForURL:(NSURL *)arg1;

@end
