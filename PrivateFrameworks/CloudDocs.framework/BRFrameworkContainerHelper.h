/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRFrameworkContainerHelper : NSObject <BRContainerHelper>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned short)br_capabilityToMoveFromURL:(id)arg1 toNewParent:(id)arg2 error:(id*)arg3;
- (bool)canFetchAllContainersByID;
- (id)fetchAllContainersByIDWithError:(id*)arg1;
- (id)fetchContainerForURL:(id)arg1;
- (id)itemIDForURL:(id)arg1 error:(id*)arg2;

@end
