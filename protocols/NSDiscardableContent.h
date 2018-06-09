/* made by EzioChiu.
 */

@protocol NSDiscardableContent

@required

- (bool)beginContentAccess;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (bool)isContentDiscarded;

@end
