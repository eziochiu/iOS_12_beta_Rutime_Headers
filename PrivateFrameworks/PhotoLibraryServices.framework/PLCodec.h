/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCodec : NSManagedObject <PLCodecIdentity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *fourCharCodeName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *resources;
@property (readonly) Class superclass;

+ (id)_stringFrom4CharCode:(unsigned int)arg1;
+ (id)codecFromFourCharCodeName:(id)arg1 createIfMissing:(bool)arg2 context:(id)arg3;
+ (id)commonCodec_H264_inContext:(id)arg1;
+ (id)commonCodec_HEVC_inContext:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;

- (bool)supportsCloudUpload;

@end
