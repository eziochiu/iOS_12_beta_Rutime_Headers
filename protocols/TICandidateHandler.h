/* made by EzioChiu.
 */

@protocol TICandidateHandler

@required

- (bool)asynchronous;
- (void)close;
- (void)open;
- (void)pushCandidates:(TIAutocorrectionList *)arg1;

@end
