/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSAggregateMessageSendCheckpointTrace : CUTCheckpointTrace {
    APSOutgoingMessageCheckpointTrace * _apsMessageTrace;
}

@property (nonatomic, retain) APSOutgoingMessageCheckpointTrace *apsMessageTrace;

- (void).cxx_destruct;
- (id)apsMessageTrace;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4;
- (id)initWithUniqueIdentifier:(id)arg1;
- (void)setApsMessageTrace:(id)arg1;

@end
