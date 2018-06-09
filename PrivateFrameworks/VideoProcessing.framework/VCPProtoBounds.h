/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPProtoBounds : PBCodable <NSCopying> {
    double  _height;
    double  _width;
    double  _x0;
    double  _y0;
}

@property (nonatomic) double height;
@property (nonatomic) double width;
@property (nonatomic) double x0;
@property (nonatomic) double y0;

+ (id)boundsWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (double)height;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectValue;
- (void)setHeight:(double)arg1;
- (void)setWidth:(double)arg1;
- (void)setX0:(double)arg1;
- (void)setY0:(double)arg1;
- (double)width;
- (void)writeTo:(id)arg1;
- (double)x0;
- (double)y0;

@end
