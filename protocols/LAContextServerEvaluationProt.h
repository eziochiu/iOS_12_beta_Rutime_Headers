/* made by EzioChiu.
 */

@protocol LAContextServerEvaluationProt

@required

- (void)checkCredentialSatisfied:(void *)arg1 policy:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)evaluateACL:(void *)arg1 operation:(void *)arg2 options:(void *)arg3 uiDelegate:(void *)arg4 originator:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 12: NSData *, id, NSDictionary *, <LAUIDelegate> *, <LAOriginatorProt> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)evaluatePolicy:(void *)arg1 options:(void *)arg2 uiDelegate:(void *)arg3 originator:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: long long, NSDictionary *, <LAUIDelegate> *, <LAOriginatorProt> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)isCredentialSet:(void *)arg1 originator:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: long long, <LAOriginatorProt> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)resetEvent:(void *)arg1 originator:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: long long, <LAOriginatorProt> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)retryEvent:(void *)arg1 originator:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: long long, <LAOriginatorProt> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setCredential:(void *)arg1 type:(void *)arg2 originator:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSData *, long long, <LAOriginatorProt> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
