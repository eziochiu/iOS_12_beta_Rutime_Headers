/* made by EzioChiu.
 */

@protocol AVWeakObservable <NSObject>

@required

- (void)addCallbackToCancelDuringDeallocation:(id <AVCallbackCancellation>)arg1;

@end
