/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDCodeFunctionInvokeURLRequest : CKDURLRequest {
    NSString * _functionName;
    NSData * _serializedParameters;
    id /* block */  _serializedResultsCallback;
    NSString * _serviceName;
}

@property (nonatomic, copy) NSString *functionName;
@property (nonatomic, retain) NSData *serializedParameters;
@property (nonatomic, copy) id /* block */ serializedResultsCallback;
@property (nonatomic, copy) NSString *serviceName;

- (void).cxx_destruct;
- (bool)allowsAnonymousAccount;
- (id)functionName;
- (id)generateRequestOperations;
- (id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3;
- (int)operationType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)serializedParameters;
- (id /* block */)serializedResultsCallback;
- (id)serviceName;
- (void)setFunctionName:(id)arg1;
- (void)setSerializedParameters:(id)arg1;
- (void)setSerializedResultsCallback:(id /* block */)arg1;
- (void)setServiceName:(id)arg1;

@end
