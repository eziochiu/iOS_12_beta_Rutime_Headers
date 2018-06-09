/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSubscriptionLeaseExternalErrorUpdateOperation : MPAsyncOperation {
    NSError * _externalError;
}

@property (nonatomic, copy) NSError *externalError;

- (void).cxx_destruct;
- (void)execute;
- (id)externalError;
- (void)setExternalError:(id)arg1;

@end
