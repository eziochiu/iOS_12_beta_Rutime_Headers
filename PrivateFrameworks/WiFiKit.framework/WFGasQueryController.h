/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFGasQueryController : NSObject {
    <WFGasQueryControllerDelegate> * _delegate;
    NSMapTable * _gasResponseCache;
    NSSet * _profiles;
    NSMutableSet * _resolvedNetworks;
}

@property (nonatomic) <WFGasQueryControllerDelegate> *delegate;
@property (nonatomic, retain) NSMapTable *gasResponseCache;
@property (nonatomic, readonly) NSSet *profiles;
@property (nonatomic, retain) NSMutableSet *resolvedNetworks;

- (void).cxx_destruct;
- (id)_existingProfileForANQPResult:(id)arg1;
- (void)_processANQPResults:(id)arg1 scanRecords:(id)arg2 error:(id)arg3;
- (id)delegate;
- (id)gasResponseCache;
- (id)init;
- (id)profileForNetwork:(id)arg1;
- (id)profiles;
- (void)removeAllProfiles;
- (void)removeProfileForNetwork:(id)arg1;
- (void)resolveProfileForNetwork:(id)arg1 handler:(id /* block */)arg2 force:(bool)arg3;
- (void)resolveProfilesForNetworks:(id)arg1;
- (id)resolvedNetworks;
- (void)setDelegate:(id)arg1;
- (void)setGasResponseCache:(id)arg1;
- (void)setResolvedNetworks:(id)arg1;

@end
