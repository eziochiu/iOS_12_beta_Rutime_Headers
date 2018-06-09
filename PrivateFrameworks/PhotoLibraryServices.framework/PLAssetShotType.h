/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetShotType : NSObject {
    long long  _captureFlags;
    NSArray * _devices;
    NSString * _name;
    long long  _procFlags;
    long long  _type;
}

@property (nonatomic) long long captureFlags;
@property (nonatomic, retain) NSArray *devices;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long procFlags;
@property (nonatomic) long long type;

+ (id)allShotTypes;

- (void).cxx_destruct;
- (long long)captureFlags;
- (id)devices;
- (id)initWithType:(long long)arg1 captureFlags:(long long)arg2 procFlags:(long long)arg3 devices:(id)arg4 name:(id)arg5;
- (id)name;
- (long long)procFlags;
- (void)setCaptureFlags:(long long)arg1;
- (void)setDevices:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProcFlags:(long long)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
