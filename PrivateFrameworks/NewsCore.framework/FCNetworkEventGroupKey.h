/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNetworkEventGroupKey : NSObject <NSCopying> {
    long long  _eventType;
    NSString * _respondingPOP;
    unsigned long long  _sessionID;
}

@property (nonatomic) long long eventType;
@property (nonatomic, retain) NSString *respondingPOP;
@property (nonatomic) unsigned long long sessionID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)eventType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)respondingPOP;
- (unsigned long long)sessionID;
- (void)setEventType:(long long)arg1;
- (void)setRespondingPOP:(id)arg1;
- (void)setSessionID:(unsigned long long)arg1;

@end
