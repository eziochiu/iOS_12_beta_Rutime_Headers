/* made by EzioChiu.
 */

@protocol SAConditionallyMutatingClientBoundCommand <SAClientBoundCommand>

@required

- (bool)mutatingCommand;
- (void)setMutatingCommand:(bool)arg1;

@end
