/* made by EzioChiu.
 */

@protocol MFActivityCondition <NSObject>

@required

- (MFObservable *)conditionsObservable;
- (bool)isSatisfied;

@end
