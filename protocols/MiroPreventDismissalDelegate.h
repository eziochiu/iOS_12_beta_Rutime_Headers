/* made by EzioChiu.
 */

@protocol MiroPreventDismissalDelegate <NSObject>

@required

- (bool)preventDismissalByPhotosIfPossible;
- (void)setPreventDismissalByPhotosIfPossible:(bool)arg1;

@end
