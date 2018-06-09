/* made by EzioChiu.
 */

@protocol IDSStunCandidatePairDelegate <NSObject>

@required

- (void)candidatePair:(IDSStunCandidatePair *)arg1 didReceiveSessionInfo:(NSDictionary *)arg2 success:(bool)arg3;
- (void)candidatePair:(IDSStunCandidatePair *)arg1 didReceiveStunErrorResponse:(long long)arg2 errorCode:(unsigned short)arg3;

@end
