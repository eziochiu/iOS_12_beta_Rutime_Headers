/* made by EzioChiu.
 */

@protocol PLUniformTypeIdentifierIdentity <NSObject>

@required

- (bool)conformsToImage;
- (bool)conformsToMovie;
- (NSString *)identifier;
- (bool)isPrimaryFormat;

@end
