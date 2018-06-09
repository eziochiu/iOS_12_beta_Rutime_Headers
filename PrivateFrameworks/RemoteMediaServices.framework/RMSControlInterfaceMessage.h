/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSControlInterfaceMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int supportsDirectionalControl : 1; 
        unsigned int supportsSpeakerSelection : 1; 
        unsigned int supportsVolumeControl : 1; 
    }  _has;
    bool  _supportsDirectionalControl;
    bool  _supportsSpeakerSelection;
    bool  _supportsVolumeControl;
}

@property (nonatomic) bool hasSupportsDirectionalControl;
@property (nonatomic) bool hasSupportsSpeakerSelection;
@property (nonatomic) bool hasSupportsVolumeControl;
@property (nonatomic) bool supportsDirectionalControl;
@property (nonatomic) bool supportsSpeakerSelection;
@property (nonatomic) bool supportsVolumeControl;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSupportsDirectionalControl;
- (bool)hasSupportsSpeakerSelection;
- (bool)hasSupportsVolumeControl;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasSupportsDirectionalControl:(bool)arg1;
- (void)setHasSupportsSpeakerSelection:(bool)arg1;
- (void)setHasSupportsVolumeControl:(bool)arg1;
- (void)setSupportsDirectionalControl:(bool)arg1;
- (void)setSupportsSpeakerSelection:(bool)arg1;
- (void)setSupportsVolumeControl:(bool)arg1;
- (bool)supportsDirectionalControl;
- (bool)supportsSpeakerSelection;
- (bool)supportsVolumeControl;
- (void)writeTo:(id)arg1;

@end
