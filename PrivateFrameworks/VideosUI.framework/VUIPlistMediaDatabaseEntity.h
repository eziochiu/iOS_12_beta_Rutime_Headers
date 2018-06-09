/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIPlistMediaDatabaseEntity : NSObject <NSCopying> {
    NSString * _contentDescription;
    NSURL * _coverArtURL;
    NSString * _genreTitle;
    NSString * _identifier;
    NSString * _title;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *contentDescription;
@property (nonatomic, copy) NSURL *coverArtURL;
@property (nonatomic, copy) NSString *genreTitle;
@property (nonatomic, copy) NSString *identifier;
@property (getter=isLocal, nonatomic, readonly, copy) NSNumber *local;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)contentDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coverArtURL;
- (id)description;
- (id)dictionaryRepresentation;
- (id)genreTitle;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)isLocal;
- (void)setContentDescription:(id)arg1;
- (void)setCoverArtURL:(id)arg1;
- (void)setGenreTitle:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)title;
- (unsigned long long)type;

@end
