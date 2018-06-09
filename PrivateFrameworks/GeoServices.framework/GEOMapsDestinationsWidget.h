/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapsDestinationsWidget : PBCodable <NSCopying> {
    bool  _everExpanded;
    struct { 
        unsigned int tappedItemIndex : 1; 
        unsigned int everExpanded : 1; 
        unsigned int initiallyExpanded : 1; 
    }  _has;
    bool  _initiallyExpanded;
    NSMutableArray * _proactiveItems;
    int  _tappedItemIndex;
}

@property (nonatomic) bool everExpanded;
@property (nonatomic) bool hasEverExpanded;
@property (nonatomic) bool hasInitiallyExpanded;
@property (nonatomic) bool hasTappedItemIndex;
@property (nonatomic) bool initiallyExpanded;
@property (nonatomic, retain) NSMutableArray *proactiveItems;
@property (nonatomic) int tappedItemIndex;

+ (Class)proactiveItemType;

- (void).cxx_destruct;
- (void)addProactiveItem:(id)arg1;
- (void)clearProactiveItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)everExpanded;
- (bool)hasEverExpanded;
- (bool)hasInitiallyExpanded;
- (bool)hasTappedItemIndex;
- (unsigned long long)hash;
- (bool)initiallyExpanded;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)proactiveItemAtIndex:(unsigned long long)arg1;
- (id)proactiveItems;
- (unsigned long long)proactiveItemsCount;
- (bool)readFrom:(id)arg1;
- (void)setEverExpanded:(bool)arg1;
- (void)setHasEverExpanded:(bool)arg1;
- (void)setHasInitiallyExpanded:(bool)arg1;
- (void)setHasTappedItemIndex:(bool)arg1;
- (void)setInitiallyExpanded:(bool)arg1;
- (void)setProactiveItems:(id)arg1;
- (void)setTappedItemIndex:(int)arg1;
- (int)tappedItemIndex;
- (void)writeTo:(id)arg1;

@end
