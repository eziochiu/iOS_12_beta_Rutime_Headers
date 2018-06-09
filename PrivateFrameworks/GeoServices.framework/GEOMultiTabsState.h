/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMultiTabsState : PBCodable <NSCopying> {
    unsigned int  _currentTabIndex;
    struct { 
        unsigned int currentTabIndex : 1; 
        unsigned int numberOfTabsOpen : 1; 
    }  _has;
    unsigned int  _numberOfTabsOpen;
}

@property (nonatomic) unsigned int currentTabIndex;
@property (nonatomic) bool hasCurrentTabIndex;
@property (nonatomic) bool hasNumberOfTabsOpen;
@property (nonatomic) unsigned int numberOfTabsOpen;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)currentTabIndex;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCurrentTabIndex;
- (bool)hasNumberOfTabsOpen;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfTabsOpen;
- (bool)readFrom:(id)arg1;
- (void)setCurrentTabIndex:(unsigned int)arg1;
- (void)setHasCurrentTabIndex:(bool)arg1;
- (void)setHasNumberOfTabsOpen:(bool)arg1;
- (void)setNumberOfTabsOpen:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
