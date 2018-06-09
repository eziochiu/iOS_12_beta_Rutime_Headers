/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitImporterWorkItem : NSObject {
    NSCloudKitMirroringDelegateMetadata * _metadata;
    PFCloudKitImporterOptions * _options;
    NSCloudKitMirroringImportRequest * _request;
}

@property (nonatomic, readonly) NSCloudKitMirroringDelegateMetadata *metadata;
@property (nonatomic, readonly) PFCloudKitImporterOptions *options;
@property (nonatomic, readonly) NSCloudKitMirroringImportRequest *request;

- (void)dealloc;
- (void)doWorkWithCompletion:(id /* block */)arg1;
- (id)initWithOptions:(id)arg1 metadata:(id)arg2 request:(id)arg3;
- (id)metadata;
- (id)options;
- (id)request;

@end
