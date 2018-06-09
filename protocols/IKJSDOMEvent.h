/* made by EzioChiu.
 */

@protocol IKJSDOMEvent <JSExport>

@required

- (bool)bubbles;
- (bool)cancelable;
- (IKDOMNode *)currentTarget;
- (bool)defaultPrevented;
- (long long)eventPhase;
- (id)initWithType:(NSString *)arg1 eventInit:(NSDictionary *)arg2;
- (void)preventDefault;
- (void)stopImmediatePropagation;
- (void)stopPropagation;
- (IKDOMNode *)target;
- (NSDate *)timeStamp;
- (NSString *)type;

@end
