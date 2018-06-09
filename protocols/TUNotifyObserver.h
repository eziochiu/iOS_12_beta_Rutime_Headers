/* made by EzioChiu.
 */

@protocol TUNotifyObserver <NSObject>

@required

- (void)beginObserving;
- (id /* block */)callback:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)endObserving;
- (bool)isObserving;
- (void)setCallback:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (unsigned long long)state;

@end
