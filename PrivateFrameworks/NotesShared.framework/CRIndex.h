/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface CRIndex : NSObject <CRCoding, CRDataType, NSCopying> {
    NSArray * _indexPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *indexPath;
@property (readonly) Class superclass;

+ (id)indexForReplica:(id)arg1 betweenIndex:(id)arg2 andIndex:(id)arg3;
+ (id)indexWithPath:(id)arg1;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (unsigned long long)depth;
- (id)description;
- (void)encodeWithCRCoder:(id)arg1;
- (unsigned long long)hash;
- (id)indexAtDepth:(unsigned long long)arg1 withInteger:(long long)arg2 replica:(id)arg3;
- (id)indexPath;
- (id)init;
- (id)initWithCRCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)nextIndexForReplica:(id)arg1;
- (id)previousIndexForReplica:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setIndexPath:(id)arg1;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

@end