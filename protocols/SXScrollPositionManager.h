/* made by EzioChiu.
 */

@protocol SXScrollPositionManager <SXScrollPositionRestoring>

@required

- (<SXScrollPositionRestoring> *)scrollPositionRestoring;
- (void)setScrollPositionRestoring:(id <SXScrollPositionRestoring>)arg1;

@end
