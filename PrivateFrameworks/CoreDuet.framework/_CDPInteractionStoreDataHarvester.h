/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDPInteractionStoreDataHarvester : NSObject <_CDPDataHarvester> {
    NSMutableDictionary * _identifierToContactMap;
    NSArray * _interactions;
    NSPredicate * _predicate;
    _CDInteractionStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *interactions;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic, retain) _CDInteractionStore *store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contactForIdentifier:(id)arg1;
- (id)interactions;
- (void)loadWithLimit:(unsigned long long)arg1 dataPointReader:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)predicate;
- (void)setPredicate:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;

@end