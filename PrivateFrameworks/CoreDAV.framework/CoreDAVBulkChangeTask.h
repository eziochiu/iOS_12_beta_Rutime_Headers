/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVBulkChangeTask : CoreDAVTask {
    NSString * _appSpecificDataProp;
    NSString * _appSpecificNamespace;
    NSMutableSet * _bulkChangeResponses;
    NSString * _checkCTag;
    NSDictionary * _hrefsToModDeleteActions;
    NSString * _nextCTag;
    NSData * _pushedData;
    NSString * _requestDataContentType;
    bool  _returnChangedData;
    bool  _simple;
    NSDictionary * _uuidsToAddActions;
    bool  _validCTag;
}

@property (nonatomic, readonly) NSSet *bulkChangeResponses;
@property (nonatomic, readonly) NSDictionary *hrefsToModDeleteActions;
@property (nonatomic, readonly) NSString *nextCTag;
@property (nonatomic, readonly) NSDictionary *uuidsToAddActions;

- (void).cxx_destruct;
- (id)additionalHeaderValues;
- (id)bulkChangeResponses;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)fillOutDataWithUUIDsToAddActions:(id)arg1 hrefsToModDeleteActions:(id)arg2;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)hrefsToModDeleteActions;
- (id)httpMethod;
- (id)initWithURL:(id)arg1 checkCTag:(id)arg2 simple:(bool)arg3 returnChangedData:(bool)arg4 uuidsToAddActions:(id)arg5 hrefsToModDeleteActions:(id)arg6;
- (id)nextCTag;
- (id)requestBody;
- (id)uuidsToAddActions;

@end
