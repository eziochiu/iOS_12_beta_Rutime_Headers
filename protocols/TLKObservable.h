/* made by EzioChiu.
 */

@protocol TLKObservable <NSObject>

@required

- (<TLKObserver> *)observer;
- (void)setObserver:(id <TLKObserver>)arg1;

@end
