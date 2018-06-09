/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSlideshowMediaItem : NSObject {
    MPMediaItem * _mediaItem;
    OKProducerPreset * _preset;
    long long  _type;
}

@property (nonatomic, readonly) NSURL *audioURL;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (id)mediaItemForType:(long long)arg1 uniqueIdentifier:(id)arg2;
+ (id)mediaItemsForOKThemes;

- (void).cxx_destruct;
- (id)_initWithType:(long long)arg1;
- (id)audioURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWitMediaItem:(id)arg1;
- (id)initWitPreset:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedName;
- (long long)type;
- (id)uniqueIdentifier;

@end
