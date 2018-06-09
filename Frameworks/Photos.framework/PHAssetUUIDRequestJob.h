/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetUUIDRequestJob : PLDaemonJob {
    id /* block */  _completionHandler;
    NSString * _uuid;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSString *uuid;

+ (void)requestUUIDWithCustomUUID:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (long long)daemonOperation;
- (void)encodeToXPCObject:(id)arg1;
- (void)handleReply;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)run;
- (void)runDaemonSide;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
