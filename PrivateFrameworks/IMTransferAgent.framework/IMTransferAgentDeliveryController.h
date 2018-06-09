/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
 */

@interface IMTransferAgentDeliveryController : NSObject {
    FTMessageDelivery * _messageDelivery;
}

@property (nonatomic, retain) FTMessageDelivery *messageDelivery;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)messageDelivery;
- (void)sendFTMessage:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setMessageDelivery:(id)arg1;

@end