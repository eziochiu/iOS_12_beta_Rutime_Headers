/* made by EzioChiu.
 */

@protocol MusicMediaPickerDelegate <NSObject>

@optional

- (void)mediaPickerNavigationController:(MusicMediaPickerNavigationController *)arg1 didFinishWithSelectedEntities:(NSArray *)arg2;

@end
