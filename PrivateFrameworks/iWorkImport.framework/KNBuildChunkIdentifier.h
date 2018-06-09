/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNBuildChunkIdentifier : NSObject <NSCopying> {
    NSUUID * _buildUUID;
    int  _chunkID;
}

@property (nonatomic, readonly) NSUUID *buildUUID;
@property (nonatomic, readonly) int chunkID;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)emptyIdentifier;

- (void).cxx_destruct;
- (id)buildUUID;
- (int)chunkID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initEmptyIdentifier;
- (id)initWithBuild:(id)arg1 chunkID:(int)arg2;
- (id)initWithMessage:(const struct BuildChunkIdentifierArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct UUID {} *x5; int x6; }*)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)resolveToChunkOnSlide:(id)arg1;
- (id)resolveToChunkUsingContext:(id)arg1;
- (void)saveToMessage:(struct BuildChunkIdentifierArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct UUID {} *x5; int x6; }*)arg1;

@end
