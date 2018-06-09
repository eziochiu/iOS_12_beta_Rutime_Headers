/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DAFolderChange : NSObject <NSSecureCoding> {
    unsigned long long  _changeType;
    <DAFolderChangeConsumer> * _consumer;
    long long  _dataclass;
    NSString * _displayName;
    NSString * _folderId;
    NSString * _parentFolderId;
    bool  _renameOnCollision;
    unsigned int  _taskId;
}

@property (nonatomic) unsigned long long changeType;
@property (nonatomic) <DAFolderChangeConsumer> *consumer;
@property (nonatomic) long long dataclass;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *folderId;
@property (nonatomic, retain) NSString *parentFolderId;
@property (nonatomic) bool renameOnCollision;
@property (nonatomic) unsigned int taskId;

// Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)changeType;
- (id)consumer;
- (long long)dataclass;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)folderId;
- (id)initFolderChangeWithChangeType:(unsigned long long)arg1 folderId:(id)arg2 parentFolderId:(id)arg3 displayName:(id)arg4 dataclass:(long long)arg5 consumer:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)parentFolderId;
- (bool)renameOnCollision;
- (void)setChangeType:(unsigned long long)arg1;
- (void)setConsumer:(id)arg1;
- (void)setDataclass:(long long)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFolderId:(id)arg1;
- (void)setParentFolderId:(id)arg1;
- (void)setRenameOnCollision:(bool)arg1;
- (void)setTaskId:(unsigned int)arg1;
- (unsigned int)taskId;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (id)mf_deferredOperation;

@end
