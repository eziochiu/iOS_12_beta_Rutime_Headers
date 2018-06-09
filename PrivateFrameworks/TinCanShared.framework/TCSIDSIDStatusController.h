/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
 */

@interface TCSIDSIDStatusController : NSObject <IDSBatchIDQueryControllerDelegate> {
    <TCSIDSIDStatusControllerDelegate> * _delegate;
    NSMutableDictionary * _destinationToStatus;
    NSArray * _destinations;
    IDSBatchIDQueryController * _queryController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <TCSIDSIDStatusControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *destinationToStatus;
@property (nonatomic, readonly) NSArray *destinations;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSBatchIDQueryController *queryController;
@property (nonatomic, readonly) NSNumber *status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *tinCanHandle;

+ (id)stringForDestinationToStatus:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)destinationToStatus;
- (id)destinations;
- (void)idStatusUpdatedForDestinations:(id)arg1;
- (id)initWithItem:(id)arg1 delegate:(id)arg2;
- (id)queryController;
- (void)setQueryController:(id)arg1;
- (id)status;
- (id)tinCanHandle;

@end
