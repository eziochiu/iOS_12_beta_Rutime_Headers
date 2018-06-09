/* made by EzioChiu.
 */

@protocol SXVideoAdStateReporting <NSObject>

@required

- (void)failWithError:(NSError *)arg1;
- (void)finish;
- (void)learnMore;
- (void)pause;
- (void)play;
- (void)skip;

@end
