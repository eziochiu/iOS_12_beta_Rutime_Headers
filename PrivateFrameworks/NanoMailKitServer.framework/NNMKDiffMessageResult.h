/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKDiffMessageResult : NSObject {
    NSMutableSet * _messageIdsToAddToWatch;
    NSMutableSet * _messageIdsToDeleteFromWatch;
    NSMutableSet * _messageIdsToUpdateOnWatch;
    NSArray * _messageToAddToWatch;
    bool  _trimed;
}

@property (nonatomic, retain) NSMutableSet *messageIdsToAddToWatch;
@property (nonatomic, retain) NSMutableSet *messageIdsToDeleteFromWatch;
@property (nonatomic, retain) NSMutableSet *messageIdsToUpdateOnWatch;
@property (nonatomic, retain) NSArray *messageToAddToWatch;
@property (nonatomic) bool trimed;

- (void).cxx_destruct;
- (id)messageIdsToAddToWatch;
- (id)messageIdsToDeleteFromWatch;
- (id)messageIdsToUpdateOnWatch;
- (id)messageToAddToWatch;
- (void)setMessageIdsToAddToWatch:(id)arg1;
- (void)setMessageIdsToDeleteFromWatch:(id)arg1;
- (void)setMessageIdsToUpdateOnWatch:(id)arg1;
- (void)setMessageToAddToWatch:(id)arg1;
- (void)setTrimed:(bool)arg1;
- (bool)trimed;

@end
