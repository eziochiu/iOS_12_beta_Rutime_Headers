/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface _MusicInterleavedEntityProviderMergeInformation : NSObject {
    id  _entityComparisonObject;
    <MusicEntityProviding> * _entityProvider;
    id  _entityUniqueIdentifier;
    NSIndexPath * _indexPath;
}

@property (nonatomic, copy) id entityComparisonObject;
@property (nonatomic, retain) <MusicEntityProviding> *entityProvider;
@property (nonatomic, copy) id entityUniqueIdentifier;
@property (nonatomic, copy) NSIndexPath *indexPath;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)entityComparisonObject;
- (id)entityProvider;
- (id)entityUniqueIdentifier;
- (unsigned long long)hash;
- (id)indexPath;
- (bool)isEqual:(id)arg1;
- (void)setEntityComparisonObject:(id)arg1;
- (void)setEntityProvider:(id)arg1;
- (void)setEntityUniqueIdentifier:(id)arg1;
- (void)setIndexPath:(id)arg1;

@end
