/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPGenericShieldVariant : PBCodable <NSCopying> {
    NSString * _fontName;
    float  _fontSize;
    struct { 
        unsigned int fontSize : 1; 
        unsigned int leftCapWidth : 1; 
        unsigned int leftPadding : 1; 
        unsigned int lineSpacing : 1; 
        unsigned int numberOfLines : 1; 
        unsigned int rightCapWidth : 1; 
        unsigned int rightPadding : 1; 
        unsigned int textBaseline : 1; 
    }  _has;
    struct { unsigned int x1; float x2; unsigned int x3; unsigned int x4; int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; } * _layers;
    unsigned long long  _layersCount;
    unsigned long long  _layersSpace;
    float  _leftCapWidth;
    float  _leftPadding;
    float  _lineSpacing;
    unsigned int  _numberOfLines;
    float  _rightCapWidth;
    float  _rightPadding;
    float  _textBaseline;
}

@property (nonatomic, retain) NSString *fontName;
@property (nonatomic) float fontSize;
@property (nonatomic, readonly) bool hasFontName;
@property (nonatomic) bool hasFontSize;
@property (nonatomic) bool hasLeftCapWidth;
@property (nonatomic) bool hasLeftPadding;
@property (nonatomic) bool hasLineSpacing;
@property (nonatomic) bool hasNumberOfLines;
@property (nonatomic) bool hasRightCapWidth;
@property (nonatomic) bool hasRightPadding;
@property (nonatomic) bool hasTextBaseline;
@property (nonatomic, readonly) struct { unsigned int x1; float x2; unsigned int x3; unsigned int x4; int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; }*layers;
@property (nonatomic, readonly) unsigned long long layersCount;
@property (nonatomic) float leftCapWidth;
@property (nonatomic) float leftPadding;
@property (nonatomic) float lineSpacing;
@property (nonatomic) unsigned int numberOfLines;
@property (nonatomic) float rightCapWidth;
@property (nonatomic) float rightPadding;
@property (nonatomic) float textBaseline;

- (struct CGSize { double x1; double x2; })_imageSizeWithTextureAtlases:(id)arg1;
- (void)addLayer:(struct { unsigned int x1; float x2; unsigned int x3; unsigned int x4; int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; })arg1;
- (void)clearLayers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fontName;
- (float)fontSize;
- (bool)hasFontName;
- (bool)hasFontSize;
- (bool)hasLeftCapWidth;
- (bool)hasLeftPadding;
- (bool)hasLineSpacing;
- (bool)hasNumberOfLines;
- (bool)hasRightCapWidth;
- (bool)hasRightPadding;
- (bool)hasTextBaseline;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (struct { unsigned int x1; float x2; unsigned int x3; unsigned int x4; int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; })layerAtIndex:(unsigned long long)arg1;
- (struct { unsigned int x1; float x2; unsigned int x3; unsigned int x4; int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; }*)layers;
- (unsigned long long)layersCount;
- (float)leftCapWidth;
- (float)leftPadding;
- (float)lineSpacing;
- (void)mergeFrom:(id)arg1;
- (struct CGImage { }*)newImageWithBackgroundColor:(struct CGColor { }*)arg1 borderColor:(struct CGColor { }*)arg2 textureAtlases:(id)arg3 contentScale:(double)arg4;
- (unsigned int)numberOfLines;
- (bool)readFrom:(id)arg1;
- (float)rightCapWidth;
- (float)rightPadding;
- (void)setFontName:(id)arg1;
- (void)setFontSize:(float)arg1;
- (void)setHasFontSize:(bool)arg1;
- (void)setHasLeftCapWidth:(bool)arg1;
- (void)setHasLeftPadding:(bool)arg1;
- (void)setHasLineSpacing:(bool)arg1;
- (void)setHasNumberOfLines:(bool)arg1;
- (void)setHasRightCapWidth:(bool)arg1;
- (void)setHasRightPadding:(bool)arg1;
- (void)setHasTextBaseline:(bool)arg1;
- (void)setLayers:(struct { unsigned int x1; float x2; unsigned int x3; unsigned int x4; int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; }*)arg1 count:(unsigned long long)arg2;
- (void)setLeftCapWidth:(float)arg1;
- (void)setLeftPadding:(float)arg1;
- (void)setLineSpacing:(float)arg1;
- (void)setNumberOfLines:(unsigned int)arg1;
- (void)setRightCapWidth:(float)arg1;
- (void)setRightPadding:(float)arg1;
- (void)setTextBaseline:(float)arg1;
- (float)textBaseline;
- (void)writeTo:(id)arg1;

@end
