/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKDeletionResult : NSObject {
    NSArray * _protectedMessageIds;
    NNMKProtoMessageDeletions * _protectedProtobuf;
    NSArray * _unprotectedDefaultMessageIds;
    NNMKProtoMessageDeletions * _unprotectedDefaultProtobuf;
    NSArray * _unprotectedNotificationMessageIds;
    NNMKProtoMessageDeletions * _unprotectedNotificationProtobuf;
}

@property (nonatomic, retain) NSArray *protectedMessageIds;
@property (nonatomic, retain) NNMKProtoMessageDeletions *protectedProtobuf;
@property (nonatomic, retain) NSArray *unprotectedDefaultMessageIds;
@property (nonatomic, retain) NNMKProtoMessageDeletions *unprotectedDefaultProtobuf;
@property (nonatomic, retain) NSArray *unprotectedNotificationMessageIds;
@property (nonatomic, retain) NNMKProtoMessageDeletions *unprotectedNotificationProtobuf;

- (void).cxx_destruct;
- (id)protectedMessageIds;
- (id)protectedProtobuf;
- (void)setProtectedMessageIds:(id)arg1;
- (void)setProtectedProtobuf:(id)arg1;
- (void)setUnprotectedDefaultMessageIds:(id)arg1;
- (void)setUnprotectedDefaultProtobuf:(id)arg1;
- (void)setUnprotectedNotificationMessageIds:(id)arg1;
- (void)setUnprotectedNotificationProtobuf:(id)arg1;
- (id)unprotectedDefaultMessageIds;
- (id)unprotectedDefaultProtobuf;
- (id)unprotectedNotificationMessageIds;
- (id)unprotectedNotificationProtobuf;

@end
