/* made by EzioChiu.
 */

@protocol _UIFocusEnvironmentPrivate <UIFocusEnvironment>

@optional

- (bool)_isEligibleForFocusInteraction;
- (NSArray *)_linearFocusMovementSequences;
- (<UIFocusEnvironment> *)_parentFocusEnvironment;
- (long long)_preferredFocusMovementStyle;
- (bool)_reversesLinearFocusWrapping;
- (void)_setNeedsNonDeferredFocusUpdate;

@end
