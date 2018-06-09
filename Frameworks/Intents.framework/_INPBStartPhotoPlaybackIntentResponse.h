/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBStartPhotoPlaybackIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBStartPhotoPlaybackIntentResponse> {
    NSString * _albumName;
    INCodableAttribute * _associatedCodableAttribute;
    struct { 
        unsigned int searchResultsCount : 1; 
    }  _has;
    _INPBLocation * _locationCreated;
    int  _searchResultsCount;
}

@property (nonatomic, copy) NSString *albumName;
@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAlbumName;
@property (nonatomic, readonly) bool hasLocationCreated;
@property (nonatomic) bool hasSearchResultsCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBLocation *locationCreated;
@property (nonatomic) int searchResultsCount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)albumName;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasAlbumName;
- (bool)hasLocationCreated;
- (bool)hasSearchResultsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locationCreated;
- (bool)readFrom:(id)arg1;
- (int)searchResultsCount;
- (void)setAlbumName:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setHasSearchResultsCount:(bool)arg1;
- (void)setLocationCreated:(id)arg1;
- (void)setSearchResultsCount:(int)arg1;
- (void)writeTo:(id)arg1;

@end
