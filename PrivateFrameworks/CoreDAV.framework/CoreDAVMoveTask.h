/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask {
    NSString * _previousETag;
}

@property (nonatomic) <CoreDAVMoveTaskDelegate> *delegate;
@property (nonatomic, retain) NSString *previousETag;

- (void).cxx_destruct;
- (void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2;
- (id)additionalHeaderValues;
- (void)dealloc;
- (id)description;
- (id)httpMethod;
- (id)previousETag;
- (void)setPreviousETag:(id)arg1;

@end
