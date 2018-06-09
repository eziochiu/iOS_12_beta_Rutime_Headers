/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitExporterOptions : NSObject {
    CKDatabase * _database;
    NSCloudKitMirroringDelegateOptions * _mirroringDelegateOptions;
    unsigned long long  _perOperationBytesThreshold;
    unsigned long long  _perOperationObjectThreshold;
    CKRecordZone * _zone;
}

@property (nonatomic, readonly) CKDatabase *database;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateOptions *mirroringDelegateOptions;
@property (nonatomic) unsigned long long perOperationBytesThreshold;
@property (nonatomic) unsigned long long perOperationObjectThreshold;
@property (nonatomic, readonly) CKRecordZone *zone;

- (id)copy;
- (id)database;
- (void)dealloc;
- (id)initWithZone:(id)arg1 database:(id)arg2 options:(id)arg3;
- (id)mirroringDelegateOptions;
- (unsigned long long)perOperationBytesThreshold;
- (unsigned long long)perOperationObjectThreshold;
- (void)setPerOperationBytesThreshold:(unsigned long long)arg1;
- (void)setPerOperationObjectThreshold:(unsigned long long)arg1;
- (id)zone;

@end
