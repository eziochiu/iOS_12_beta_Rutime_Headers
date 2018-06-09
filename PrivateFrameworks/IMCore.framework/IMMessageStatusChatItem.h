/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMMessageStatusChatItem : IMTranscriptChatItem {
    unsigned long long  _count;
    long long  _expireStatusType;
    long long  _statusType;
    NSDate * _time;
    NSDate * _timeAdded;
    NSDate * _timeStale;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSString *errorText;
@property (nonatomic, readonly) long long expireStatusType;
@property (nonatomic, readonly) bool isFromMe;
@property (nonatomic, readonly) long long messageStatusType;
@property (nonatomic, readonly) long long statusType;
@property (nonatomic, readonly) NSDate *time;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 expireStatusType:(long long)arg2 count:(unsigned long long)arg3;
- (id)_initWithItem:(id)arg1 statusType:(long long)arg2 time:(id)arg3 count:(unsigned long long)arg4;
- (id)_initWithItem:(id)arg1 statusType:(long long)arg2 time:(id)arg3 count:(unsigned long long)arg4 expireStatusType:(long long)arg5;
- (void)_setTimeAdded:(id)arg1;
- (id)_timeAdded;
- (id)_timeStale;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (id)errorText;
- (long long)expireStatusType;
- (bool)isFromMe;
- (long long)messageStatusType;
- (long long)statusType;
- (id)time;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
