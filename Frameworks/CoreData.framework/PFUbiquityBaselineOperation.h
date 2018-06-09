/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityBaselineOperation : PFUbiquityImportOperation {
    NSManagedObjectModel * _model;
    NSString * _modelVersionHash;
}

@property (nonatomic, readonly) NSManagedObjectModel *model;
@property (nonatomic, readonly) NSString *modelVersionHash;

- (void)dealloc;
- (id)description;
- (id)initWithPersistentStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (id)model;
- (id)modelVersionHash;

@end
