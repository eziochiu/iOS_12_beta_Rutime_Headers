/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoEditAdjustmentsVersion : NSObject {
    unsigned long long  _majorVersion;
    unsigned long long  _minorVersion;
    NSString * _platform;
}

@property (nonatomic, readonly) unsigned long long majorVersion;
@property (nonatomic, readonly) unsigned long long minorVersion;
@property (nonatomic, readonly, copy) NSString *platform;
@property (nonatomic, readonly) NSString *string;

+ (id)versionFromString:(id)arg1;
+ (id)versionWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 platform:(id)arg3;

- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 platform:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAdjustmentVersion:(id)arg1;
- (unsigned long long)majorVersion;
- (unsigned long long)minorVersion;
- (id)platform;
- (id)string;

@end
