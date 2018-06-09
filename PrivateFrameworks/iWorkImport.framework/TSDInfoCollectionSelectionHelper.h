/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDInfoCollectionSelectionHelper : NSObject {
    NSSet * _modelInfos;
    NSSet * _nonInteractiveInfos;
}

@property (nonatomic, readonly) NSString *UUIDDescription;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSSet *infosWithNonInteractiveInfos;
@property (nonatomic, readonly) NSSet *modelInfos;
@property (nonatomic, readonly) NSSet *nonInteractiveInfos;

- (void).cxx_destruct;
- (id)UUIDDescription;
- (id)description;
- (unsigned long long)hash;
- (id)infosWithNonInteractiveInfos;
- (id)init;
- (id)initWithInteractiveInfos:(id)arg1;
- (id)initWithInteractiveInfos:(id)arg1 nonInteractiveInfos:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)modelInfos;
- (id)nonInteractiveInfos;

@end
