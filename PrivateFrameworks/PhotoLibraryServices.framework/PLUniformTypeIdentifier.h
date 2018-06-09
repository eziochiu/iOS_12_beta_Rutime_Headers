/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLUniformTypeIdentifier : NSManagedObject <PLUniformTypeIdentifierIdentity> {
    NSNumber * _backingConformsToImage;
    NSNumber * _backingConformsToMovie;
}

@property (nonatomic, readonly) bool conformsToAudio;
@property (nonatomic) bool conformsToImage;
@property (nonatomic) bool conformsToMovie;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (getter=isPrimaryFormat, nonatomic, readonly) bool primaryFormat;
@property (nonatomic, retain) NSSet *resources;
@property (readonly) Class superclass;

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)jpegUniformTypeIdentifierInContext:(id)arg1;
+ (id)uniformTypeIdentifierFromString:(id)arg1 createIfMissing:(bool)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (bool)conformsToAudio;
- (bool)conformsToImage;
- (bool)conformsToMovie;
- (bool)isPrimaryFormat;
- (void)setConformsToImage:(bool)arg1;
- (void)setConformsToMovie:(bool)arg1;
- (bool)supportsCloudUpload;

@end
