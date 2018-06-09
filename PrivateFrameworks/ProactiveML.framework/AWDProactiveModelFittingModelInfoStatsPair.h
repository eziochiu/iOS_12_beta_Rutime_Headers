/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface AWDProactiveModelFittingModelInfoStatsPair : PBCodable <NSCopying> {
    AWDProactiveModelFittingModelInfo * _modelInfo;
    AWDProactiveModelFittingMinibatchStats * _stats;
}

@property (nonatomic, readonly) bool hasModelInfo;
@property (nonatomic, readonly) bool hasStats;
@property (nonatomic, retain) AWDProactiveModelFittingModelInfo *modelInfo;
@property (nonatomic, retain) AWDProactiveModelFittingMinibatchStats *stats;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasModelInfo;
- (bool)hasStats;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modelInfo;
- (bool)readFrom:(id)arg1;
- (void)setModelInfo:(id)arg1;
- (void)setStats:(id)arg1;
- (id)stats;
- (void)writeTo:(id)arg1;

@end
