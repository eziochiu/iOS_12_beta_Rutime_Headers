/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKPrideListing : NSObject <NSCopying, NTKAVListing> {
    CLKDevice * _device;
    NSString * _filename;
    UIImage * _image;
    NSString * _name;
    NSArray * _nextListings;
    NSSet * _tags;
    CLKVideo * _video;
    UIImage * image;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, retain) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CLKVideo *video;

+ (id)listingForDevice:(id)arg1 withFilename:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)discardAssets;
- (bool)hasTag:(id)arg1;
- (id)image;
- (id)initForDevice:(id)arg1 withFilename:(id)arg2;
- (id)name;
- (id)randomNextListing;
- (void)setName:(id)arg1;
- (void)setNextListings:(id)arg1;
- (void)setTags:(id)arg1;
- (bool)snapshotDiffers:(id)arg1;
- (id)video;

@end
