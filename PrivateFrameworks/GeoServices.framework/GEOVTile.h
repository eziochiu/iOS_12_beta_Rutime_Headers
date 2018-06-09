/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVTile : PBCodable <NSCopying> {
    NSMutableArray * _coastlines;
    GEOVConnectivity * _connectivity;
    struct { 
        unsigned int minZ : 1; 
        unsigned int sectionDeltaLengthBits : 1; 
        unsigned int vertexBits : 1; 
        unsigned int zBits : 1; 
    }  _has;
    NSMutableArray * _labelLanguages;
    NSData * _labels;
    NSMutableArray * _lines;
    int  _minZ;
    NSMutableArray * _points;
    NSMutableArray * _polygons;
    unsigned int  _sectionDeltaLengthBits;
    unsigned int  _vertexBits;
    NSData * _vertices;
    int  _zBits;
}

@property (nonatomic, retain) NSMutableArray *coastlines;
@property (nonatomic, retain) GEOVConnectivity *connectivity;
@property (nonatomic, readonly) bool hasConnectivity;
@property (nonatomic, readonly) bool hasLabels;
@property (nonatomic) bool hasMinZ;
@property (nonatomic) bool hasSectionDeltaLengthBits;
@property (nonatomic) bool hasVertexBits;
@property (nonatomic, readonly) bool hasVertices;
@property (nonatomic) bool hasZBits;
@property (nonatomic, retain) NSMutableArray *labelLanguages;
@property (nonatomic, retain) NSData *labels;
@property (nonatomic, retain) NSMutableArray *lines;
@property (nonatomic) int minZ;
@property (nonatomic, retain) NSMutableArray *points;
@property (nonatomic, retain) NSMutableArray *polygons;
@property (nonatomic) unsigned int sectionDeltaLengthBits;
@property (nonatomic) unsigned int vertexBits;
@property (nonatomic, retain) NSData *vertices;
@property (nonatomic) int zBits;

- (void).cxx_destruct;
- (void)addCoastlines:(id)arg1;
- (void)addLabelLanguage:(id)arg1;
- (void)addLine:(id)arg1;
- (void)addPoint:(id)arg1;
- (void)addPolygon:(id)arg1;
- (void)clearCoastlines;
- (void)clearLabelLanguages;
- (void)clearLines;
- (void)clearPoints;
- (void)clearPolygons;
- (id)coastlines;
- (id)coastlinesAtIndex:(unsigned long long)arg1;
- (unsigned long long)coastlinesCount;
- (id)connectivity;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConnectivity;
- (bool)hasLabels;
- (bool)hasMinZ;
- (bool)hasSectionDeltaLengthBits;
- (bool)hasVertexBits;
- (bool)hasVertices;
- (bool)hasZBits;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)labelLanguageAtIndex:(unsigned long long)arg1;
- (id)labelLanguages;
- (unsigned long long)labelLanguagesCount;
- (id)labels;
- (id)lineAtIndex:(unsigned long long)arg1;
- (id)lines;
- (unsigned long long)linesCount;
- (int)minZ;
- (id)pointAtIndex:(unsigned long long)arg1;
- (id)points;
- (unsigned long long)pointsCount;
- (id)polygonAtIndex:(unsigned long long)arg1;
- (id)polygons;
- (unsigned long long)polygonsCount;
- (bool)readFrom:(id)arg1;
- (unsigned int)sectionDeltaLengthBits;
- (void)setCoastlines:(id)arg1;
- (void)setConnectivity:(id)arg1;
- (void)setHasMinZ:(bool)arg1;
- (void)setHasSectionDeltaLengthBits:(bool)arg1;
- (void)setHasVertexBits:(bool)arg1;
- (void)setHasZBits:(bool)arg1;
- (void)setLabelLanguages:(id)arg1;
- (void)setLabels:(id)arg1;
- (void)setLines:(id)arg1;
- (void)setMinZ:(int)arg1;
- (void)setPoints:(id)arg1;
- (void)setPolygons:(id)arg1;
- (void)setSectionDeltaLengthBits:(unsigned int)arg1;
- (void)setVertexBits:(unsigned int)arg1;
- (void)setVertices:(id)arg1;
- (void)setZBits:(int)arg1;
- (unsigned int)vertexBits;
- (id)vertices;
- (void)writeTo:(id)arg1;
- (int)zBits;

@end
