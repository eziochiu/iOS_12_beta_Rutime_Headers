/* made by EzioChiu.
 */

@protocol MTMaterialSettingsObservable <NSObject>

@required

- (void)addKeyObserver:(id <MTMaterialSettingsObserving>)arg1;
- (void)removeKeyObserver:(id <MTMaterialSettingsObserving>)arg1;

@end
