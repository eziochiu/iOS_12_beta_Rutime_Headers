/* made by EzioChiu.
 */

@protocol FBSProcess <NSObject>

@required

- (NSString *)bundleIdentifier;
- (int)pid;

@end
