/* made by EzioChiu.
 */

@protocol MFObservable <NSObject>

@required

- (<MFCancelable> *)subscribe:(id <MFObserver>)arg1;

@end
