/* made by EzioChiu.
 */

@protocol IKJSDOMXPathEvaluator <JSExport>

@required

- (IKDOMXPathExpression *)createExpression:(NSString *)arg1 :(JSValue *)arg2;
- (id)evaluate:(NSString *)arg1 :(IKDOMNode *)arg2 :(JSValue *)arg3 :(long long)arg4 :(id)arg5;

@end
