/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLFaceAnalysis : PBCodable <NSCopying> {
    bool  _completed;
    NSMutableArray * _faceInstances;
    struct { 
        unsigned int completed : 1; 
    }  _has;
}

@property (nonatomic) bool completed;
@property (nonatomic, retain) NSMutableArray *faceInstances;
@property (nonatomic) bool hasCompleted;

+ (Class)faceInstancesType;

- (void).cxx_destruct;
- (void)addFaceInstances:(id)arg1;
- (void)clearFaceInstances;
- (bool)completed;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)faceInstances;
- (id)faceInstancesAtIndex:(unsigned long long)arg1;
- (unsigned long long)faceInstancesCount;
- (bool)hasCompleted;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setFaceInstances:(id)arg1;
- (void)setHasCompleted:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
