/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPShieldIndex : PBCodable <NSCopying> {
    NSMutableArray * _entries;
    NSMutableArray * _textEntries;
    NSMutableArray * _variantEntries;
}

@property (nonatomic, retain) NSMutableArray *entries;
@property (nonatomic, retain) NSMutableArray *textEntries;
@property (nonatomic, retain) NSMutableArray *variantEntries;

- (void)addEntries:(id)arg1;
- (void)addTextEntries:(id)arg1;
- (void)addVariantEntries:(id)arg1;
- (id)artworkIdentifierForShieldType:(long long)arg1 textSpecificIdentifiers:(id*)arg2 variant:(unsigned long long)arg3;
- (void)clearEntries;
- (void)clearTextEntries;
- (void)clearVariantEntries;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultArtworkIdentifierForFeatureType:(int)arg1 variant:(unsigned long long)arg2;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entries;
- (id)entriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entriesCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntries:(id)arg1;
- (void)setTextEntries:(id)arg1;
- (void)setVariantEntries:(id)arg1;
- (id)textEntries;
- (id)textEntriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)textEntriesCount;
- (id)variantEntries;
- (id)variantEntriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)variantEntriesCount;
- (void)writeTo:(id)arg1;

@end
