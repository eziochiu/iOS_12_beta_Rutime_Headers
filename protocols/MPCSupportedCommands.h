/* made by EzioChiu.
 */

@protocol MPCSupportedCommands <NSObject>

@required

- (struct _MRMediaRemoteCommandInfo { }*)commandInfoForCommand:(unsigned int)arg1;

@end
