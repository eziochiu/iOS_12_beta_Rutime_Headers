/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLInternalResourceCloudAttributes : PLManagedObject

@property (nonatomic) short cloudLocalState;
@property (nonatomic, retain) NSDate *dateCreated;
@property (nonatomic, retain) NSString *itemIdentifier;
@property (nonatomic, retain) NSDate *lastOnDemandDownloadDate;
@property (nonatomic, retain) NSDate *lastPrefetchDate;
@property (nonatomic) short prefetchCount;
@property (nonatomic, retain) NSDate *prunedAt;
@property (nonatomic, retain) PLInternalResource *resource;

+ (id)cloudAttributesForInternalResource:(id)arg1 externalResource:(id)arg2 inManagedObjectContext:(id)arg3 createIfNeeded:(bool)arg4;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertIntoManagedObjectContext:(id)arg1;

- (void)updateWithExternalResource:(id)arg1;

@end