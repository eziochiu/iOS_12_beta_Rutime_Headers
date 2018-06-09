/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRVirtualTouchDeviceDescriptorProtobuf : PBCodable <NSCopying> {
    bool  _absolute;
    struct { 
        unsigned int screenSizeHeight : 1; 
        unsigned int screenSizeWidth : 1; 
        unsigned int absolute : 1; 
        unsigned int integratedDisplay : 1; 
    }  _has;
    bool  _integratedDisplay;
    float  _screenSizeHeight;
    float  _screenSizeWidth;
}

@property (nonatomic) bool absolute;
@property (nonatomic) bool hasAbsolute;
@property (nonatomic) bool hasIntegratedDisplay;
@property (nonatomic) bool hasScreenSizeHeight;
@property (nonatomic) bool hasScreenSizeWidth;
@property (nonatomic) bool integratedDisplay;
@property (nonatomic) float screenSizeHeight;
@property (nonatomic) float screenSizeWidth;

- (bool)absolute;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbsolute;
- (bool)hasIntegratedDisplay;
- (bool)hasScreenSizeHeight;
- (bool)hasScreenSizeWidth;
- (unsigned long long)hash;
- (bool)integratedDisplay;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (float)screenSizeHeight;
- (float)screenSizeWidth;
- (void)setAbsolute:(bool)arg1;
- (void)setHasAbsolute:(bool)arg1;
- (void)setHasIntegratedDisplay:(bool)arg1;
- (void)setHasScreenSizeHeight:(bool)arg1;
- (void)setHasScreenSizeWidth:(bool)arg1;
- (void)setIntegratedDisplay:(bool)arg1;
- (void)setScreenSizeHeight:(float)arg1;
- (void)setScreenSizeWidth:(float)arg1;
- (void)writeTo:(id)arg1;

@end
