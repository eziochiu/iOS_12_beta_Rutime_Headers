/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLCKMetadataRequestContext : NSSQLStoreRequestContext

@property (nonatomic, readonly) PFCloudKitMetadataRequest *request;

- (bool)executeRequestUsingConnection:(id)arg1;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (bool)isWritingRequest;
- (id)request;

@end
