/* made by EzioChiu.
 */

@protocol MPCPlayerDisableModificationsCommand <MPCPlayerCommand>

@required

- (bool)isDisabled;
- (MPCPlayerCommandRequest *)setDisabled:(bool)arg1;

@end
