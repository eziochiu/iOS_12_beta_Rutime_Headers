/* made by EzioChiu.
 */

@protocol TIMultilingualPreferenceProviding <NSObject>

@required

- (TIInputMode *)preferredSecondaryInputMode;
- (NSArray *)userEnabledInputModes;

@end
