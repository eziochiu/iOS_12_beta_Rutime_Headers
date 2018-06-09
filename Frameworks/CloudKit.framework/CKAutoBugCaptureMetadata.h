/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKAutoBugCaptureMetadata : NSObject {
    CKContainerID * _containerID;
    NSError * _errorPayload;
    NSString * _procName;
    long long  _reason;
}

@property (nonatomic, copy) CKContainerID *containerID;
@property (nonatomic, copy) NSError *errorPayload;
@property (nonatomic, copy) NSString *procName;
@property (nonatomic) long long reason;

- (void).cxx_destruct;
- (id)containerID;
- (id)errorPayload;
- (id)procName;
- (long long)reason;
- (void)setContainerID:(id)arg1;
- (void)setErrorPayload:(id)arg1;
- (void)setProcName:(id)arg1;
- (void)setReason:(long long)arg1;

@end