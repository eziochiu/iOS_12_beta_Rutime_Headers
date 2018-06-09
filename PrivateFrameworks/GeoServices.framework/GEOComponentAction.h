/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComponentAction : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _actions;
    int  _component;
    bool  _handleLocally;
    struct { 
        unsigned int component : 1; 
        unsigned int handleLocally : 1; 
    }  _has;
}

@property (nonatomic, readonly) int*actions;
@property (nonatomic, readonly) unsigned long long actionsCount;
@property (nonatomic) int component;
@property (nonatomic) bool handleLocally;
@property (nonatomic) bool hasComponent;
@property (nonatomic) bool hasHandleLocally;

- (int)StringAsActions:(id)arg1;
- (int)StringAsComponent:(id)arg1;
- (int*)actions;
- (id)actionsAsString:(int)arg1;
- (int)actionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionsCount;
- (void)addActions:(int)arg1;
- (void)clearActions;
- (int)component;
- (id)componentAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)handleLocally;
- (bool)hasComponent;
- (bool)hasHandleLocally;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActions:(int*)arg1 count:(unsigned long long)arg2;
- (void)setComponent:(int)arg1;
- (void)setHandleLocally:(bool)arg1;
- (void)setHasComponent:(bool)arg1;
- (void)setHasHandleLocally:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
