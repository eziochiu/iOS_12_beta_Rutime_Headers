/* made by EzioChiu.
 */

@protocol AVTGroupDialDelegate <NSObject>

@required

- (void)groupDial:(AVTGroupDial *)arg1 didDeselectGroupAtIndex:(long long)arg2;
- (void)groupDial:(AVTGroupDial *)arg1 didSelectGroupAtIndex:(long long)arg2 tapped:(bool)arg3;

@end
