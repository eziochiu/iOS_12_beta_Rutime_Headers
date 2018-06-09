/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDAMoveResponseConsumer : MFDAMailAccountConsumer <DAMessageMoveRequestConsumer> {
    MFError * _error;
    NSMutableSet * _failures;
    NSSet * _messagesIDs;
    NSMutableDictionary * _newRemoteIDsByMessageID;
}

@property (nonatomic, retain) MFError *error;

- (void)dealloc;
- (id)error;
- (id)initWithMessageIDs:(id)arg1 newRemoteIDsByMessageID:(id)arg2 failures:(id)arg3;
- (void)resultsForMessageMove:(id)arg1;
- (void)setError:(id)arg1;
- (void)taskFailed:(id)arg1 statusCode:(long long)arg2 error:(id)arg3;

@end
