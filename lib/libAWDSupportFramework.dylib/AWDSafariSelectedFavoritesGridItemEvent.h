/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSafariSelectedFavoritesGridItemEvent : PBCodable <NSCopying> {
    int  _displayContext;
    struct { 
        unsigned int itemsPerRow : 1; 
        unsigned int row : 1; 
        unsigned int sectionIndex : 1; 
        unsigned int timestamp : 1; 
        unsigned int displayContext : 1; 
        unsigned int section : 1; 
        unsigned int type : 1; 
    }  _has;
    unsigned long long  _itemsPerRow;
    unsigned long long  _row;
    int  _section;
    unsigned long long  _sectionIndex;
    unsigned long long  _timestamp;
    int  _type;
}

@property (nonatomic) int displayContext;
@property (nonatomic) bool hasDisplayContext;
@property (nonatomic) bool hasItemsPerRow;
@property (nonatomic) bool hasRow;
@property (nonatomic) bool hasSection;
@property (nonatomic) bool hasSectionIndex;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasType;
@property (nonatomic) unsigned long long itemsPerRow;
@property (nonatomic) unsigned long long row;
@property (nonatomic) int section;
@property (nonatomic) unsigned long long sectionIndex;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int type;

- (int)StringAsDisplayContext:(id)arg1;
- (int)StringAsSection:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)displayContext;
- (id)displayContextAsString:(int)arg1;
- (bool)hasDisplayContext;
- (bool)hasItemsPerRow;
- (bool)hasRow;
- (bool)hasSection;
- (bool)hasSectionIndex;
- (bool)hasTimestamp;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)itemsPerRow;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)row;
- (int)section;
- (id)sectionAsString:(int)arg1;
- (unsigned long long)sectionIndex;
- (void)setDisplayContext:(int)arg1;
- (void)setHasDisplayContext:(bool)arg1;
- (void)setHasItemsPerRow:(bool)arg1;
- (void)setHasRow:(bool)arg1;
- (void)setHasSection:(bool)arg1;
- (void)setHasSectionIndex:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setItemsPerRow:(unsigned long long)arg1;
- (void)setRow:(unsigned long long)arg1;
- (void)setSection:(int)arg1;
- (void)setSectionIndex:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(int)arg1;
- (unsigned long long)timestamp;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
