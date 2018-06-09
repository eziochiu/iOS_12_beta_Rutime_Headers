/* made by EzioChiu.
 */

@protocol _UIForceLevelClassifierDelegate <NSObject>

@required

- (void)_forceLevelClassifier:(_UIForceLevelClassifier *)arg1 currentForceLevelDidChange:(long long)arg2;

@optional

- (void)_forceLevelClassifier:(_UIForceLevelClassifier *)arg1 didUpdateProgress:(double)arg2 toForceLevel:(long long)arg3;
- (void)_forceLevelClassifierDidReset:(_UIForceLevelClassifier *)arg1;

@end
