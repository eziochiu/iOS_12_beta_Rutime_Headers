/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCloudKitMirroringRequest : NSPersistentStoreRequest {
    NSCloudKitMirroringRequestOptions * _options;
    id /* block */  _requestCompletionBlock;
    NSUUID * _requestIdentifier;
}

@property (nonatomic, readonly, copy) NSCloudKitMirroringRequestOptions *options;
@property (nonatomic, readonly, copy) id /* block */ requestCompletionBlock;
@property (nonatomic, readonly) NSUUID *requestIdentifier;

- (void)dealloc;
- (id)description;
- (id)initWithOptions:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)options;
- (id /* block */)requestCompletionBlock;
- (id)requestIdentifier;
- (unsigned long long)requestType;
- (bool)validateForUseWithStore:(id)arg1 error:(id*)arg2;

@end
