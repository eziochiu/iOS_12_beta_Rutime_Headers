/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIMediaEntityType : NSObject <NSCopying> {
    unsigned long long  _mediaCategoryType;
    unsigned long long  _mediaCollectionType;
    bool  _rental;
    unsigned long long  _subtype;
}

@property (nonatomic) unsigned long long mediaCategoryType;
@property (nonatomic) unsigned long long mediaCollectionType;
@property (getter=isRental, nonatomic) bool rental;
@property (nonatomic) unsigned long long subtype;

+ (id)episode;
+ (id)homeVideo;
+ (id)movie;
+ (id)movieRental;
+ (id)season;
+ (id)show;

- (id)_initWithMediaCollectionType:(unsigned long long)arg1 mediaCategoryType:(unsigned long long)arg2;
- (id)_initWithMediaItemCategoryType:(unsigned long long)arg1 isRental:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isRental;
- (unsigned long long)mediaCategoryType;
- (unsigned long long)mediaCollectionType;
- (void)setMediaCategoryType:(unsigned long long)arg1;
- (void)setMediaCollectionType:(unsigned long long)arg1;
- (void)setRental:(bool)arg1;
- (void)setSubtype:(unsigned long long)arg1;
- (unsigned long long)subtype;

@end
