/* made by EzioChiu.
 */

@protocol TUCallContainerPrivate <TUCallContainer>

@required

- (NSArray *)_allCalls;
- (TUCall *)callPassingTest:(void *)arg1 sortedUsingComparator:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, TUCall *, void*, id /* block */, void*, long long, id /* block */, id, void*
- (TUCall *)conferenceCall;
- (TUCall *)displayedCall;
- (bool)existingCallsHaveMultipleProviders;
- (TUCall *)frontmostAudioOrVideoCall;
- (TUCall *)frontmostCall;

@end
