/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCProblemReport : NSObject <NSCopying, NSSecureCoding> {
    bool  _needsSyncUp;
    NSNumber * _pendingRequestID;
    NSMutableDictionary * _problems;
    int  _state;
}

@property (nonatomic, readonly) NSSet *effectedRecordNames;
@property (nonatomic, readonly) NSString *effectiveProblemMessage;
@property (nonatomic) bool needsSyncUp;
@property (nonatomic, retain) NSNumber *pendingRequestID;
@property (nonatomic, readonly) int state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addProblem:(id)arg1;
- (int)_effectiveProblemType;
- (int)_priorityForProblemType:(int)arg1;
- (int)_zoneStateForProblemType:(int)arg1;
- (void)addProblemWithType:(int)arg1 recordName:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)effectedRecordNames;
- (id)effectiveProblemMessage;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProblemReport:(id)arg1;
- (bool)needsSyncUp;
- (id)pendingRequestID;
- (void)setNeedsSyncUp:(bool)arg1;
- (void)setPendingRequestID:(id)arg1;
- (int)state;

@end
