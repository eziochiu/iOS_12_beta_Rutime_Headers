/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBColorGradient : PBCodable <NSCopying> {
    NSMutableArray * _colors;
    double  _endPointX;
    double  _endPointY;
    struct { 
        unsigned int endPointX : 1; 
        unsigned int endPointY : 1; 
        unsigned int startPointX : 1; 
        unsigned int startPointY : 1; 
    }  _has;
    struct { 
        double *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _locations;
    double  _startPointX;
    double  _startPointY;
}

@property (nonatomic, retain) NSMutableArray *colors;
@property (nonatomic) double endPointX;
@property (nonatomic) double endPointY;
@property (nonatomic) bool hasEndPointX;
@property (nonatomic) bool hasEndPointY;
@property (nonatomic) bool hasStartPointX;
@property (nonatomic) bool hasStartPointY;
@property (nonatomic, readonly) double*locations;
@property (nonatomic, readonly) unsigned long long locationsCount;
@property (nonatomic) double startPointX;
@property (nonatomic) double startPointY;

+ (Class)colorType;

- (void)addColor:(id)arg1;
- (void)addLocation:(double)arg1;
- (void)clearColors;
- (void)clearLocations;
- (id)colorAtIndex:(unsigned long long)arg1;
- (id)colors;
- (unsigned long long)colorsCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endPointX;
- (double)endPointY;
- (bool)hasEndPointX;
- (bool)hasEndPointY;
- (bool)hasStartPointX;
- (bool)hasStartPointY;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)locationAtIndex:(unsigned long long)arg1;
- (double*)locations;
- (unsigned long long)locationsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setColors:(id)arg1;
- (void)setEndPointX:(double)arg1;
- (void)setEndPointY:(double)arg1;
- (void)setHasEndPointX:(bool)arg1;
- (void)setHasEndPointY:(bool)arg1;
- (void)setHasStartPointX:(bool)arg1;
- (void)setHasStartPointY:(bool)arg1;
- (void)setLocations:(double*)arg1 count:(unsigned long long)arg2;
- (void)setStartPointX:(double)arg1;
- (void)setStartPointY:(double)arg1;
- (double)startPointX;
- (double)startPointY;
- (void)writeTo:(id)arg1;

@end
