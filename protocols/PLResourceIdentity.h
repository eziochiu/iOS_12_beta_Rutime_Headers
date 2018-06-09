/* made by EzioChiu.
 */

@protocol PLResourceIdentity <NSObject>

@required

- (unsigned int)orientation;
- (unsigned int)recipeID;
- (short)resourceType;
- (<PLUniformTypeIdentifierIdentity> *)uniformTypeIdentifierID;
- (long long)unorientedHeight;
- (long long)unorientedWidth;
- (short)version;

@end
