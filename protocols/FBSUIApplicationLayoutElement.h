/* made by EzioChiu.
 */

@protocol FBSUIApplicationLayoutElement <NSObject>

@required

- (NSString *)bundleIdentifier;
- (bool)hasKeyboardFocus;
- (bool)isUIApplicationElement;

@end
