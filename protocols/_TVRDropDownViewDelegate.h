/* made by EzioChiu.
 */

@protocol _TVRDropDownViewDelegate <NSObject>

@optional

- (void)dropdownView:(_TVRDropDownView *)arg1 didUpdateState:(bool)arg2;
- (void)dropdownView:(_TVRDropDownView *)arg1 selectedDevice:(TVRCDevice *)arg2;

@end
