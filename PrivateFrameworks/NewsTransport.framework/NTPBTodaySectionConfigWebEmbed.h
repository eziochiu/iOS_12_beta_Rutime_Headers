/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTodaySectionConfigWebEmbed : PBCodable <NSCopying> {
    NSMutableArray * _embedFonts;
    struct { 
        unsigned int preferredSlotAllocation : 1; 
    }  _has;
    unsigned long long  _preferredSlotAllocation;
    NSString * _urlString;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, retain) NSMutableArray *embedFonts;
@property (nonatomic) bool hasPreferredSlotAllocation;
@property (nonatomic, readonly) bool hasUrlString;
@property (nonatomic) unsigned long long preferredSlotAllocation;
@property (nonatomic, retain) NSString *urlString;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

+ (Class)embedFontsType;

- (void)addEmbedFonts:(id)arg1;
- (void)clearEmbedFonts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)embedFonts;
- (id)embedFontsAtIndex:(unsigned long long)arg1;
- (unsigned long long)embedFontsCount;
- (bool)hasPreferredSlotAllocation;
- (bool)hasUrlString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)preferredSlotAllocation;
- (bool)readFrom:(id)arg1;
- (void)setEmbedFonts:(id)arg1;
- (void)setHasPreferredSlotAllocation:(bool)arg1;
- (void)setPreferredSlotAllocation:(unsigned long long)arg1;
- (void)setUrlString:(id)arg1;
- (id)urlString;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

- (id)URL;
- (id)identifier;
- (unsigned long long)itemType;

@end
