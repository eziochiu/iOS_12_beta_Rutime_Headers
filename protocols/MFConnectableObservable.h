/* made by EzioChiu.
 */

@protocol MFConnectableObservable <MFObservable>

@required

- (<MFCancelable> *)connect;

@end
