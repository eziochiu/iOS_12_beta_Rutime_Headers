/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface _MPUProtoBufUserActivityContainerItem : PBCodable <NSCopying> {
    int  _containerItemType;
    struct { 
        unsigned int containerItemType : 1; 
    }  _has;
    MIPMultiverseIdentifier * _selectedMultiverseIdentifier;
    MIPMultiverseIdentifier * _visualReferenceMultiverseIdentifier;
}

@property (nonatomic) int containerItemType;
@property (nonatomic) bool hasContainerItemType;
@property (nonatomic, readonly) bool hasSelectedMultiverseIdentifier;
@property (nonatomic, readonly) bool hasVisualReferenceMultiverseIdentifier;
@property (nonatomic, retain) MIPMultiverseIdentifier *selectedMultiverseIdentifier;
@property (nonatomic, retain) MIPMultiverseIdentifier *visualReferenceMultiverseIdentifier;

- (void).cxx_destruct;
- (int)containerItemType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContainerItemType;
- (bool)hasSelectedMultiverseIdentifier;
- (bool)hasVisualReferenceMultiverseIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)selectedMultiverseIdentifier;
- (void)setContainerItemType:(int)arg1;
- (void)setHasContainerItemType:(bool)arg1;
- (void)setSelectedMultiverseIdentifier:(id)arg1;
- (void)setVisualReferenceMultiverseIdentifier:(id)arg1;
- (id)visualReferenceMultiverseIdentifier;
- (void)writeTo:(id)arg1;

@end
