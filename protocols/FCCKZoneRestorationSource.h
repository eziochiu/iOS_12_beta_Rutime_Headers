/* made by EzioChiu.
 */

@protocol FCCKZoneRestorationSource <NSObject>

@required

- (bool)canHelpRestoreZoneName:(NSString *)arg1;
- (NSArray *)recordsForRestoringZoneName:(NSString *)arg1;

@end