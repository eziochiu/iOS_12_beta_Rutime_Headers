/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImageRequestResource : NSObject <PLResourceIdentity> {
    unsigned int  _orientation;
    unsigned int  _recipeID;
    short  _resourceType;
    <PLUniformTypeIdentifierIdentity> * _uniformTypeIdentifierID;
    long long  _unorientedHeight;
    long long  _unorientedWidth;
    short  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int orientation;
@property (nonatomic, readonly) unsigned int recipeID;
@property (nonatomic, readonly) short resourceType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PLUniformTypeIdentifierIdentity> *uniformTypeIdentifierID;
@property (nonatomic, readonly) long long unorientedHeight;
@property (nonatomic, readonly) long long unorientedWidth;
@property (nonatomic, readonly) short version;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPlistDictionary:(id)arg1;
- (id)initWithResource:(id)arg1;
- (unsigned int)orientation;
- (unsigned int)recipeID;
- (short)resourceType;
- (id)uniformTypeIdentifierID;
- (long long)unorientedHeight;
- (long long)unorientedWidth;
- (short)version;

@end
