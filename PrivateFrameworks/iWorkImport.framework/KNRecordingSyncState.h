/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNRecordingSyncState : NSObject <NSCopying> {
    bool  _canClearOutOfSyncToken;
    NSUUID * _outOfSyncToken;
}

@property (nonatomic, readonly) NSUUID *outOfSyncToken;
@property (getter=isRecordingOutOfSync, nonatomic, readonly) bool recordingOutOfSync;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithArchive:(const struct RecordingSyncState { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct UUID {} *x5; bool x6; }*)arg1 unarchiver:(id)arg2;
- (id)initWithOutOfSyncToken:(id)arg1 canClearOutOfSyncToken:(bool)arg2;
- (bool)isRecordingLocallyOutOfSyncUsingLocalOutOfSyncToken:(id)arg1;
- (bool)isRecordingOutOfSync;
- (id)outOfSyncToken;
- (id)recordingSyncStateByMarkingRecordingAsOutOfSync:(bool)arg1 withLocalOutOfSyncToken:(id)arg2;
- (void)saveToArchive:(struct RecordingSyncState { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct UUID {} *x5; bool x6; }*)arg1 archiver:(id)arg2;

@end
