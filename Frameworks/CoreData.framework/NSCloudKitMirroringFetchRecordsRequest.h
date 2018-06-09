/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCloudKitMirroringFetchRecordsRequest : NSCloudKitMirroringImportRequest {
    bool  _editable;
    NSDictionary * _entityNameToAttributeNamesToFetch;
    NSDictionary * _entityNameToAttributesToFetch;
    NSArray * _objectIDsToFetch;
}

@property (nonatomic, readonly, copy) NSDictionary *entityNameToAttributesToFetch;
@property (nonatomic, copy) NSArray *objectIDsToFetch;

- (id)_entityNameToAttributeNamesToFetch;
- (bool)_isEditable;
- (void)dealloc;
- (id)entityNameToAttributesToFetch;
- (id)initWithOptions:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)objectIDsToFetch;
- (void)setEntityNameToAttributeNamesToFetch:(id)arg1;
- (void)setEntityNameToAttributesToFetch:(id)arg1;
- (void)setObjectIDsToFetch:(id)arg1;
- (void)throwNotEditable:(SEL)arg1;
- (bool)validateForUseWithStore:(id)arg1 error:(id*)arg2;

@end
