/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMApplicationListInstalledApplicationsCommand_Status : CEMPayloadBase {
    NSArray * _statusInstalledApplicationList;
}

@property (nonatomic, copy) NSArray *statusInstalledApplicationList;

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)buildWithInstalledApplicationList:(id)arg1;

- (void).cxx_destruct;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusInstalledApplicationList:(id)arg1;
- (id)statusInstalledApplicationList;

@end
