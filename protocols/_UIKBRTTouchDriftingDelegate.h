/* made by EzioChiu.
 */

@protocol _UIKBRTTouchDriftingDelegate

@required

- (unsigned long long)_uikbrtTouchDrifting:(_UIKBRTTouchDrifting *)arg1 fingerIDFortouchIdentifier:(id)arg2;
- (struct CGPoint { double x1; double x2; })_uikbrtTouchDrifting:(_UIKBRTTouchDrifting *)arg1 touchCenterForFingerID:(unsigned long long)arg2;
- (NSSet *)_uikbrtTouchDrifting:(_UIKBRTTouchDrifting *)arg1 touchIdentifiersForFingerID:(unsigned long long)arg2;
- (void)_uikbrtTouchDriftingStateChanged:(_UIKBRTTouchDrifting *)arg1;

@end
