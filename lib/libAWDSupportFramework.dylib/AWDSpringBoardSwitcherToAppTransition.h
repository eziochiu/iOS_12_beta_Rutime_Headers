/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSpringBoardSwitcherToAppTransition : PBCodable <NSCopying> {
    unsigned long long  _absoluteDistanceInList;
    struct { 
        unsigned int absoluteDistanceInList : 1; 
        unsigned int timestamp : 1; 
        unsigned int isGoingToHomeScreen : 1; 
    }  _has;
    bool  _isGoingToHomeScreen;
    NSString * _switcherName;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long absoluteDistanceInList;
@property (nonatomic) bool hasAbsoluteDistanceInList;
@property (nonatomic) bool hasIsGoingToHomeScreen;
@property (nonatomic, readonly) bool hasSwitcherName;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool isGoingToHomeScreen;
@property (nonatomic, retain) NSString *switcherName;
@property (nonatomic) unsigned long long timestamp;

- (unsigned long long)absoluteDistanceInList;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbsoluteDistanceInList;
- (bool)hasIsGoingToHomeScreen;
- (bool)hasSwitcherName;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isGoingToHomeScreen;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbsoluteDistanceInList:(unsigned long long)arg1;
- (void)setHasAbsoluteDistanceInList:(bool)arg1;
- (void)setHasIsGoingToHomeScreen:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsGoingToHomeScreen:(bool)arg1;
- (void)setSwitcherName:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)switcherName;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
