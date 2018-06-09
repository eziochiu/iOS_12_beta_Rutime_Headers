/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLColorSpace : NSManagedObject <PLColorSpaceIdentity>

@property (nonatomic, copy) NSString *colorSpaceName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *resources;
@property (readonly) Class superclass;

+ (id)colorSpaceFromName:(id)arg1 createIfMissing:(bool)arg2 context:(id)arg3;
+ (id)commonColorSpace_displaySpace_inContext:(id)arg1;
+ (id)commonColorSpace_sRGB_inContext:(id)arg1;
+ (id)commonColorSpace_unspecified_inContext:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;

- (bool)supportsCloudUpload;

@end
